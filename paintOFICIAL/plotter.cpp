#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(nr,ng,nb));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());

}

void Plotter::setColorRed(int _r)
{
    nr = _r;
    repaint();
}

void Plotter::setColorGreen(int g)
{
    ng = g;
    repaint();
}

void Plotter::setColorBlue(int b)
{
    nb = b;
    repaint();
}

/*void Plotter::repintar(QPaintEvent *event)
{
    MainWindow e;
    int nr, ng, nb;

    nr = e.getNumR();
    ng = e.getNumG();
    nb = e.getNumB();

    QPainter painter(this);
    QBrush brush;

    brush.setColor(QColor(nr,ng,nb));
    brush.setStyle(Qt::SolidPattern);

    painter.setBrush(brush);
    painter.drawRect(0,0,width(),height());
}*/
