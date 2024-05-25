#include "map.h"
#include "ui_map.h"

map::map(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::map)
{
    ui->setupUi(this);
    //ui->pushButton->setVisible(false);

}


map::~map()
{
    delete ui;
}

void map::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape) {
        close();
    } else {
        QDialog::keyPressEvent(event);
    }
}
