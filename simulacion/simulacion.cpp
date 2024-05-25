#include "simulacion.h"
#include "ui_simulacion.h"

simulacion::simulacion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::simulacion)
{
    ui->setupUi(this);
}

simulacion::~simulacion()
{
    delete ui;
}
