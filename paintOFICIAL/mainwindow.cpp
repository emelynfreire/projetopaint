#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialoginiciar.h"
#include "plottermain.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <dialog.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //funcao saida paint ok
    connect(ui->actionSair,
            SIGNAL(triggered(bool)),
            SLOT(sairPaint()));

    //funcao abrir novo aquivo para criacao ok
    connect(ui->actionNovo,
            SIGNAL(triggered(bool)),
            SLOT(on_pushButtonIniciar_clicked()));

    //funcao abrir caixa de ajuda >> fazer caixa de dialogo
    connect(ui->actionAjuda,
            SIGNAL(triggered(bool)),
            this,
            SLOT(abreDialogAjuda()));

    //funcao salvar arquivo >> fazer caixa de dialogo
    connect(ui->actionSalvar,
            SIGNAL(triggered(bool)),
            SLOT(writeOFF()));


}

MainWindow::~MainWindow()
{
    delete ui;
};

//funcao saida do programa
void MainWindow::sairPaint()
{
    exit(0);
}

//aparece tela de ajuda
void MainWindow::abreDialogAjuda()
{

    Dialog d;
    d.exec();

}
//aparece tela de arquivo salvo
void MainWindow::salvoDialogSalvarArquivo()
{
    Dialog d1;
    d1.exec();

}

//aparece rela de erro
void MainWindow::errorDialogSalvarArquivo()
{
    Dialog d2;
    d2.exec();

}

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

    PlotterMain a;

    nx = e.getNumX();
    ny = e.getNumY();
    nz = e.getNumZ();

    a.setNLinhas(nx);
    a.setNColunas(ny);
    a.setNPlanos(nz);

    //precisamos retirar um porque a posição máxima do vetor é seu tamanho menos 1
    ui->horizontalSliderX->setMaximum(nx-1);
    ui->horizontalSliderY->setMaximum(ny-1);
    ui->horizontalSliderZ->setMaximum(nz-1);
}


