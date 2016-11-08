#include "live.h"
#include "onexone.h"
#include "twoxtwo.h"
Live::Live(int aWidth, int aHeight, QWidget *parent) : QWidget(parent)
{
    m_pHight = aHeight;
    m_pWidth = aWidth;

    creatControlsAndLayout();


    m_pLiveViewStackedWidget->setCurrentIndex(0);
    setFixedSize(m_pWidth,m_pHight);
}

Live::~Live()
{
}

void Live::creatControlsAndLayout()
{
    QString ss = "QLabel { border-style: outset; border-width: 2px; border-color : blue; }";
    creatToolBox();

    int l_stackedWidgetWidth =m_pWidth - m_pToolBox->width();
    int l_stackedWidgetHeight =m_pHight;
    m_pLiveViewStackedWidget = new QStackedWidget;
    m_pLiveViewStackedWidget->setFixedSize(l_stackedWidgetWidth,l_stackedWidgetHeight);

    QLabel *l_stwdlbl = new QLabel("Stacked Widget for Layout selection");
    l_stwdlbl->setStyleSheet(ss);

    m_pOneXOne = new OneXOne();
//    m_pLiveViewStackedWidget->addWidget(l_stwdlbl);
    m_pLiveViewStackedWidget->addWidget(m_pOneXOne);


    m_pTwoXTwo=new TwoXTwo();
    m_pLiveViewStackedWidget->addWidget(m_pTwoXTwo);


    m_pThreeXThree=new ThreeXThree();
    m_pLiveViewStackedWidget->addWidget(m_pThreeXThree);


    m_pFourXFour=new FourXFour();
    m_pLiveViewStackedWidget->addWidget(m_pFourXFour);

    QHBoxLayout *l_Hlayout = new QHBoxLayout;
    l_Hlayout->addWidget(m_pToolBox,0,Qt::AlignLeft | Qt::AlignTop);
    l_Hlayout->addWidget(m_pLiveViewStackedWidget);

    l_Hlayout->setContentsMargins(0,0,0,0);
    l_Hlayout->setSpacing(0);

    QVBoxLayout *l_Vlayout = new QVBoxLayout;
    l_Vlayout->addLayout(l_Hlayout,0);
    //l_layout->addWidget(m_pSettingsStackedWidget,0,Qt::AlignBottom);
    l_Vlayout->setContentsMargins(0,0,0,0);
    this->setLayout(l_Vlayout);
}

void Live::creatToolBox()
{
    m_pToolBox = new QToolBox;

    int l_toolboxWidth =(m_pWidth / 100)*20;
    int l_toolboxHeight =m_pHight;
    m_pToolBox->setFixedSize(l_toolboxWidth,l_toolboxHeight);

    m_pTBMediaSourceWidget      = new ToolBoxMediaSourceListingWidget();
    m_pTBMapControlWidget       = new ToolBoxMapControlWidget();
    m_pTBPTZControlWidget       = new ToolBoxPTZControlWidget(m_pWidth,m_pHight);
    m_pTBLayoutControlWidget    = new ToolBoxLayoutControlWidget(m_pWidth,m_pHight);
    m_pTBViewControlWidget      = new ToolBoxViewControlWidget();
    m_pTBEventsControlWidget    = new ToolBoxEventsControlWidget();
    m_pTBCarouselControlWidget  = new ToolBoxCarouselControlWidget();

    m_pToolBox->addItem(m_pTBMediaSourceWidget, "Media Source Listing");
    m_pToolBox->addItem(m_pTBMapControlWidget, "Map Control Panel");
    m_pToolBox->addItem(m_pTBPTZControlWidget, "PTZ Control Panel");
    m_pToolBox->addItem(m_pTBLayoutControlWidget, "Layout");
    m_pToolBox->addItem(m_pTBViewControlWidget, "View");
    m_pToolBox->addItem(m_pTBEventsControlWidget, "Events");
    m_pToolBox->addItem(m_pTBCarouselControlWidget, "Carousel");

    connect(m_pTBLayoutControlWidget,SIGNAL(sigLayoutButtonPressed(int)),this,SLOT(slotChangeLayout(int)));

}

void Live::slotChangeLayout(int index)
{
    switch(index)
    {
    case 1:

        m_pLiveViewStackedWidget->setCurrentIndex(0);
        break;
    case 2:

        m_pLiveViewStackedWidget->setCurrentIndex(1);

        break;
    case 3:
        m_pLiveViewStackedWidget->setCurrentIndex(2);

        break;
    case 4:
        m_pLiveViewStackedWidget->setCurrentIndex(3);
        break;
    default:
        break;

    }
}
