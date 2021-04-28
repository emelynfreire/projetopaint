#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <QPalette>
#include <QColorDialog>
#include <QString>
#include <QLabel>
#include <QStyle>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QProcess>
#include <QStringList>
#include "escultorsizedialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    r=g=b=255;
    dimX=dimY=dimZ=10;//dimensao escultor digital padrao

    currentObject = VOXEL;

    e = new Escultor(dimX,dimY,dimZ);//alocacao dinamica

    ui->sliderEixoX->setMaximum(dimX-1);
    ui->sliderEixoY->setMaximum(dimY-1);
    ui->sliderEixoZ->setMaximum(dimZ-1);
    ui->actionXY->trigger();
    updateColor();
    //getplano tem que criar o metodo
    ui->widgetDraw->loadMatriz(e->getPlano(ui->sliderEixoZ->value(),XY));
    currentPlane=XY;

    //conjunto de acoes no qual deixa apenas 1 selecionado
    actionGroup = new QActionGroup(this);
    actionGroup->addAction(ui->actionInserir_Caixa);
    actionGroup->addAction(ui->actionRetirar_Caixa);
    actionGroup->addAction(ui->actionInserir_Esfera);
    actionGroup->addAction(ui->actionRetirar_Esfera);
    actionGroup->addAction(ui->actionInserir_Elipse);
    actionGroup->addAction(ui->actionRetirar_Elipse);
    actionGroup->addAction(ui->actionInserir_Voxel);
    actionGroup->addAction(ui->actionRetirar_Voxel);

    ui->actionInserir_Voxel->setChecked(true);
    actionGroup = new QActionGroup(this);

    actionGroup->addAction(ui->actionXY);
    actionGroup->addAction(ui->actionYZ);
    actionGroup->addAction(ui->actionZX);
    ui->actionXY->setChecked(true);
    showMaximized();




    //fazendo conexao para sair da tela
    //connect(ui->pushButtonQuit,
       //     SIGNAL(clicked(bool)),
           // this,//ponteiro que vai receber o sinal para trabalhar
         //   SLOT(sairTela()));
}

MainWindow::~MainWindow()
{
    delete ui;//liberando memoria
}

//finalizar e sair da tela
void MainWindow::sairTela()
{
    exit(0);

}
//fim finalizar e sair da tela

//mudança cores

void MainWindow::updateColor(){
    QString color, textcolor;

    textcolor = "QpushButton{background-color:rgb("+
            QString().setNum(255-r)+ ","+
            QString().setNum(255-g)+ ","+
            QString().setNum(255-b)+ ");}";

    color = "QpushButton{background-color:rgb("+
            QString().setNum(r)+ ","+
            QString().setNum(g)+ ","+
            QString().setNum(b)+ ");}";

    ui->pushButtonColor->setStyleSheet(color);
    e->setColor(r,g,b,255);
}

void MainWindow::setR(int _r){
    r=_r;
    updateColor();
}

void MainWindow::setG(int _g){
    g=_g;
    updateColor();
}
void MainWindow::setB(int _b){
    b=_b;
    updateColor();
}
//fim mudança cores

void MainWindow::pickColor(){
    QColorDialog d;
    d.exec();
    r = d.selectedColor().red();
    g = d.selectedColor().green();
    b = d.selectedColor().blue();
    ui->horizontalSliderR->setValue(r);
    ui->horizontalSliderG->setValue(g);
    ui->horizontalSliderB->setValue(b);

}

void MainWindow::drawShape(int horizonalClick, int VerticalClick){

    switc(currentObjet){
        case(SPHERE):
            switch(currentPlane){
                case XY:
                    e->botaEsfera(VerticalClick,horizonalClick,ui->SliderEixoZ->value()
                                  ui->horizontalClick->SliderEixoZ->value());
                case ZX:

                case YZ:

            }
            break;
        case (NOSPHERE):
            case
    }
}





