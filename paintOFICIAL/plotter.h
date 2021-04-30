#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>


class Plotter : public QWidget {
    Q_OBJECT
private:
    int nr = 0, ng = 0, nb = 0;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);


signals:

public slots:
    void setColorRed(int _r);
    void setColorGreen(int g);
    void setColorBlue(int b);
};

#endif // PLOTTER_H
