#include "toolboxeventscontrolwidget.h"

ToolBoxEventsControlWidget::ToolBoxEventsControlWidget(QWidget *parent) : QWidget(parent)
{
    creatControlsAndLayout();
}
ToolBoxEventsControlWidget::~ToolBoxEventsControlWidget()
{

}
void ToolBoxEventsControlWidget::creatControlsAndLayout()
{
   // QString ss = "QLabel { border-style: outset; border-width: 2px; border-color : blue; }";
    //QLabel *l_lbl= new QLabel("ToolBoxEventsControlWidget");
    //l_lbl->setStyleSheet(ss);
    l_Vlayout = new QVBoxLayout;
   // l_Vlayout->addWidget(l_lbl);
    l_Vlayout->setContentsMargins(0,0,0,0);


   /* page_events = new QWidget();
    page_events->setObjectName(QStringLiteral("page_events"));
    toolBox->setItemText(toolBox->indexOf(page_events), QApplication::translate("live_window", "Events", 0));
    verticalLayout_page_events = new QVBoxLayout(page_events);
    verticalLayout_page_events->setObjectName(QStringLiteral("verticalLayout_page_events"));
*/


    listWidget_events =new QListView(this);

    l_Vlayout->addWidget(listWidget_events);
    this->setLayout(l_Vlayout);
}
