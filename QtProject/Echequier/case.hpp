
#ifndef CASE_HPP
#define CASE_HPP
#include <QDebug>
#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <QImage>
#include <QBrush>
#include <string>

class Case: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Case(int x, int y);
    void mousePressEvent(QGraphicsSceneMouseEvent *e);
    void setName(QString );
    QString getName();

private:
    QString name;
    QGraphicsPixmapItem piece;
    int xCoord;
    int yCoord;


signals:
    QString sendSignal(QString name);
};

#endif // CASE_HPP
