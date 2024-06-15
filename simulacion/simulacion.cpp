#include "simulacion.h"
#include "ui_simulacion.h"
#include <QPainter>
#include "../transporte/transporte.h"

simulacion::simulacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::simulacion)
{
    ui->setupUi(this);

}

simulacion::~simulacion()
{
    delete ui;
}

void simulacion::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    std::pair<int, int> coordsInicial;

    for (int i = 0; i < opcionMarcada.size(); ++i) {
        QString nombreTorre = opcionMarcada.at(i);

        std::pair<int, int> coords = obtenerCoordenadas(nombreTorre, listaTorres);

        QPoint punto(coords.first, coords.second);

        if (i > 0) {
            QPoint puntoInicial(coordsInicial.first, coordsInicial.second);
            QPoint puntoFinal(coords.first, coords.second);

            QPen pen(Qt::cyan);
            pen.setWidth(3);
            painter.setPen(pen);
            painter.drawLine(puntoInicial, puntoFinal);
        }

        QPen pointPen(Qt::cyan);
        painter.setPen(pointPen);
        painter.setBrush(Qt::cyan);
        painter.drawEllipse(punto, 8, 8);

        coordsInicial = coords;
    }
}

std::pair<int, int> simulacion::obtenerCoordenadas(const QString& nombreTorre, const QList<torre>& lista) {
    for (const auto& torre : lista) {
        if (torre.nombreTorre == nombreTorre) {
            return std::make_pair(torre.x, torre.y);
        }
    }
    return std::make_pair(0, 0);
}
