#include "toolboxlayoutcontrolwidget.h"

ToolBoxLayoutControlWidget::ToolBoxLayoutControlWidget(int aWidth, int aHeight, QWidget *parent) : QWidget(parent)
{
    m_pWidth = aWidth;
    m_pHeight = aHeight;
    icon_height=(m_pHeight/100)*5;
    icon_width=(m_pHeight/100)*4;
    creatControlsAndLayout();
}
ToolBoxLayoutControlWidget::~ToolBoxLayoutControlWidget()
{

}
void ToolBoxLayoutControlWidget::creatControlsAndLayout()
{
    //QString ss = "QLabel { border-style: outset; border-width: 2px; border-color : blue; }";
    //QLabel *l_lbl= new QLabel("ToolBoxLayoutControlWidget");
    //l_lbl->setStyleSheet(ss);
    l_Vlayout = new QVBoxLayout;
    //  l_Vlayout->addWidget(l_lbl);
    l_Vlayout->setContentsMargins(0,0,0,0);


    // page = new QWidget(toolBox);
    // page->setObjectName(QStringLiteral("page_layout"));
    // verticalLayout_page_layout = new QVBoxLayout(page);
    // verticalLayout_page_layout->setObjectName(QStringLiteral("verticalLayout_page_layout"));
    gridLayout = new QGridLayout;
    gridLayout->setObjectName(QStringLiteral("gridLayout"));




    pushButton_1x1 = new QPushButton();
    pushButton_1x1->setObjectName(QStringLiteral("pushButton_1x1"));
    pushButton_1x1->setStyleSheet(QStringLiteral(""));
    pushButton_1x1->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);

    connect(pushButton_1x1,SIGNAL(clicked(bool)),this,SLOT(slot1x1clicked()));

    QIcon icon31;
    icon31.addFile(QStringLiteral(":/Images/1.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_1x1->setIconSize(QSize(icon_width,icon_height));
    pushButton_1x1->setIcon(icon31);
    gridLayout->addWidget(pushButton_1x1,0,0,1,1);

    pushButton_2x2 = new QPushButton();
    pushButton_2x2->setObjectName(QStringLiteral("pushButton_2x2"));
    pushButton_2x2->setStyleSheet(QStringLiteral(""));
    pushButton_2x2->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    connect(pushButton_2x2,SIGNAL(clicked(bool)),this,SLOT(slot2x2clicked()));

    QIcon icon41;
    icon41.addFile(QStringLiteral(":/Images/2.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_2x2->setIconSize(QSize(icon_width,icon_height));
    pushButton_2x2->setIcon(icon41);
    gridLayout->addWidget(pushButton_2x2,0,1,1,1);

    pushButton_4x4 = new QPushButton();
    pushButton_4x4->setObjectName(QStringLiteral("pushButton_4x4"));
    pushButton_4x4->setStyleSheet(QStringLiteral(""));
    pushButton_4x4->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    connect(pushButton_4x4,SIGNAL(clicked(bool)),this,SLOT(slot4x4clicked()));

    QIcon icon51;
    icon51.addFile(QStringLiteral(":/Images/4.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_4x4->setIconSize(QSize(icon_width,icon_height));
    pushButton_4x4->setIcon(icon51);
    gridLayout->addWidget(pushButton_4x4,1,0,1,1);

    pushButton_5x5 = new QPushButton();
    pushButton_5x5->setObjectName(QStringLiteral("pushButton_5x5"));
    pushButton_5x5->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    pushButton_5x5->setStyleSheet(QStringLiteral(""));

    QIcon icon61;
    icon61.addFile(QStringLiteral(":/Images/5.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_5x5->setIconSize(QSize(icon_width,icon_height));
    pushButton_5x5->setIcon(icon61);
    gridLayout->addWidget(pushButton_5x5,1,1,1,1);

    pushButton_3x3_one = new QPushButton();
    pushButton_3x3_one->setObjectName(QStringLiteral("pushButton_3x3_one"));
    pushButton_3x3_one->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    pushButton_3x3_one->setStyleSheet(QStringLiteral(""));

    QIcon icon71;
    icon71.addFile(QStringLiteral(":/Images/9.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_3x3_one->setIconSize(QSize(icon_width,icon_height));
    pushButton_3x3_one->setIcon(icon71);
    gridLayout->addWidget(pushButton_3x3_one,2,0,1,1);

    pushButton_4x4_one = new QPushButton();
    pushButton_4x4_one->setObjectName(QStringLiteral("pushButton_4x4_one"));
    pushButton_4x4_one->setStyleSheet(QStringLiteral(""));
    pushButton_4x4_one->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);


    QIcon icon81;
    icon81.addFile(QStringLiteral(":/Images/10.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_4x4_one->setIconSize(QSize(icon_width,icon_height));
    pushButton_4x4_one->setIcon(icon81);
    gridLayout->addWidget(pushButton_4x4_one,2,1,1,1);

    pushButton_2x2_left = new QPushButton();
    pushButton_2x2_left->setObjectName(QStringLiteral("pushButton_2x2_left"));
    pushButton_2x2_left->setStyleSheet(QStringLiteral(""));
    pushButton_2x2_left->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);


    QIcon icon91;
    icon91.addFile(QStringLiteral(":/Images/8.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_2x2_left->setIconSize(QSize(icon_width,icon_height));
    pushButton_2x2_left->setIcon(icon91);
    gridLayout->addWidget(pushButton_2x2_left,3,0,1,1);

    pushButton_3x3 = new QPushButton();
    pushButton_3x3->setObjectName(QStringLiteral("pushButton_3x3"));
    pushButton_3x3->setStyleSheet(QStringLiteral(""));
    pushButton_3x3->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    connect(pushButton_3x3,SIGNAL(clicked(bool)),this,SLOT(slot3x3clicked()));

    QIcon icon101;
    icon101.addFile(QStringLiteral(":/Images/3.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_3x3->setIconSize(QSize(icon_width,icon_height));
    pushButton_3x3->setIcon(icon101);
    gridLayout->addWidget(pushButton_3x3,3,1,1,1);

    pushButton_2x2_top = new QPushButton();
    pushButton_2x2_top->setObjectName(QStringLiteral("pushButton_2x2_top"));
    pushButton_2x2_top->setStyleSheet(QStringLiteral(""));
    pushButton_2x2_top->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);

    QIcon icon111;
    icon111.addFile(QStringLiteral(":/Images/7.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_2x2_top->setIconSize(QSize(icon_width,icon_height));
    pushButton_2x2_top->setIcon(icon111);
    gridLayout->addWidget(pushButton_2x2_top,4,0,1,1);

    pushButton_aspect_ratio = new QPushButton();
    pushButton_aspect_ratio->setObjectName(QStringLiteral("pushButton_aspect_ratio"));
    pushButton_aspect_ratio->setStyleSheet(QStringLiteral(""));
    pushButton_aspect_ratio->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    pushButton_aspect_ratio->setText("Aspect\nRatio");

    gridLayout->addWidget(pushButton_aspect_ratio,4,1,1,1);
    l_Vlayout->addLayout(gridLayout);

    QSpacerItem *spacer_layout=new QSpacerItem(0,0,QSizePolicy::Minimum,QSizePolicy::Expanding);
    l_Vlayout->addItem(spacer_layout);



    this->setLayout(l_Vlayout);
}
void ToolBoxLayoutControlWidget::slot1x1clicked()
{
    emit sigLayoutButtonPressed(1);
}
void ToolBoxLayoutControlWidget::slot2x2clicked()
{
    emit sigLayoutButtonPressed(2);
}
void ToolBoxLayoutControlWidget::slot3x3clicked()
{
    emit sigLayoutButtonPressed(3);
}
void ToolBoxLayoutControlWidget::slot4x4clicked()
{
    emit sigLayoutButtonPressed(4);


}
