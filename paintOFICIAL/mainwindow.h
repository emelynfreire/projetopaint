#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int getNumR();
    int getNumG();
    int getNumB();


private slots:
    void on_pushButtonIniciar_clicked();

private:
    Ui::MainWindow *ui;

public slots:
    void sairPaint();//funcao finalização programa
    void abreDialogAjuda(void);
    void salvoDialogSalvarArquivo();
    void errorDialogSalvarArquivo();

};
#endif // MAINWINDOW_H
