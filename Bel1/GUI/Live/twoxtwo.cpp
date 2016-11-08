#include "twoxtwo.h"

TwoXTwo::TwoXTwo(QWidget *parent) : QWidget(parent)
{
    QGraphicsView *view1=new QGraphicsView(this);
    QGraphicsView *view2=new QGraphicsView(this);
    QGraphicsView *view3=new QGraphicsView(this);
    QGraphicsView *view4=new QGraphicsView(this);


    QGridLayout *layout2x2=new QGridLayout(this);
    layout2x2->addWidget(view1,0,0,1,1);
    layout2x2->addWidget(view2,0,1,1,1);
    layout2x2->addWidget(view3,1,0,1,1);
    layout2x2->addWidget(view4,1,1,1,1);
    this->setLayout(layout2x2);




}
