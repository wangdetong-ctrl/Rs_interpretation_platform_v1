#ifndef CD_H
#define CD_H
#pragma push_macro("slots")
#undef slots

// 2. 包含 LibTorch 头文件
#include <torch/script.h>

// 3. 立即恢复 slots 宏
#pragma pop_macro("slots")

#include <QDialog>

namespace Ui {
class CD;
}

class CD : public QDialog
{
    Q_OBJECT

public:
    explicit CD(QWidget *parent = nullptr);
    ~CD();

private slots:
    void on_m_btn_open_clicked();

    void on_m_btn_check_clicked();

    void on_m_btn_save_clicked();

public:
    torch::Tensor pixmapToTensor(const QPixmap &pixmap);
    QPixmap pixmap1;
    QPixmap pixmap2;
    QImage resultImg;

private:
    Ui::CD *ui;

};

#endif // CD_H
