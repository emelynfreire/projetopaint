#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialoginiciar.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonIniciar_clicked()
{
    int nx, ny, nz;

    DialogIniciar e;
    e.exec();

    nx = e.getNumX();
    ny = e.getNumY();
    nz = e.getNumZ();

    ui->horizontalSliderX->setTickInterval(nx);
}
