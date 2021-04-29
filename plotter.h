#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <vector>
#include <QColor>
#include <QString>
#include "dialogoiniciar.h"
#include "escultor.h"

using namespace std;

class plotter : public QWidget
{
private:
    int numX, numY, numZ;
    vector<vector<vector<Voxel>>> painter_sculptor;
    vector<vector<Voxel>> plano_atual;
    Sculptor* sculptor;

public:
    plotter();
    void abreDialogoIniciar();

signals:
    void alterarSlideX(int, int);
    void alterarSlideY(int, int);
    void alterarSlideZ(int, int);
    void alteraSliderRaioEsfera(int,int);
};

#endif // PLOTTER_H
