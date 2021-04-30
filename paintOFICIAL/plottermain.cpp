#include "plottermain.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

PlotterMain::PlotterMain(QWidget *parent) : QWidget(parent)
{

}

void PlotterMain::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());

    if((nLinhas != 0) && (nColunas != 0) && (nPlanos != 0)){
        int i, j;
        altura = height()/nLinhas;
        largura = width()/nColunas;

        for(i=0; i<nLinhas; i++){
            painter.drawLine(0, i*altura, width(), i*altura);
        }

        for(j=0; j<nColunas; j++){
            painter.drawLine(i*largura, 0, i*largura, height());
        }
    }

    //painter.drawLine(0, height()/2, width(), height()/2);

    /*if(num_linhas !=0 && num_colunas!=0 && num_planos !=0){
         h_altura = (double)height()/num_linhas;
         h_largura = (double)width()/num_colunas;

         pen.setWidth(1);
         painter.setPen(pen);

         for (int i=1;i<=num_linhas;i++){
            painter.drawLine(0,i*h_altura,width(),i*h_altura);
        }

         for (int i=1;i<=num_colunas;i++){
            painter.drawLine(i*h_largura,0,i*h_largura,height());
        }

    }*/
}

void PlotterMain::setNLinhas(int x)
{
    nLinhas = x;
    repaint();
}

void PlotterMain::setNColunas(int y)
{
    nColunas = y;
    repaint();
}

void PlotterMain::setNPlanos(int z)
{
    nPlanos = z;
    repaint();
}

