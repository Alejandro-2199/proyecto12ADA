#include "transporte.h"
#include "ui_transporte.h"
#include "../grafos/grafos.h"
#include "../simulacion/simulacion.h"

QList<QString> opcionMarcada;

transporte::transporte(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::transporte)
{
    ui->setupUi(this);

    model.setHorizontalHeaderLabels({"Costo", "Rutas"});
    ui->tableView->setModel(&model);

    connect(ui->tableView->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, &transporte::onSelectionChanged);
}

transporte::~transporte()
{
    delete ui;
}

void transporte::onSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected)
{
    QModelIndexList selectedIndexes = selected.indexes();

    if (!selectedIndexes.isEmpty()) {
        for (const QModelIndex &index : selectedIndexes) {
            QVariant data = index.data(Qt::DisplayRole);
            if (data.isValid() && data.canConvert<QString>()) {
                QString nombreTorre = data.toString();
                QStringList nombres = nombreTorre.split(", ", Qt::SkipEmptyParts);
                opcionMarcada.append(nombres);
            }
        }
        qDebug() << "Transporte:" << opcionMarcada;
    }
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
    model.clear();
    opcionMarcada.clear();

    m_Grafo = new Grafo();
    QString origen = ui->comboBoxOrigen->currentText();
    QString destino = ui->comboBoxDestino->currentText();

    if(ui->manabox->isChecked()){
        model.setHorizontalHeaderLabels({"Costo Mana", "Rutas"});
        ui->tableView->setModel(&model);

        QHash<int, QList<QList<QString>>> mana = m_Grafo->Top5_mana(m_Grafo->multiGrafo, origen, destino);

        QList<QPair<int, QList<QList<QString>>>> data;

        for (auto it = mana.constBegin(); it != mana.constEnd(); ++it) {
            int key = it.key();
            const QList<QList<QString>> &outerList = it.value();

            data.append(qMakePair(key, outerList));
        }

        std::sort(data.begin(), data.end(), [](const QPair<int, QList<QList<QString>>> &a, const QPair<int, QList<QList<QString>>> &b) {
            return a.first < b.first;
        });

        for (const auto &pair : data) {
            int costo = pair.first;
            const QList<QList<QString>> &rutas = pair.second;

            QStandardItem *costoItem = new QStandardItem(QString::number(costo));

            QString rutasString;
            if (!rutas.isEmpty()) {
                const QList<QString> &ruta = rutas[0];
                rutasString = ruta.join(", ");
            }

            QStandardItem *rutasItem = new QStandardItem(rutasString);

            QList<QStandardItem *> rowData;
            rowData.append(costoItem);
            rowData.append(rutasItem);

            model.appendRow(rowData);
        }

        if (data.isEmpty()){
            model.clear();
            model.setHorizontalHeaderLabels({"No hay rutas disponibles"});
            ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
            ui->tableView->setColumnWidth(0, 200);
            ui->tableView->setModel(&model);
        }

    }else if (ui->timebox->isChecked()) {

        model.setHorizontalHeaderLabels({"Costo Tiempo", "Rutas"});
        ui->tableView->setModel(&model);

        QHash<int, QList<QList<QString>>> tiempo = m_Grafo->Top5_tiempo(m_Grafo->multiGrafo, origen, destino);

        QList<QPair<int, QList<QList<QString>>>> data;

        for (auto it = tiempo.constBegin(); it != tiempo.constEnd(); ++it) {
            int key = it.key();
            const QList<QList<QString>> &outerList = it.value();

            data.append(qMakePair(key, outerList));
        }

        std::sort(data.begin(), data.end(), [](const QPair<int, QList<QList<QString>>> &a, const QPair<int, QList<QList<QString>>> &b) {
            return a.first < b.first;
        });

        for (const auto &pair : data) {
            int costo = pair.first;
            const QList<QList<QString>> &rutas = pair.second;

            QStandardItem *costoItem = new QStandardItem(QString::number(costo));

            QString rutasString;
            if (!rutas.isEmpty()) {
                const QList<QString> &ruta = rutas[0];
                rutasString = ruta.join(", ");
            }

            QStandardItem *rutasItem = new QStandardItem(rutasString);

            QList<QStandardItem *> rowData;
            rowData.append(costoItem);
            rowData.append(rutasItem);

            model.appendRow(rowData);
        }

        if (data.isEmpty()){
            model.clear();
            model.setHorizontalHeaderLabels({"No hay rutas disponibles"});
            ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
            ui->tableView->setColumnWidth(0, 200);
            ui->tableView->setModel(&model);
        }

    }else if (ui->connectionbox->isChecked()) {

        model.setHorizontalHeaderLabels({"Saltos", "Rutas"});
        ui->tableView->setModel(&model);

        QHash<int, QList<QList<QString>>> saltos = m_Grafo->Top5_conexiones(m_Grafo->multiGrafo, origen, destino);
        m_Grafo->print_top5(m_Grafo->Top5_conexiones(m_Grafo->multiGrafo, "Central Tower", "Hateno Tower"));

        QList<QPair<int, QList<QList<QString>>>> data;

        for (auto it = saltos.constBegin(); it != saltos.constEnd(); ++it) {
            int key = it.key();
            const QList<QList<QString>> &outerList = it.value();

            data.append(qMakePair(key, outerList));
        }

        std::sort(data.begin(), data.end(), [](const QPair<int, QList<QList<QString>>> &a, const QPair<int, QList<QList<QString>>> &b) {
            return a.first < b.first;
        });

        for (const auto &pair : data) {
            int costo = pair.first;
            const QList<QList<QString>> &rutas = pair.second;

            QStandardItem *costoItem = new QStandardItem(QString::number(costo));

            QString rutasString;
            if (!rutas.isEmpty()) {
                const QList<QString> &ruta = rutas[0];
                rutasString = ruta.join(", ");
            }

            QStandardItem *rutasItem = new QStandardItem(rutasString);

            QList<QStandardItem *> rowData;
            rowData.append(costoItem);
            rowData.append(rutasItem);

            model.appendRow(rowData);
        }

        if (data.isEmpty()){
            model.clear();
            model.setHorizontalHeaderLabels({"No hay rutas disponibles"});
            ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
            ui->tableView->setColumnWidth(0, 200);
            ui->tableView->setModel(&model);
        }

    }
}


void transporte::on_manabox_clicked()
{
    if (ui->manabox->isChecked()) {
        ui->timebox->setEnabled(false);
        ui->connectionbox->setEnabled(false);
    }else{
        ui->timebox->setEnabled(true);
        ui->connectionbox->setEnabled(true);
    }
}


void transporte::on_timebox_clicked()
{
    if (ui->timebox->isChecked()) {
        ui->manabox->setEnabled(false);
        ui->connectionbox->setEnabled(false);
    }else{
        ui->manabox->setEnabled(true);
        ui->connectionbox->setEnabled(true);
    }
}


void transporte::on_connectionbox_clicked()
{
    if (ui->connectionbox->isChecked()) {
        ui->manabox->setEnabled(false);
        ui->timebox->setEnabled(false);
    }else{
        ui->manabox->setEnabled(true);
        ui->timebox->setEnabled(true);
    }
}
