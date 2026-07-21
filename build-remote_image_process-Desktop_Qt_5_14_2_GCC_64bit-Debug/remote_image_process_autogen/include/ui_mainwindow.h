/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *m_act_file;
    QAction *m_act_save;
    QAction *m_act_delete;
    QAction *m_act_bcd;
    QAction *m_act_scd;
    QAction *m_act_mcd;
    QAction *m_act_object_detection;
    QAction *m_actCloud;
    QAction *m_actClass;
    QAction *m_actVersion;
    QAction *m_actRadiationc;
    QAction *m_actAst;
    QAction *m_actRectilinear;
    QAction *m_actFusion;
    QAction *m_actRoad;
    QAction *m_actExit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *m_lab_Image;
    QLabel *m_lab_output;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(670, 350);
        m_act_file = new QAction(MainWindow);
        m_act_file->setObjectName(QString::fromUtf8("m_act_file"));
        m_act_save = new QAction(MainWindow);
        m_act_save->setObjectName(QString::fromUtf8("m_act_save"));
        m_act_delete = new QAction(MainWindow);
        m_act_delete->setObjectName(QString::fromUtf8("m_act_delete"));
        m_act_bcd = new QAction(MainWindow);
        m_act_bcd->setObjectName(QString::fromUtf8("m_act_bcd"));
        m_act_scd = new QAction(MainWindow);
        m_act_scd->setObjectName(QString::fromUtf8("m_act_scd"));
        m_act_mcd = new QAction(MainWindow);
        m_act_mcd->setObjectName(QString::fromUtf8("m_act_mcd"));
        m_act_object_detection = new QAction(MainWindow);
        m_act_object_detection->setObjectName(QString::fromUtf8("m_act_object_detection"));
        m_actCloud = new QAction(MainWindow);
        m_actCloud->setObjectName(QString::fromUtf8("m_actCloud"));
        m_actClass = new QAction(MainWindow);
        m_actClass->setObjectName(QString::fromUtf8("m_actClass"));
        m_actVersion = new QAction(MainWindow);
        m_actVersion->setObjectName(QString::fromUtf8("m_actVersion"));
        m_actRadiationc = new QAction(MainWindow);
        m_actRadiationc->setObjectName(QString::fromUtf8("m_actRadiationc"));
        m_actAst = new QAction(MainWindow);
        m_actAst->setObjectName(QString::fromUtf8("m_actAst"));
        m_actRectilinear = new QAction(MainWindow);
        m_actRectilinear->setObjectName(QString::fromUtf8("m_actRectilinear"));
        m_actFusion = new QAction(MainWindow);
        m_actFusion->setObjectName(QString::fromUtf8("m_actFusion"));
        m_actRoad = new QAction(MainWindow);
        m_actRoad->setObjectName(QString::fromUtf8("m_actRoad"));
        m_actExit = new QAction(MainWindow);
        m_actExit->setObjectName(QString::fromUtf8("m_actExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_lab_Image = new QLabel(centralwidget);
        m_lab_Image->setObjectName(QString::fromUtf8("m_lab_Image"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(233, 185, 110, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 240, 215, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(244, 212, 162, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(116, 92, 55, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(155, 123, 73, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(244, 220, 182, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        m_lab_Image->setPalette(palette);
        m_lab_Image->setFrameShape(QFrame::Box);
        m_lab_Image->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(m_lab_Image, 0, 0, 1, 1);

        m_lab_output = new QLabel(centralwidget);
        m_lab_output->setObjectName(QString::fromUtf8("m_lab_output"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(196, 225, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush11(QColor(225, 240, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(98, 112, 127, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(131, 150, 170, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        m_lab_output->setPalette(palette1);
        m_lab_output->setFrameShape(QFrame::Box);
        m_lab_output->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(m_lab_output, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 670, 28));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menu_6 = new QMenu(menubar);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_6->menuAction());
        menu->addAction(m_act_file);
        menu->addAction(m_act_save);
        menu->addAction(m_act_delete);
        menu->addSeparator();
        menu_2->addSeparator();
        menu_2->addAction(m_act_bcd);
        menu_2->addAction(m_act_scd);
        menu_2->addAction(m_act_mcd);
        menu_3->addSeparator();
        menu_3->addAction(m_actRadiationc);
        menu_3->addAction(m_actAst);
        menu_3->addAction(m_actRectilinear);
        menu_4->addAction(m_actRectilinear);
        menu_4->addAction(m_actFusion);
        menu_5->addAction(m_act_object_detection);
        menu_5->addSeparator();
        menu_5->addAction(m_actCloud);
        menu_5->addAction(m_actClass);
        menu_5->addAction(m_actRoad);
        menu_6->addAction(m_actVersion);
        toolBar->addAction(m_act_file);
        toolBar->addAction(m_act_save);
        toolBar->addAction(m_act_delete);
        toolBar->addSeparator();
        toolBar->addAction(m_act_bcd);
        toolBar->addAction(m_act_scd);
        toolBar->addAction(m_act_mcd);
        toolBar->addSeparator();
        toolBar->addAction(m_actRoad);
        toolBar->addAction(m_act_object_detection);
        toolBar_2->addSeparator();
        toolBar_2->addAction(m_actExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        m_act_file->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        m_act_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(shortcut)
        m_act_save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        m_act_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(shortcut)
        m_act_delete->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        m_act_bcd->setText(QCoreApplication::translate("MainWindow", "\344\272\214\345\200\274\345\217\230\345\214\226\346\243\200\346\265\213", nullptr));
        m_act_scd->setText(QCoreApplication::translate("MainWindow", "\350\257\255\344\271\211\345\217\230\345\214\226\346\243\200\346\265\213", nullptr));
        m_act_mcd->setText(QCoreApplication::translate("MainWindow", "\345\244\232\346\250\241\346\200\201\345\217\230\345\214\226\346\243\200\346\265\213", nullptr));
        m_act_object_detection->setText(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\346\243\200\346\265\213", nullptr));
        m_actCloud->setText(QCoreApplication::translate("MainWindow", "\344\272\221\351\233\276\346\243\200\346\265\213\344\270\216\345\216\273\351\231\244", nullptr));
        m_actClass->setText(QCoreApplication::translate("MainWindow", "\345\210\206\347\261\273", nullptr));
        m_actVersion->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\234\254", nullptr));
        m_actRadiationc->setText(QCoreApplication::translate("MainWindow", "\350\276\220\345\260\204\345\256\232\346\240\207", nullptr));
        m_actAst->setText(QCoreApplication::translate("MainWindow", "\345\244\247\346\260\224\346\240\241\346\255\243", nullptr));
        m_actRectilinear->setText(QCoreApplication::translate("MainWindow", "\346\255\243\345\260\204\346\240\241\346\255\243", nullptr));
        m_actFusion->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\350\236\215\345\220\210", nullptr));
        m_actRoad->setText(QCoreApplication::translate("MainWindow", "\351\201\223\350\267\257\346\217\220\345\217\226", nullptr));
        m_actExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        m_actExit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        m_actExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        m_lab_Image->setText(QString());
        m_lab_output->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\217\230\345\214\226\346\243\200\346\265\213", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\244\232\345\205\211\350\260\261\345\215\253\346\230\237\345\233\276\345\203\217\351\242\204\345\244\204\347\220\206", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\345\205\250\350\211\262\345\215\253\346\230\237\345\233\276\345\203\217\351\242\204\345\244\204\347\220\206", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\345\205\266\344\273\226\345\212\237\350\203\275", nullptr));
        menu_6->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
