#ifndef SIMULACION_H
#define SIMULACION_H

#include <QDialog>
#include <QList>
#include <QDebug>
#include <QPaintEvent>
#include <utility>

struct torre {
    QString nombreTorre;
    int x;
    int y;

    torre(const QString& nombre, int xCoord, int yCoord)
        : nombreTorre(nombre), x(xCoord), y(yCoord) {}
};

namespace Ui {
class simulacion;
}

class simulacion : public QDialog {
    Q_OBJECT

public:
    explicit simulacion(QWidget *parent = nullptr);
    ~simulacion();

    QList<torre> listaTorres = {
        {"Akkala Tower", 785, 290},
        {"Central Tower", 436, 450},
        {"Dueling Peaks Tower", 594, 558},
        {"Eldin Tower", 691, 273},
        {"Faron Tower", 611, 690},
        {"Gerudo Tower", 190, 575},
        {"Great Plateau Tower", 456, 561},
        {"Hateno Tower", 738, 599},
        {"Hebra Tower", 314, 249},
        {"Lake Tower", 498, 668},
        {"Lanayru Tower", 698, 406},
        {"Ridgeland Tower", 354, 351},
        {"Tabantha Tower", 195, 329},
        {"Woodland Tower", 580, 280},
        {"Wasteland Tower", 308, 624}
    };

protected:
    void paintEvent(QPaintEvent *event) override;

    std::pair<int, int> obtenerCoordenadas(const QString& nombreTorre, const QList<torre>& lista);

private slots:

private:
    Ui::simulacion *ui;
};



#endif // SIMULACION_H
