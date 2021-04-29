#ifndef DIALOGOINICIAR_H
#define DIALOGOINICIAR_H

#include <QDialog>

namespace Ui {
class dialogoIniciar;
}

class dialogoIniciar : public QDialog
{
    Q_OBJECT

public:
    explicit dialogoIniciar(QWidget *parent = nullptr);
    ~dialogoIniciar();
    int getNumX();
    int getNumY();
    int getNumZ();

private:
    Ui::dialogoIniciar *ui;
};

#endif // DIALOGOINICIAR_H
