#ifndef TRANSPORTE_H
#define TRANSPORTE_H

#include <QDialog>

namespace Ui {
class transporte;
}

class transporte : public QDialog
{
    Q_OBJECT

public:
    explicit transporte(QWidget *parent = nullptr);
    ~transporte();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::transporte *ui;
};

#endif // TRANSPORTE_H
