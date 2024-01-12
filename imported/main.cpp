#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Shape Fillr");
    QPixmap img("C:/Users/Daddy/Desktop/The Code Box/CPP Docs/first cpp/Gui/Infestation/imgs/Stock.jpg");
    w.setWindowIcon(img);
    w.show();
    return a.exec();
}
