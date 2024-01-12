#ifndef TRAIL_H
#define TRAIL_H

#include <QObject>
#include <QWidget>
#include <QStyleOptionGraphicsItem>
#include <QPainter>
#include <QPainterPath>
#include <Qt>
#include <QGraphicsObject>
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <iostream>


class trail : public QGraphicsObject
{
    Q_OBJECT
public:
    explicit trail(QGraphicsObject *parent = nullptr);
    QPainterPath *curPath = new QPainterPath();
    int TESTV = 55;
    bool Drawing = false;

private:
    QBrush brush;

private slots:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);


signals:

};

#endif // TRAIL_H
