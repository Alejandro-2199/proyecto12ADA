#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "map/map.h"
#include "transporte/transporte.h"
#include "extra/extra.h"
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QIcon icon(":/ui/ui/Figma Profile Avatar.png");
    this->setWindowIcon(icon);

    QPalette palette = this->palette();
    palette.setColor(QPalette::Window, QColor(60, 60, 60));
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    transporte *transporteWindow = new transporte(this);

    transporteWindow->exec();
}


void MainWindow::on_pushButton_4_clicked()
{
    map *mapWindow = new map(this);

    mapWindow->exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    extra *extraWindow = new extra(this);

    extraWindow->exec();
}

