#ifndef EXTRA_H
#define EXTRA_H

#include <QDialog>

namespace Ui {
class extra;
}

class extra : public QDialog
{
    Q_OBJECT

public:
    explicit extra(QWidget *parent = nullptr);
    ~extra();

private:
    Ui::extra *ui;
};

#endif // EXTRA_H
