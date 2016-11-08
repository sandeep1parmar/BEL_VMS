#include "fourxfour.h"

FourXFour::FourXFour(QWidget *parent) : QWidget(parent)
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
    QGraphicsView *view10=new QGraphicsView();
    QGraphicsView *view11=new QGraphicsView();
    QGraphicsView *view12=new QGraphicsView();
    QGraphicsView *view13=new QGraphicsView();
    QGraphicsView *view14=new QGraphicsView();
    QGraphicsView *view15=new QGraphicsView();
    QGraphicsView *view16=new QGraphicsView();

    QGridLayout *gridLayout3x3=new QGridLayout();
    gridLayout3x3->addWidget(view1,0,0,1,1);
    gridLayout3x3->addWidget(view2,0,1,1,1);
    gridLayout3x3->addWidget(view3,0,2,1,1);
    gridLayout3x3->addWidget(view4,0,3,1,1);
    gridLayout3x3->addWidget(view5,1,0,1,1);
    gridLayout3x3->addWidget(view6,1,1,1,1);
    gridLayout3x3->addWidget(view7,1,2,1,1);
    gridLayout3x3->addWidget(view8,1,3,1,1);
    gridLayout3x3->addWidget(view9,2,0,1,1);
    gridLayout3x3->addWidget(view10,2,1,1,1);
    gridLayout3x3->addWidget(view11,2,2,1,1);
    gridLayout3x3->addWidget(view12,2,3,1,1);
    gridLayout3x3->addWidget(view13,3,0,1,1);
    gridLayout3x3->addWidget(view14,3,1,1,1);
    gridLayout3x3->addWidget(view15,3,2,1,1);
    gridLayout3x3->addWidget(view16,3,3,1,1);

    this->setLayout(gridLayout3x3);

}
