#include "threexthree.h"

ThreeXThree::ThreeXThree(QWidget *parent) : QWidget(parent)
{
QGraphicsView *view1=new QGraphicsView();
QGraphicsView *view2=new QGraphicsView();
QGraphicsView *view3=new QGraphicsView();
QGraphicsView *view4=new QGraphicsView();
QGraphicsView *view5=new QGraphicsView();
QGraphicsView *view6=new QGraphicsView();
QGraphicsView *view7=new QGraphicsView();
QGraphicsView *view8=new QGraphicsView();
QGraphicsView *view9=new QGraphicsView();

QGridLayout *gridLayout3x3=new QGridLayout();
gridLayout3x3->addWidget(view1,0,0,1,1);
gridLayout3x3->addWidget(view2,0,1,1,1);
gridLayout3x3->addWidget(view3,0,2,1,1);
gridLayout3x3->addWidget(view4,1,0,1,1);
gridLayout3x3->addWidget(view5,1,1,1,1);
gridLayout3x3->addWidget(view6,1,2,1,1);
gridLayout3x3->addWidget(view7,2,0,1,1);
gridLayout3x3->addWidget(view8,2,1,1,1);
gridLayout3x3->addWidget(view9,2,2,1,1);
this->setLayout(gridLayout3x3);


}
