#ifndef RESULTS_H
#define RESULTS_H

#include <QDialog>
#include <QDebug>
#include <QPainter>
#include <QPainterPath>
#include <QGraphicsPathItem>
#include <QGraphicsScene>

#include <qmath.h>

namespace Ui {
class Results;
}

class Results : public QDialog
{
    Q_OBJECT
    
public:
    explicit Results(QWidget *parent = 0);
    ~Results();

    void setErrors(QString);
    void setRights(QString);
    void setTime(QString);
    void setSpeed(QString);
    void drawGraph(QList<int>,QList<float>);
    
private:
    Ui::Results *ui;
};

#endif // RESULTS_H
