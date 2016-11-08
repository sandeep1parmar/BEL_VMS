#include "onexone.h"
OneXOne::OneXOne(QWidget *parent) : QWidget(parent)
{
    QGraphicsView *view=new QGraphicsView(this);
    QHBoxLayout *layout1x1=new QHBoxLayout(this);
    layout1x1->addWidget(view);
    this->setLayout(layout1x1);
}
