#include "extra.h"
#include "ui_extra.h"

extra::extra(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::extra)
{
    ui->setupUi(this);
}

extra::~extra()
{
    delete ui;
}
