#include "case.hpp"

Case::Case(int x, int y)
{
    xCoord = x;
    yCoord = y;
    piece.setParentItem(this);
}

// When clicked, Case name is sent to Display's slot
void Case::mousePressEvent(QGraphicsSceneMouseEvent *ev){
    if(ev->buttons() == Qt::LeftButton){
        qDebug() << "You clicked " << name;
    }
    emit sendSignal(name);
}

void Case::setName(QString n){
    name = n;
}

QString Case::getName(){
    return name;
}


