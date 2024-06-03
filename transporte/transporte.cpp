#include "transporte.h"
#include "ui_transporte.h"
#include "../grafos/grafos.h"
#include "../simulacion/simulacion.h"

transporte::transporte(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::transporte)
{
    ui->setupUi(this);
}

transporte::~transporte()
{
    delete ui;
}

void transporte::on_pushButton_3_clicked()
{
    close();
}


void transporte::on_pushButton_2_clicked()
{
    simulacion *simulacionWindow = new simulacion(this);

    simulacionWindow->exec();
}



void transporte::on_pushButton_clicked()
{
    Grafo grafo;
    qDebug() << &grafo;
}


