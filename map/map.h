#ifndef MAP_H
#define MAP_H

#include <QDialog>
#include <QEvent>
#include <QMouseEvent>

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
    void enterEvent(QEnterEvent *event) override;
    void leaveEvent(QEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private:
    Ui::map *ui;

    void updateButtonVisibility(const QPoint &pos);
};

#endif // MAP_H


