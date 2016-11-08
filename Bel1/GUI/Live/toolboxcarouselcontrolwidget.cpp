#include "toolboxcarouselcontrolwidget.h"

ToolBoxCarouselControlWidget::ToolBoxCarouselControlWidget(QWidget *parent) : QWidget(parent)
{
    creatControlsAndLayout();
}
ToolBoxCarouselControlWidget::~ToolBoxCarouselControlWidget()
{

}
void ToolBoxCarouselControlWidget::creatControlsAndLayout()
{
   // QString ss = "QLabel { border-style: outset; border-width: 2px; border-color : blue; }";
    //QLabel *l_lbl= new QLabel("ToolBoxCarouselControlWidget");
   // l_lbl->setStyleSheet(ss);
  l_Vlayout = new QVBoxLayout;
  //  l_Vlayout->addWidget(l_lbl);
    l_Vlayout->setContentsMargins(0,0,0,0);

   // page_carousel = new QWidget();
  //  page_carousel->setObjectName(QStringLiteral("page_carousel"));

  //  toolBox->setItemText(toolBox->indexOf(page_carousel), QApplication::translate("live_window", "Carousel", 0));
   // verticalLayout_page_carousel = new QVBoxLayout(page_carousel);

    listWidget_carousel=new QListView();



    l_Vlayout->addWidget(listWidget_carousel);

    dualPushButtons = new QWidget();
    hLayout = new QHBoxLayout();
    create_button=new QPushButton("Create");

    hLayout->addWidget(create_button);
    pushbuttonDeleteView=new QPushButton("Delete");


    hLayout->addWidget(pushbuttonDeleteView);
    dualPushButtons->setLayout(hLayout);
    l_Vlayout->addWidget(dualPushButtons);



    this->setLayout(l_Vlayout);




}
