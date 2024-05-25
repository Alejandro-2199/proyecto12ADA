#ifndef MAP_H
#define MAP_H

#include <QDialog>
#include <QKeyEvent>

namespace Ui {
class map;
}

class map : public QDialog
{
    Q_OBJECT

public:
    explicit map(QWidget *parent = nullptr);
    ~map();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::map *ui;
};

#endif // MAP_H

