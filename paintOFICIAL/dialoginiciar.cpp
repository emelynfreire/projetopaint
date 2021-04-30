#include "dialoginiciar.h"
#include "ui_dialoginiciar.h"

DialogIniciar::DialogIniciar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogIniciar)
{
    ui->setupUi(this);
}

DialogIniciar::~DialogIniciar()
{
    delete ui;
}

int DialogIniciar::getNumX(){
    return ui->spinBoxX->value();
}

int DialogIniciar::getNumY(){
    return ui->spinBoxY->value();
}

int DialogIniciar::getNumZ(){
    return ui->spinBoxZ->value();
}

void DialogIniciar::on_buttonBox_accepted()
{
    int nx, ny, nz;

    nx = this->getNumX();
    ny = this->getNumY();
    nz = this->getNumZ();

}
