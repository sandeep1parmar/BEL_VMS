#include "settings.h"
#include<QDebug>

Settings::Settings(int aWidth, int aHeight, QWidget *parent) : QWidget(parent)
{    
    m_pHight = aHeight;
    m_pWidth = aWidth;
    m_pSettingsStackedWidget = new QStackedWidget();
    creatControlsAndLayout();

    m_pAddCameraMain = new AddCameraMainWidget(m_pSettingsStackedWidget->width(),m_pSettingsStackedWidget->height(),m_pSettingsStackedWidget);

    m_pSettingsStackedWidget->addWidget(m_pAddCameraMain);

    m_pSettingsStackedWidget->setCurrentIndex(0);
    setFixedSize(m_pWidth,m_pHight);
}
Settings::~Settings()
{
}
void Settings::creatControlsAndLayout()
{

    QFrame* l_pTopFrame = new QFrame(this);
    l_pTopFrame->setFrameStyle(QFrame::Box);
    QPalette* l_pPalette = new QPalette();
    l_pPalette->setColor(QPalette::Foreground,Qt::lightGray);
    l_pTopFrame->setPalette(*l_pPalette);

    int lframe_H = ((m_pHight / 100) * 6);
    l_pTopFrame->setFixedSize(m_pWidth,lframe_H);

    int l_pStackedWidgetWidth = m_pWidth;
    int l_pStackedWidgetHight = m_pHight - lframe_H;
    m_pSettingsStackedWidget->setFixedSize(l_pStackedWidgetWidth,l_pStackedWidgetHight);

    QLabel *l_lablemsg = new QLabel("Settings Stacked Widget");

    QString ss = "QLabel { border-style: outset; border-width: 2px; border-color : blue; }";
    l_lablemsg->setStyleSheet(ss);
    m_pSettingsStackedWidget->addWidget(l_lablemsg);

    QHBoxLayout *l_ButtonLayout = new QHBoxLayout;
    QPushButton *bt1  = new QPushButton("Settings1\nAddCamera",l_pTopFrame);
    QPushButton *bt2  = new QPushButton("Settings2",l_pTopFrame);
    QPushButton *bt3  = new QPushButton("Settings3",l_pTopFrame);
    QPushButton *bt4  = new QPushButton("Settings4",l_pTopFrame);
    QPushButton *bt5  = new QPushButton("Settings5",l_pTopFrame);
    QPushButton *bt6  = new QPushButton("Settings6",l_pTopFrame);

    l_pTopFrame->setLayout(l_ButtonLayout);
    l_ButtonLayout->addWidget(l_pTopFrame);
    l_ButtonLayout->addWidget(bt1);
    l_ButtonLayout->addWidget(bt2);
    l_ButtonLayout->addWidget(bt3);
    l_ButtonLayout->addWidget(bt4);
    l_ButtonLayout->addWidget(bt5);
    l_ButtonLayout->addWidget(bt6);
    l_ButtonLayout->setContentsMargins(0,0,0,0);

    connect(bt1,SIGNAL(clicked(bool)),this,SLOT(slotAddCameraClicked()));

    QVBoxLayout *l_layout = new QVBoxLayout;
    l_layout->addLayout(l_ButtonLayout,0);
    l_layout->addWidget(m_pSettingsStackedWidget,0,Qt::AlignBottom);
    l_layout->setContentsMargins(0,0,0,0);
    this->setLayout(l_layout);
}

void Settings::slotAddCameraClicked()
{
    m_pSettingsStackedWidget->setCurrentIndex(1);
}

