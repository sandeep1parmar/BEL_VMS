#include "toolboxviewcontrolwidget.h"

ToolBoxViewControlWidget::ToolBoxViewControlWidget(QWidget *parent) : QWidget(parent)
{
    creatControlsAndLayout();
}
ToolBoxViewControlWidget::~ToolBoxViewControlWidget()
{

}
void ToolBoxViewControlWidget::creatControlsAndLayout()
{
 //   QString ss = "QLabel { border-style: outset; border-width: 2px; border-color : blue; }";
  //  QLabel *l_lbl= new QLabel("ToolBoxViewControlWidget");
   // l_lbl->setStyleSheet(ss);
    QVBoxLayout *l_Vlayout = new QVBoxLayout;
    //l_Vlayout->addWidget(l_lbl);
    listViewview=new QListView(this);
    l_Vlayout->addWidget(listViewview);
    l_Vlayout->setContentsMargins(0,0,0,0);
    this->setLayout(l_Vlayout);
}
