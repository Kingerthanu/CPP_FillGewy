#include "trail.h"

trail::trail(QGraphicsObject *parent)
    : QGraphicsObject(parent)
{
    brush.setColor(Qt::cyan);
    brush.setStyle(Qt::SolidPattern);
}
QRectF trail::boundingRect() const
{
    return QRectF(0,0, 800,800);
}
void trail::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        if(!this->Drawing){
        this->curPath->moveTo(event->pos());
        std::cout << "RanOn" << "\n";
        this->Drawing = true;
        }
        else{
            std::cout << "RanOff" << "\n";
            this->Drawing = false;
        }
    }
    else if (event->button() == Qt::RightButton && !this->Drawing) {
        this->curPath->clear();
    }
}
void trail::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(!this->Drawing){
    painter->fillPath(*curPath, brush);}
    else{
    painter->setPen(Qt::blue);
    painter->drawRect(boundingRect());
    painter->drawPath(*curPath);}



}
