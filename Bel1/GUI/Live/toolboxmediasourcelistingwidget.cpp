#include "toolboxmediasourcelistingwidget.h"
#include <QDebug>

ToolBoxMediaSourceListingWidget::ToolBoxMediaSourceListingWidget(QWidget *parent) : QWidget(parent)
{
    creatControlsAndLayout();
}
ToolBoxMediaSourceListingWidget::~ToolBoxMediaSourceListingWidget()
{

}
void ToolBoxMediaSourceListingWidget::creatControlsAndLayout()
{
    QString ss = "QLabel { border-style: outset; border-width: 2px; border-color : blue; }";
    QLabel *l_lbl= new QLabel("ToolBoxMediaSourceListingWidget");
    l_lbl->setStyleSheet(ss);

    m_pMediaSourceTreeView = new QTreeView;
    m_pMediaSourceTreeView->setModel(ModelSingleTon::getInstance()->getMediaSourceListingModel());

    QVBoxLayout *l_Vlayout = new QVBoxLayout;
    l_Vlayout->addWidget(m_pMediaSourceTreeView);
    //l_Vlayout->addWidget(l_lbl);
    l_Vlayout->setContentsMargins(0,0,0,0);
    this->setLayout(l_Vlayout);
}
