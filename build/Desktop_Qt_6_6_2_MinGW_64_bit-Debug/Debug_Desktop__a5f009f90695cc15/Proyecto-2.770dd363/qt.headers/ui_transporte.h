/********************************************************************************
** Form generated from reading UI file 'transporte.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSPORTE_H
#define UI_TRANSPORTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_transporte
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QListView *listView;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *transporte)
    {
        if (transporte->objectName().isEmpty())
            transporte->setObjectName("transporte");
        transporte->resize(500, 500);
        transporte->setMinimumSize(QSize(500, 500));
        transporte->setMaximumSize(QSize(500, 500));
        transporte->setLayoutDirection(Qt::LeftToRight);
        transporte->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	image: url('C:/Users/aleja/OneDrive/Documents/Qt/Proyecto_2/assets/other/Illustration=Slate.png');\n"
"	image-position: right;\n"
"    background-image: url('C:/Users/aleja/OneDrive/Documents/Qt/Proyecto_2/assets/backgrounds/Color=Dark Blue.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #ffffff;\n"
"}"));
        gridLayoutWidget = new QWidget(transporte);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 495, 481));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("The Wild Breath of Zelda")});
        font.setPointSize(20);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #FFF8E7;\n"
"	padding: 2 px;\n"
"}"));

        verticalLayout->addWidget(label_4);

        listView = new QListView(gridLayoutWidget);
        listView->setObjectName("listView");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy1);
        listView->setMaximumSize(QSize(250, 350));
        listView->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: rgba(0, 0, 0, 0.6);\n"
"    border: 1px solid rgba(226, 222, 211, 0.3);\n"
"    border-radius: 4px;\n"
"    color: #E2DED3;\n"
"    font-family: 'Roboto';\n"
"    font-style: italic;\n"
"    font-weight: 500;\n"
"    font-size: 20px;\n"
"    padding: 5px;\n"
"    margin: 2px; \n"
"}\n"
"\n"
"QListWidget::item {\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: rgba(0, 0, 0, 0.9);\n"
"    color: #E2DED3;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: rgba(0, 0, 0, 0.8);\n"
"}\n"
""));

        verticalLayout->addWidget(listView);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(0, 50));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("The Wild Breath of Zelda")});
        font1.setPointSize(36);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #FFF8E7;\n"
"\n"
"}"));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(100, 40));
        pushButton_2->setMaximumSize(QSize(16777215, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(100, 40));
        pushButton_3->setMaximumSize(QSize(16777215, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setSizeConstraint(QLayout::SetFixedSize);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #FFF8E7;\n"
"	padding: 2 px;\n"
"}"));

        verticalLayout_6->addWidget(label_2);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy3);
        comboBox->setMinimumSize(QSize(0, 30));
        comboBox->setMaximumSize(QSize(16777215, 30));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgba(0, 0, 0, 0.6);\n"
"    border: none; \n"
"    border-radius: 4px;\n"
"    color: #E2DED3; \n"
"    font-family: 'Roboto';\n"
"    font-style: italic;\n"
"    font-weight: 500;\n"
"    font-size: 20px;\n"
"    padding: 0 10px; \n"
"    text-align: center;\n"
"    margin: 2px; \n"
"    border: 1px solid rgba(226, 222, 211, 0.3); \n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(0, 0, 0, 0.6);\n"
"    color: #E2DED3;\n"
"    border: none;\n"
"    selection-background-color: rgba(0, 0, 0, 0.9);\n"
"    selection-color: #E2DED3;\n"
"    font-family: 'Roboto';\n"
"    font-style: italic;\n"
"    font-weight: 500;\n"
"    font-size: 20px;\n"
"    padding: 5;\n"
"    text-align: center;\n"
"    border-radius: 4px;\n"
"    border: 1px solid rgba(226, 222, 211, 0.3);\n"
"}"));

        verticalLayout_6->addWidget(comboBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_3);


        verticalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #FFF8E7;\n"
"	padding: 2 px;\n"
"}"));

        verticalLayout_5->addWidget(label_3);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setMinimumSize(QSize(0, 30));
        comboBox_2->setMaximumSize(QSize(16777215, 30));
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgba(0, 0, 0, 0.6);\n"
"    border: none; \n"
"    border-radius: 4px;\n"
"    color: #E2DED3; \n"
"    font-family: 'Roboto';\n"
"    font-style: italic;\n"
"    font-weight: 500;\n"
"    font-size: 20px;\n"
"    padding: 0 10px; \n"
"    text-align: center;\n"
"    margin: 2px; \n"
"    border: 1px solid rgba(226, 222, 211, 0.3); \n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(0, 0, 0, 0.6);\n"
"    color: #E2DED3;\n"
"    border: none;\n"
"    selection-background-color: rgba(0, 0, 0, 0.9);\n"
"    selection-color: #E2DED3;\n"
"    font-family: 'Roboto';\n"
"    font-style: italic;\n"
"    font-weight: 500;\n"
"    font-size: 20px;\n"
"    padding: 5;\n"
"    text-align: center;\n"
"    border-radius: 4px;\n"
"    border: 1px solid rgba(226, 222, 211, 0.3);\n"
"}"));

        verticalLayout_5->addWidget(comboBox_2);


        verticalLayout_4->addLayout(verticalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);
        pushButton->setMinimumSize(QSize(100, 40));
        pushButton->setMaximumSize(QSize(100, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);


        retranslateUi(transporte);

        QMetaObject::connectSlotsByName(transporte);
    } // setupUi

    void retranslateUi(QDialog *transporte)
    {
        transporte->setWindowTitle(QCoreApplication::translate("transporte", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("transporte", " MENU DE RUTAS", nullptr));
        label->setText(QCoreApplication::translate("transporte", "MENU DE TRANSPORTE", nullptr));
        pushButton_2->setText(QCoreApplication::translate("transporte", "Viajar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("transporte", "Volver", nullptr));
        label_2->setText(QCoreApplication::translate("transporte", " TORRE DE ORIGEN", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("transporte", "Central Tower", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("transporte", "Dueling Peaks Tower", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("transporte", "Hateno Tower", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("transporte", "Lake Tower", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("transporte", "Ridgeland Tower", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("transporte", "Tabantha Tower", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("transporte", "Wasteland Tower", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("transporte", "Woodland Tower", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("transporte", "Akkala Tower", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("transporte", "Eldin Tower", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("transporte", "Faron Tower", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("transporte", "Gerudo Tower", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("transporte", "Hebra Tower", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("transporte", "Lanayru Tower", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("transporte", "Great Plateau Tower", nullptr));

        label_3->setText(QCoreApplication::translate("transporte", " TORRE DE DESTINO", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("transporte", "Gerudo Tower", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("transporte", "Central Tower", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("transporte", "Dueling Peaks Tower", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("transporte", "Hateno Tower", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("transporte", "Lake Tower", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("transporte", "Ridgeland Tower", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("transporte", "Tabantha Tower", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("transporte", "Wasteland Tower", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("transporte", "Woodland Tower", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("transporte", "Akkala Tower", nullptr));
        comboBox_2->setItemText(10, QCoreApplication::translate("transporte", "Eldin Tower", nullptr));
        comboBox_2->setItemText(11, QCoreApplication::translate("transporte", "Faron Tower", nullptr));
        comboBox_2->setItemText(12, QCoreApplication::translate("transporte", "Hebra Tower", nullptr));
        comboBox_2->setItemText(13, QCoreApplication::translate("transporte", "Lanayru Tower", nullptr));
        comboBox_2->setItemText(14, QCoreApplication::translate("transporte", "Great Plateau Tower", nullptr));

        pushButton->setText(QCoreApplication::translate("transporte", "Ver Rutas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transporte: public Ui_transporte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSPORTE_H
