/********************************************************************************
** Form generated from reading UI file 'simulacion.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULACION_H
#define UI_SIMULACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_simulacion
{
public:

    void setupUi(QDialog *simulacion)
    {
        if (simulacion->objectName().isEmpty())
            simulacion->setObjectName("simulacion");
        simulacion->resize(1023, 852);
        simulacion->setMinimumSize(QSize(1023, 852));
        simulacion->setMaximumSize(QSize(1023, 852));
        simulacion->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	image: url(:/ui/ui/Sheikah - Frame Art.png);\n"
"    background-image: url('C:/Users/aleja/OneDrive/Documents/Qt/Proyecto_2/assets/map/World Map - Full @25%.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #ffffff;\n"
"}"));

        retranslateUi(simulacion);

        QMetaObject::connectSlotsByName(simulacion);
    } // setupUi

    void retranslateUi(QDialog *simulacion)
    {
        simulacion->setWindowTitle(QCoreApplication::translate("simulacion", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class simulacion: public Ui_simulacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULACION_H
