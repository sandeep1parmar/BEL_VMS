#include "addcameramainwidget.h"
#include<QDebug>

AddCameraMainWidget::AddCameraMainWidget(int aWidth, int aHeight, QWidget *parent) : QWidget(parent)
{
    m_pHight = aHeight;
    m_pWidth = aWidth;
    m_pCameraMainStackedWidget = new QStackedWidget(this);
    creatControlsAndLayout();

    QLabel *l_lablemsg = new QLabel("Add Camera screen-1");
    QLabel *l_lablemsg2 = new QLabel("Add Camera screen-2");
    QString ss = "QLabel { border-style: outset; border-width: 2px; border-color : blue; }";
    l_lablemsg->setStyleSheet(ss);
    l_lablemsg2->setStyleSheet(ss);

    m_pAddCamera = new AddCameraWidget((m_pWidth*60)/100,m_pCameraMainStackedWidget->height(),m_pCameraMainStackedWidget);
    m_pCameraMainStackedWidget->addWidget(m_pAddCamera);

    m_pCameraMainStackedWidget->addWidget(l_lablemsg2);

    m_pAddMap = new AddMapWidget(m_pCameraMainStackedWidget->width(),m_pCameraMainStackedWidget->height(),m_pCameraMainStackedWidget);
    m_pCameraMainStackedWidget->addWidget(m_pAddMap);
    m_pCameraMainStackedWidget->setCurrentIndex(0);

    setFixedSize(m_pWidth,m_pHight);
}
AddCameraMainWidget::~AddCameraMainWidget()
{
}
void AddCameraMainWidget::creatControlsAndLayout()
{
    QLabel *l_SettingScreenNameLable = new QLabel("Settings > Camera");
    QLabel *l_CameraScreenName = new QLabel("Add Camera");

    // left lable layout
    QVBoxLayout *l_leftLableVLayout = new QVBoxLayout;
    l_leftLableVLayout->addWidget(l_SettingScreenNameLable);
    l_leftLableVLayout->addWidget(l_CameraScreenName);

    QPushButton *l_cameraScreenBackBt = new QPushButton("Back");
    QPushButton *l_cameraScreennextBt = new QPushButton("Next");

    QFontMetrics fm(l_cameraScreenBackBt->fontMetrics());
    l_cameraScreenBackBt->setFixedWidth(10 + fm.width(l_cameraScreenBackBt->text()));
    l_cameraScreennextBt->setFixedWidth(10 + fm.width(l_cameraScreennextBt->text()));

    connect(l_cameraScreenBackBt,SIGNAL(clicked(bool)),this,SLOT(slotBackBtClicked()));
    connect(l_cameraScreennextBt,SIGNAL(clicked(bool)),this,SLOT(slotNextBtClicked()));

    QHBoxLayout *l_topHBoxLayout = new QHBoxLayout;
    l_topHBoxLayout->addLayout(l_leftLableVLayout,Qt::AlignLeft);
    l_topHBoxLayout->addWidget(l_cameraScreennextBt,Qt::AlignRight | Qt::AlignVCenter);
    l_topHBoxLayout->addWidget(l_cameraScreenBackBt,Qt::AlignRight | Qt::AlignVCenter);
    l_topHBoxLayout->setContentsMargins(0,0,0,0);

    QLabel *l_addCameraFlow = new QLabel;
    QPixmap pix(":/Images/Add_Camera_flow_page3.png");
    l_addCameraFlow->setPixmap(pix);
    l_addCameraFlow->setAlignment(Qt::AlignHCenter);
    l_addCameraFlow->setContentsMargins(0,0,0,0);

    int l_pStackedWidgetWidth = m_pWidth;
    int l_pStackedWidgetHight = ((m_pHight / 100) * 91);

    m_pCameraMainStackedWidget->setMaximumSize(m_pWidth,m_pHight);
    m_pCameraMainStackedWidget->setMinimumSize(l_pStackedWidgetWidth,l_pStackedWidgetHight);
    m_pCameraMainStackedWidget->setFixedSize(l_pStackedWidgetWidth,l_pStackedWidgetHight);

    QVBoxLayout *l_layout = new QVBoxLayout;
    l_layout->addLayout(l_topHBoxLayout);
    l_layout->addWidget(l_addCameraFlow);
    l_layout->addWidget(m_pCameraMainStackedWidget);
    m_pCameraMainStackedWidget->setContentsMargins(0,0,0,0);
    l_layout->setContentsMargins(0,0,0,0);
    this->setLayout(l_layout);
}

void AddCameraMainWidget::slotNextBtClicked()
{
    int index = m_pCameraMainStackedWidget->currentIndex();

    switch (index) {
    case 0:
        m_pCameraMainStackedWidget->setCurrentIndex(1);
        break;
    case 1:
        m_pCameraMainStackedWidget->setCurrentIndex(2);
        break;
    case 2:
        break;
    default:
        break;
    }
}
void AddCameraMainWidget::slotBackBtClicked()
{
    int index = m_pCameraMainStackedWidget->currentIndex();

    switch (index) {
    case 0:
        break;
    case 1:
        m_pCameraMainStackedWidget->setCurrentIndex(0);
        break;
    case 2:
        m_pCameraMainStackedWidget->setCurrentIndex(1);
        break;
    default:
        break;
    }
}
