#include "plotter.h"
#include <QPaintEvent>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <QMouseEvent>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

plotter::plotter()
{

}

void plotter::abreDialogoIniciar() {
    dialogoIniciar e;
    if(e.exec() == QDialog::Accepted){
        numX = e.getNumX();
        numY = e.getNumY();
        numZ = e.getNumZ();
        if(numX !=0 && numY !=0 && numZ !=0){
            Voxel voxel_zero;
            voxel_zero.r = voxel_zero.b = voxel_zero.g = 0;
            voxel_zero.a = 0.0f;
            voxel_zero.isOn = false;

            painter_sculptor.clear();
            for (int k=0;k<numZ;k++) {
                vector<vector<Voxel>> aux1;
                for(int i=0;i<numX; i++){
                    vector<Voxel> aux2;
                    for(int j=0;j<numY; j++){
                        aux2.push_back(voxel_zero);
                    }
                    aux1.push_back(aux2);
                }
                painter_sculptor.push_back(aux1);
            }

            plano_atual = painter_sculptor[0];
            delete sculptor;
            sculptor = new Sculptor(numX,numY,numZ);

            /*emit alterarSlideX(0,numX-1);
            emit alterarSlideY(0,numY-1);
            emit alterarSlideY(0,numZ-1);

            int re[] = {numX-1,numY-1,numZ-1};
            emit alteraSliderRaioEsfera(0,*min_element(re,re+3));*/

            repaint();
            }
    }
}
