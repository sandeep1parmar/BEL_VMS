#include "toolboxmapcontrolwidget.h"

ToolBoxMapControlWidget::ToolBoxMapControlWidget(QWidget *parent) : QWidget(parent)
{
    creatControlsAndLayout();
}
ToolBoxMapControlWidget::~ToolBoxMapControlWidget()
{

}
void ToolBoxMapControlWidget::creatControlsAndLayout()
{
   // QString ss = "QLabel { border-style: outset; border-width: 2px; border-color : blue; }";
    //QLabel *l_lbl= new QLabel("ToolBoxMapControlWidget");
    //l_lbl->setStyleSheet(ss);


    QVBoxLayout *l_Vlayout = new QVBoxLayout;

    listViewMapControl =new QListView(this);

    //l_Vlayout->addWidget(l_lbl);
    l_Vlayout->addWidget(listViewMapControl);
    listViewMapControl->setModel(ModelSingleTon::getInstance()->getMapListModel());
    l_Vlayout->setContentsMargins(0,0,0,0);
    this->setLayout(l_Vlayout);
}
