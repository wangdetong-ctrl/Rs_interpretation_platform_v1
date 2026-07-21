#include "cd.h"
#include "ui_cd.h"
#include<QMessageBox>
#include<QFileDialog>


CD::CD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CD)
{
    ui->setupUi(this);
}

CD::~CD()
{
    delete ui;
}


torch::Tensor CD::pixmapToTensor(const QPixmap &pixmap)
{
    // 1. 转为 RGB888 格式
    QImage img = pixmap.toImage().convertToFormat(QImage::Format_RGB888);
    int width = img.width();
    int height = img.height();
    int bytesPerLine = img.bytesPerLine();

    // 2. 将 QImage 数据拷贝到连续内存（消除行填充）
    std::vector<uchar> contiguousData(width * height * 3);
    if (bytesPerLine == width * 3) {
        // 本来就是连续的，直接 memcpy
        memcpy(contiguousData.data(), img.bits(), width * height * 3);
    } else {
        // 逐行拷贝，跳过填充字节
        for (int y = 0; y < height; ++y) {
            const uchar* src = img.scanLine(y);
            uchar* dst = contiguousData.data() + y * width * 3;
            memcpy(dst, src, width * 3);
        }
    }

    // 3. 从连续内存创建 Tensor
    auto tensor = torch::from_blob(contiguousData.data(),
                                   {1, height, width, 3},
                                   torch::kUInt8)
                      .to(torch::kFloat32)
                      .div(255.0)                     // 归一化到 [0,1]
                      .permute({0, 3, 1, 2})          // NHWC → NCHW
                      .clone();                       // clone 拥有独立内存
    return tensor;
}

void CD::on_m_btn_open_clicked()
{
    // 打开文件对话框，仅显示图片文件

     QString fileName1 = QFileDialog::getOpenFileName(this,
                                                        tr("选择图片" ) ,    // 对话框标题
                                                        QDir::homePath(), // 默认打开的目录
                                                        tr("图片文件 (*.png *.jpg *bmp *.gif)")
                                                        );
    if(!fileName1.isEmpty())
    {
        pixmap1.load(fileName1);
        if(pixmap1.isNull())
        {
            QMessageBox::warning(this,windowTitle(),tr("无法加载图片！"));
        }
        else
        {
            ui->m_lab_pre->setPixmap(pixmap1.scaled(ui->m_lab_pre->size(),
                                                     Qt::KeepAspectRatio));
        }
    }


   //post image

    QString fileName2 = QFileDialog::getOpenFileName(this,
                                                       tr("选择图片" ) ,    // 对话框标题
                                                       QDir::homePath(), // 默认打开的目录
                                                       tr("图片文件 (*.png *.jpg *bmp *.gif)")
                                                       );
   if(!fileName2.isEmpty())
   {
       pixmap2.load(fileName2);
       if(pixmap2.isNull())
       {
           QMessageBox::warning(this,windowTitle(),tr("无法加载图片！"));
       }
       else
       {
           ui->m_lab_post->setPixmap(pixmap2.scaled(ui->m_lab_post->size(),
                                                    Qt::KeepAspectRatio));
       }
   }




}

void CD::on_m_btn_check_clicked()
{

    if (pixmap1.isNull() || pixmap2.isNull()) {
        QMessageBox::warning(this, windowTitle(), tr("请先打开两幅图像！"));
        return;
    }

    // 1. 加载模型
    torch::jit::Module module, module_dif;
    try {
        module = torch::jit::load("model.pt");
        module.eval();
        module_dif = torch::jit::load("model_dif.pt");
        module_dif.eval();
    } catch (const c10::Error& e) {
        QMessageBox::critical(this, "错误", "模型加载失败: " + QString::fromStdString(e.what()));
        return;
    }

    // 2. 获取原始尺寸（用于后续构造 QImage）
    QImage img1 = pixmap1.toImage().convertToFormat(QImage::Format_RGB888);
    int origH = img1.height();
    int origW = img1.width();

    // 3. QPixmap → Tensor（不缩放）
    torch::Tensor t1 = pixmapToTensor(pixmap1);
    torch::Tensor t2 = pixmapToTensor(pixmap2);

    // 4. 特征提取
    std::vector<torch::jit::IValue> inputs;
    inputs.push_back(t1);
    //inputs.push_back(t2);
    auto output = module.forward(inputs).toTuple();
    torch::Tensor F1 = output->elements()[0].toTensor();
    torch::Tensor F2 = output->elements()[1].toTensor();

    // 5. 特征距离
    torch::Tensor diff_feature = torch::sqrt(torch::pow(F1 - F2, 2) + 1e-15);

    // 6. 变化检测模型 → 概率图（形状应为 [1,1,H,W] 或 [1,H,W]）
    std::vector<torch::jit::IValue> dif_input;
    dif_input.push_back(diff_feature);
    auto output_dif = module_dif.forward(dif_input).toTensor();
    torch::Tensor prob = output_dif.squeeze().detach().cpu(); // [H,W]

    // 7. 二值化
    float threshold = 0.5;
    torch::Tensor binary = (prob > threshold).to(torch::kU8) * 255;

    // 8. 构造 QImage（单通道，尺寸与输入相同）
    resultImg = QImage(binary.data_ptr<uchar>(),
                     origW, origH,
                     origW,                           // 单通道每行字节数 = 宽度
                     QImage::Format_Grayscale8);

    ui->m_lab_output->setPixmap(QPixmap::fromImage(resultImg).scaled(
                                    ui->m_lab_output->size(),
                                    Qt::KeepAspectRatio,
                                    Qt::SmoothTransformation));
    //resultImg.save("change_result.png");
}

void CD::on_m_btn_save_clicked()
{
    // 1. 检查是否有结果图像
    if (resultImg.isNull()) {
        QMessageBox::warning(this, "警告", "没有可保存的变化图，请先执行检测。");
        return;
    }

    // 2. 打开保存对话框（正确的过滤器写法）
    QString path = QFileDialog::getSaveFileName(
        this,
        "保存变化图",
        QDir::homePath(),                           // 使用用户目录，可写
        "PNG 文件 (*.png);;JPEG 文件 (*.jpg *.jpeg);;所有文件 (*.*)"
    );

    if (path.isEmpty()) {
        return;   // 用户取消
    }

    // 3. 如果用户没写扩展名，根据所选过滤器自动补上
    if (!path.endsWith(".png", Qt::CaseInsensitive) &&
        !path.endsWith(".jpg", Qt::CaseInsensitive) &&
        !path.endsWith(".jpeg", Qt::CaseInsensitive)) {
        // 默认添加 .png（可根据需要修改）
        path += ".png";
    }

    // 4. 保存图像
    if (!resultImg.save(path)) {
        QMessageBox::warning(this, "警告", "图像保存失败，请检查路径或格式。");
    }
}
