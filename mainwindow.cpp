#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionNovo_arquivo, SIGNAL(triggered(bool)), ui->centralwidget,SLOT(abreDialogoIniciar()));
    //connect(ui->actionEscultor,SIGNAL(triggered(bool)),ui->widget,SLOT(abreDialogEscultor()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

