#include "mainwindow.h"

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsProxyWidget>
#include <QGraphicsView>
#include <maininteraptionscene.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    MainInteraptionScene mainScene(&w);
    mainScene.setGeometry(w.geometry());
    mainScene.show();
    w.show();
    return a.exec();
//    QGraphicsScene scene;
//    scene.setParent(&w);
//    scene.addText("Hello, world!");
//     //QPushButton btn;
//     //btn.setText("123");
//    //QGraphicsProxyWidget * pr = scene.addWidget(&btn);
//    // pr->setPos(100,100);
//     QGraphicsView view(&scene);
//     view.show();

}
