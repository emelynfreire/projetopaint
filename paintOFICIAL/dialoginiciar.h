#ifndef DIALOGINICIAR_H
#define DIALOGINICIAR_H

#include <QDialog>

namespace Ui {
class DialogIniciar;
}

class DialogIniciar : public QDialog
{
    Q_OBJECT

public:
    explicit DialogIniciar(QWidget *parent = nullptr);
    ~DialogIniciar();
    int getNumX();
    int getNumY();
    int getNumZ();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogIniciar *ui;
};

#endif // DIALOGINICIAR_H
