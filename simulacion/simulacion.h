#ifndef SIMULACION_H
#define SIMULACION_H

#include <QDialog>

namespace Ui {
class simulacion;
}

class simulacion : public QDialog
{
    Q_OBJECT

public:
    explicit simulacion(QWidget *parent = nullptr);
    ~simulacion();

private:
    Ui::simulacion *ui;
};

#endif // SIMULACION_H
