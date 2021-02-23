#ifndef MAININTERAPTIONSCENE_H
#define MAININTERAPTIONSCENE_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsProxyWidget>
#include <QGraphicsView>
#include <QLabel>
#include <QDebug>
#include <macroblock.h>

class MainInteraptionScene : public QGraphicsView
{
    Q_OBJECT
    QGraphicsScene scene;
public:
    explicit MainInteraptionScene(QWidget *parent = nullptr);
    void wheelEvent(QWheelEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
signals:

};

#endif // MAININTERAPTIONSCENE_H
