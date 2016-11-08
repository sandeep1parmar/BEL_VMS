#include "managebelvms.h"
#include<QDebug>

ManageBELVMS* ManageBELVMS::m_pManageBELVMS = NULL;

ManageBELVMS::ManageBELVMS()
    : QMainWindow(),m_pWidth(800),m_pHight(600)
{
    ModelSingleTon::getInstance();
    m_pCentralWidget = new QWidget();
    m_pStackedWidget = new QStackedWidget();
    setDisplaySize(); // get display width and height
    creatControlsAndLayout(); // create Controls and Layout
    addWidgetsInStacked(); // add all widgets of screens in stacked widget.
    m_pStackedWidget->setCurrentIndex(0); // live widget index
    setCentralWidget(m_pCentralWidget);
    setWindowTitle("BEL Test: 1");
    setFixedSize(m_pWidth,m_pHight);

}

ManageBELVMS::~ManageBELVMS()
{
}

ManageBELVMS* ManageBELVMS::getInstance()
{
    if (NULL == m_pManageBELVMS )
    {
        m_pManageBELVMS = new ManageBELVMS();
    }
    return m_pManageBELVMS;
}

void ManageBELVMS::creatControlsAndLayout()
{
    int l_pStackedWidgetWidth = m_pWidth - WIDTH_MARGIN;
    int l_pStackedWidgetHight = ((m_pHight / 100) * 94) - 60; // 94% for stacked widget

    m_pStackedWidget->setFixedSize(l_pStackedWidgetWidth,l_pStackedWidgetHight);

    int l_pwindowTopWidth  = m_pWidth;
    int l_pwindowTopHight = (m_pHight / 100) * 6; // 6% for TOP;

    QFrame* l_pTopFrame = new QFrame(m_pCentralWidget);
    l_pTopFrame->setFrameStyle(QFrame::Box);
    QPalette* l_pPalette = new QPalette();
    l_pPalette->setColor(QPalette::Foreground,Qt::lightGray);
    l_pTopFrame->setPalette(*l_pPalette);
    l_pTopFrame->setFixedSize(l_pwindowTopWidth,l_pwindowTopHight);
    l_pTopFrame->setContentsMargins(2,0,2,0);

    QLabel *l_pBelLogoLable = new QLabel(l_pTopFrame);
    QPixmap pix(":/Images/BEL_Logo.png");
    l_pBelLogoLable->setPixmap(pix);
    l_pBelLogoLable->setFixedWidth(180);

    QHBoxLayout *l_letfButtonLayout = new QHBoxLayout;
    QPushButton *btLive  = new QPushButton("Live",l_pTopFrame);
    QPushButton *btPlayBack  = new QPushButton("Play Back",l_pTopFrame);
    QPushButton *btAlarm  = new QPushButton("Alarm",l_pTopFrame);
    QPushButton *bt4  = new QPushButton("BT4",l_pTopFrame);
    QPushButton *bt5  = new QPushButton("BT5",l_pTopFrame);
    QPushButton *btSettings  = new QPushButton("Settings",l_pTopFrame);

    connect(btSettings,SIGNAL(clicked(bool)),SLOT(slotSettingsButtonClicked()));
    connect(btLive,SIGNAL(clicked(bool)),SLOT(slotLiveButtonClicked()));
    connect(btPlayBack,SIGNAL(clicked(bool)),SLOT(slotPlayBackButtonClicked()));
    connect(btAlarm,SIGNAL(clicked(bool)),SLOT(slotAlarmButtonClicked()));

    QFontMetrics fm(btLive->fontMetrics());
    btLive->setFixedWidth(10 + fm.width(btLive->text()));
    btPlayBack->setFixedWidth(10 + fm.width(btPlayBack->text()));
    btAlarm->setFixedWidth(10 + fm.width(btAlarm->text()));
    bt4->setFixedWidth(10 + fm.width(bt4->text()));
    bt5->setFixedWidth(10 + fm.width(bt5->text()));
    btSettings->setFixedWidth(10 + fm.width(btSettings->text()));

    l_letfButtonLayout->addWidget(btLive);
    l_letfButtonLayout->addWidget(btPlayBack);
    l_letfButtonLayout->addWidget(btAlarm);


    QVBoxLayout *l_RightLableLayout = new QVBoxLayout;
    QLabel *l_userTypeLable = new QLabel("User Type",l_pTopFrame);
    QLabel *l_commentLable = new QLabel("User Comments",l_pTopFrame);
    l_userTypeLable->setFixedWidth(100);
    l_commentLable->setFixedWidth(100);
    l_RightLableLayout->addWidget(l_userTypeLable);
    l_RightLableLayout->addWidget(l_commentLable);

    QHBoxLayout *l_RightButtonLayout = new QHBoxLayout;
    l_RightButtonLayout->addWidget(bt4);
    l_RightButtonLayout->addWidget(bt5);
    l_RightButtonLayout->addWidget(btSettings);

    QHBoxLayout *l_HLayout = new QHBoxLayout;
    l_pTopFrame->setLayout(l_HLayout);
    l_HLayout->addWidget(l_pTopFrame,Qt::AlignLeft);
    l_HLayout->addWidget(l_pBelLogoLable,Qt::AlignLeft);
    l_HLayout->addLayout(l_letfButtonLayout,Qt::AlignLeft);
    l_HLayout->addItem(new QSpacerItem(100,10,QSizePolicy::Expanding,QSizePolicy::Fixed));
    l_HLayout->addLayout(l_RightLableLayout,Qt::AlignRight);
    l_HLayout->addLayout(l_RightButtonLayout,Qt::AlignRight);
    l_HLayout->setSpacing(1);

    QVBoxLayout *l_layout = new QVBoxLayout;
    l_layout->addLayout(l_HLayout,Qt::AlignTop);
    l_layout->addWidget(m_pStackedWidget,Qt::AlignTop);
    l_layout->setSpacing(1);
    l_layout->setContentsMargins(2,0,2,0);

    m_pCentralWidget->setLayout(l_layout);
}

