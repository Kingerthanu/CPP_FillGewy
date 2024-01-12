#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(800,800));
    this->statusBar()->hide();
    layout.setSceneRect(0,0,800,800);
    layout.addItem(path);
    view->setGeometry(0,0, 800,800);
    view->setHorizontalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    view->setVerticalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    view->setScene(&layout);
    setCentralWidget(view);
    timer = startTimer(10);
}
void MainWindow::timerEvent(QTimerEvent *event){
    if(this->path->Drawing){
        path->curPath->lineTo((MainWindow::cursor().pos() - MainWindow::pos() + QPoint(0,-30)));
        layout.update();
    }
}
void MainWindow::paintEvent(QPaintEvent *event){
    layout.update();
    this->update();
}
MainWindow::~MainWindow()
{
    delete ui;
}

