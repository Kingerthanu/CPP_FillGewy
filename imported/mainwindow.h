#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QMouseEvent>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPainterPath>
#include <QPainter>
#include <trail.h>
#include <string>
#include <stdio.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    int timer;
    trail *path = new trail();
    QGraphicsScene layout = new QGraphicsScene(this);
    QGraphicsView *view = new QGraphicsView(this);
    Ui::MainWindow *ui;
protected slots:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
};
#endif // MAINWINDOW_H
