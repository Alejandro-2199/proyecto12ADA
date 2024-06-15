#ifndef TRANSPORTE_H
#define TRANSPORTE_H

#include <QDialog>
#include <QVector>
#include <QHash>
#include <QList>
#include <QStandardItemModel>
#include "../grafos/grafos.h"
#include "qitemselectionmodel.h"

extern QList<QString> opcionMarcada;

namespace Ui {
class transporte;
}

class transporte : public QDialog
{
    Q_OBJECT

public:
    explicit transporte(QWidget *parent = nullptr);
    ~transporte();
    void onSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected);

    //QList<QString> opcionMarcada;

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_manabox_clicked();
    void on_timebox_clicked();
    void on_connectionbox_clicked();

private:
    Ui::transporte *ui;
    QHash<int, QList<int>> adjList;
    Grafo *m_Grafo;
    QStandardItemModel model;
};

#endif // TRANSPORTE_H
