#include "map.h"
#include "ui_map.h"

map::map(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::map)
{
    ui->setupUi(this);

    QList<QPushButton*> buttons = findChildren<QPushButton*>();
    for (QPushButton *button : buttons) {
        button->hide();
    }

    setMouseTracking(true);
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

void map::enterEvent(QEnterEvent *event) {
    updateButtonVisibility(event->position().toPoint());
    QDialog::enterEvent(event);
}

void map::leaveEvent(QEvent *event) {
    QList<QPushButton*> buttons = findChildren<QPushButton*>();
    for (QPushButton *button : buttons) {
        button->hide();
    }
    QDialog::leaveEvent(event);
}

void map::mouseMoveEvent(QMouseEvent *event) {
    updateButtonVisibility(event->position().toPoint());
    QDialog::mouseMoveEvent(event);
}

void map::updateButtonVisibility(const QPoint &pos) {
    QList<QPushButton*> buttons = findChildren<QPushButton*>();
    bool buttonHovered = false;

    for (QPushButton *button : buttons) {
        if (button->geometry().contains(pos)) {
            button->show();
            buttonHovered = true;
        } else {
            button->hide();
        }
    }

    // Si ningún botón está siendo tocado, todos los botones se ocultan
    if (!buttonHovered) {
        for (QPushButton *button : buttons) {
            button->hide();
        }
    }
}
