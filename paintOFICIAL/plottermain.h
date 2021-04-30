#ifndef PLOTTERMAIN_H
#define PLOTTERMAIN_H

#include <QWidget>

class PlotterMain: public QWidget {
    Q_OBJECT
private:
    int nLinhas = 0, nColunas = 0, nPlanos = 0;
    int altura, largura;

public:
    explicit PlotterMain(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);


signals:

public slots:
    void setNLinhas(int x);
    void setNColunas(int y);
    void setNPlanos(int z);

};

#endif // PLOTTERMAIN_H
