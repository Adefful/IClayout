#include "maininteraptionscene.h"

MainInteraptionScene::MainInteraptionScene(QWidget *parent) : QGraphicsView(parent)
{
    this->setParent(parent);
    this->setScene(&scene);


    // FOR DEBUG ---
    scene.addWidget(new QLabel("Hello"));
    this->setGeometry(0,0,400,350);
    this->setStyleSheet("background-color: green");
    // END DEBUG ---
}

void MainInteraptionScene::wheelEvent(QWheelEvent *event)
{
    QPoint numDegrees = event->angleDelta() / 120;
    qDebug() << numDegrees.y() << ' ';
    this->scale(numDegrees.y()+1.5, numDegrees.y() + 1.5);

    event->accept();
}

void MainInteraptionScene::mouseMoveEvent(QMouseEvent *event)
{
    this->centerOn(this->mapToScene(event->pos()));
}


