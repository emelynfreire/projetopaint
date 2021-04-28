#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE

enum{
    CAIXA,NOCAIXA,SPHERE,NOSPHERE,VOXEL,NOVOXEL,ELIPSE,NOELIPSE

};
namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);//pesquisar se é necessario explicit antes?(versao video tem)
    ~MainWindow();

//e
private:
    Ui::MainWindow *ui;
    int r,g,b;
    void updateColor();
    Escultor  *e;//ponteiro para alocação do escultor digital
    int dimX,dimY,dimZ;
    int currentObject;
    int currentPlane;
    QActionGroup *actionGroup;

public slots://slots são as funções que irão receber os eventos do click dos botões
    void sairTela();
    void setR(int);
    void setG(int);
    void setB(int);
    void pickColor(int);
    void drawShape(int,int);
    void updateCoords(int,int);

private slots:
    void on_actionSalvar_triggered();
    void on_actionNovo_triggered();
    void on_actionInserir_Esfera_triggered();
    void on_actionRetirar_Esfera_triggered();
    void on_actionInserir_Voxel_triggered();
    void on_actionRetirar_Voxel_triggered();
    void on_actionInserir_Caixa_triggered();
    void on_actionRetirar_Caixa_triggered();
    void on_actionInserir_Elipse_triggered();
    void on_actionRetirar_Elipse_triggered();
    void clickedXY();
    void clickedZX();
    void clickedYZ();
    void on_sliderEixoX_valuechange(int);
    void on_sliderEixoY_valuechange(int);
    void on_sliderEixoZ_valuechange(int);
    void on_actionGeomview_triggered(int);//procurar para Meshlab



};
#endif // MAINWINDOW_H
