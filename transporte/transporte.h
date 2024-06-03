#ifndef TRANSPORTE_H
#define TRANSPORTE_H

#include <QDialog>
#include <QVector>
#include <QHash>
#include <QList>
#include "../grafos/grafos.h"

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

    void on_pushButton_clicked();

private:
    Ui::transporte *ui;
    QHash<int, QList<int>> adjList;
};

#endif // TRANSPORTE_H
