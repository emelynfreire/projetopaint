#include "dialogoiniciar.h"
#include "ui_dialogoiniciar.h"

dialogoIniciar::dialogoIniciar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogoIniciar)
{
    ui->setupUi(this);
}

dialogoIniciar::~dialogoIniciar()
{
    delete ui;
}

int dialogoIniciar::getNumX(){
    return ui->spinBoxX->value();
}

int dialogoIniciar::getNumY(){
    return ui->spinBoxY->value();
}

int dialogoIniciar::getNumZ(){
    return ui->spinBoxZ->value();
}