void ManageBELVMS::addWidgetsInStacked()
{
    QString ss = "QLabel { border-style: outset; border-width: 2px; border-color : blue; }";
    QLabel *l_lableLiveWidget = new QLabel("Live Widget");
    l_lableLiveWidget->setStyleSheet(ss);
    QLabel *l_lablePlaybackWidget = new QLabel("PlayBack Widget");
    l_lablePlaybackWidget->setStyleSheet(ss);
    QLabel *l_lableAlarmWidget = new QLabel("Alarm Widget");
    l_lableAlarmWidget->setStyleSheet(ss);

    m_pLiveWidget = new Live(m_pStackedWidget->width(),m_pStackedWidget->height(),m_pStackedWidget);
    m_pSettings = new Settings(m_pStackedWidget->width(),m_pStackedWidget->height(),m_pStackedWidget);

    m_pStackedWidget->addWidget(m_pLiveWidget);         //GUIMainLiveScreen     = 0
    m_pStackedWidget->addWidget(l_lablePlaybackWidget);     //GUIMainPlayBackScreen = 1
    m_pStackedWidget->addWidget(l_lableAlarmWidget);        //GUIMainAlarmScreen    = 2
    m_pStackedWidget->addWidget(m_pSettings);               //GUIMainSettingsScreen = 3
}

void ManageBELVMS::setDisplaySize()
{
    QDesktopWidget widget;
    QRect rec = widget.screenGeometry();
    m_pHight = rec.height();
    m_pWidth = rec.width();
}

void ManageBELVMS::slotSettingsButtonClicked()
{
    m_pStackedWidget->setCurrentIndex(GUIMainSettingsScreen); // GUIMainSettingsScreen // index // 3
}

void ManageBELVMS::slotLiveButtonClicked()
{
    m_pStackedWidget->setCurrentIndex(GUIMainLiveScreen); // GUIMainLiveScreen // index // 0
}

void ManageBELVMS::slotPlayBackButtonClicked()
{
    m_pStackedWidget->setCurrentIndex(GUIMainPlayBackScreen); // GUIMainPlayBackScreen // index // 1
}

void ManageBELVMS::slotAlarmButtonClicked()
{
    m_pStackedWidget->setCurrentIndex(GUIMainAlarmScreen); // GUIMainAlarmScreen // index // 2
}


