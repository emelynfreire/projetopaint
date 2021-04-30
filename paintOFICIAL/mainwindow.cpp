#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialoginiciar.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
};

int MainWindow::getNumR(){
    return ui->horizontalSliderR->value();
}

int MainWindow::getNumG(){
    return ui->horizontalSliderG->value();
}

int MainWindow::getNumB(){
    return ui->horizontalSliderB->value();
}


void MainWindow::on_pushButtonIniciar_clicked()
{
    int nx, ny, nz;

    DialogIniciar e;
    e.exec();

    nx = e.getNumX();
    ny = e.getNumY();
    nz = e.getNumZ();

    //precisamos retirar um porque a posição máxima do vetor é seu tamanho menos 1
    ui->horizontalSliderX->setMaximum(nx-1);
    ui->horizontalSliderY->setMaximum(ny-1);
    ui->horizontalSliderZ->setMaximum(nz-1);
}


