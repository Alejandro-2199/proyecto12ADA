/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_5;
    QFrame *frame;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(64, 65, 66, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-image: url('C:/Users/aleja/OneDrive/Documents/Qt/Proyecto_2/assets/backgrounds/Property 1=Center.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #ffffff;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 781, 541));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        frame = new QFrame(horizontalLayoutWidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(200, 300));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-image: url('C:/Users/aleja/OneDrive/Documents/Qt/Proyecto_2/assets/other/Logo - Full.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(200, 50));
        pushButton->setMaximumSize(QSize(200, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        font.setWeight(QFont::Medium);
        font.setItalic(true);
        pushButton->setFont(font);
        pushButton->setContextMenuPolicy(Qt::CustomContextMenu);
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 200px; \n"
"    height: 50px;\n"
"    background-color: rgba(0, 0, 0, 0.6);\n"
"    border: none; \n"
"    border-radius: 4px;\n"
"    color: #E2DED3; \n"
"    font-family: 'Roboto';\n"
"    font-style: italic;\n"
"    font-weight: 500;\n"
"    font-size: 20px;\n"
"    padding: 0; \n"
"    text-align: center;\n"
"    margin: 1px; \n"
"    border: 1px solid rgba(226, 222, 211, 0.3); \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"    background: rgba(0, 0, 0, 0.2); \n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"	width: 346px;\n"
"    height: 75px;\n"
"    border: 1px solid #E2DED3;\n"
"    background: rgba(0, 0, 0, 0.9);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(200, 50));
        pushButton_4->setMaximumSize(QSize(200, 50));
        pushButton_4->setContextMenuPolicy(Qt::CustomContextMenu);
        pushButton_4->setLayoutDirection(Qt::LeftToRight);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 202px; \n"
"    height: 52px;\n"
"    background-color: rgba(0, 0, 0, 0.6);\n"
"    border: none; \n"
"    border-radius: 4px;\n"
"    color: #E2DED3; \n"
"    font-family: 'Roboto';\n"
"    font-style: italic;\n"
"    font-weight: 500;\n"
"    font-size: 20px;\n"
"    padding: 0; \n"
"    text-align: center;\n"
"    margin: 1px; \n"
"    border: 1px solid rgba(226, 222, 211, 0.3); \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"    background: rgba(0, 0, 0, 0.2); \n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"	width: 346px;\n"
"    height: 75px;\n"
"    border: 1px solid #E2DED3;\n"
"    background: rgba(0, 0, 0, 0.9);\n"
"}\n"
"\n"
""));

        horizontalLayout_6->addWidget(pushButton_4);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Transporte", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Mapa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
