#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include <QFileDialog>
#include <QPixmap>
#include"cd.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_m_actExit_triggered()
{
    if(QMessageBox::question(this,windowTitle(),"您确定要退出吗？",
                             QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
        {
            close();
        }
}

void MainWindow::on_m_act_file_triggered()//open image,and set in the Box.
{


// 打开文件对话框，仅显示图片文件

    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("选择图片" ) ,    // 对话框标题
                                                    QDir::homePath(), // 默认打开的目录
                                                    tr("图片文件 (*.png *.jpg *bmp *.gif)")
                                                    );
if(!fileName.isEmpty())
{
    QPixmap pixmap(fileName);
    if(pixmap.isNull())
    {
        QMessageBox::warning(this,windowTitle(),tr("无法加载图片！"));
    }
    else
    {
        ui->m_lab_Image->setPixmap(pixmap.scaled(ui->m_lab_Image->size(),
                                                 Qt::KeepAspectRatio));
    }
}


}

void MainWindow::on_m_act_save_triggered()
{

}

void MainWindow::on_m_act_delete_triggered()
{

}

void MainWindow::on_m_act_bcd_triggered()
{

}

void MainWindow::on_m_act_scd_triggered()
{

}

void MainWindow::on_m_act_mcd_triggered()
{
    CD * m_cd = new CD(this);
    if (m_cd->exec()==QDialog::Accepted)
        {

        }
}

void MainWindow::on_m_act_object_detection_triggered()
{

}

void MainWindow::on_m_actCloud_triggered()
{

}

void MainWindow::on_m_actClass_triggered()
{

}

void MainWindow::on_m_actVersion_triggered()
{
    QMessageBox::about(this,windowTitle(),"遥感解译平台版本1.0,请尽请期待工作人员的后续开发！");
}

void MainWindow::on_m_actRadiationc_triggered()//辐射定标
{

}

void MainWindow::on_m_actAst_triggered()
{

}

void MainWindow::on_m_actRectilinear_triggered()
{

}

void MainWindow::on_m_actFusion_triggered()
{

}

void MainWindow::on_m_actRoad_triggered()
{

}
