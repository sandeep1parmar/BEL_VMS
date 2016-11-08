#include "toolboxptzcontrolwidget.h"

ToolBoxPTZControlWidget::ToolBoxPTZControlWidget(int aWidth,int aHeight,QWidget *parent) : QWidget(parent)
{
    m_pWidth = aWidth;
    m_pHeight = aHeight;
    icon_height=(m_pHeight/100)*5;
    icon_width=(m_pHeight/100)*4;
    creatControlsAndLayout();
}
ToolBoxPTZControlWidget::~ToolBoxPTZControlWidget()
{

}
void ToolBoxPTZControlWidget::creatControlsAndLayout()
{
    //QString ss = "QLabel { border-style: outset; border-width: 2px; border-color : blue; }";
    //QLabel *l_lbl= new QLabel("ToolBoxPTZControlWidget");
    //l_lbl->setStyleSheet(ss);
    l_Vlayout = new QVBoxLayout;
    //l_Vlayout->addWidget(l_lbl);
    l_Vlayout->setContentsMargins(0,0,0,0);



    QGridLayout *gridLayout_ptz = new QGridLayout();
    gridLayout_ptz->setObjectName(QStringLiteral("gridLayout_ptz"));

    QPushButton *pushButton_top_left = new QPushButton();
    // pushButton_top_left->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    pushButton_top_left->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    pushButton_top_left->setObjectName(QStringLiteral("pushButton_top_left"));
    pushButton_top_left->setStyleSheet(QStringLiteral(""));
    pushButton_top_left->setText(QString());
    pushButton_top_left->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
    QIcon icon3;
    icon3.addFile(QStringLiteral(":/Images/left_up.png"), QSize(), QIcon::Normal, QIcon::Off);

    pushButton_top_left->setIconSize(QSize(icon_width,icon_height));
    pushButton_top_left->setIcon(icon3);
    gridLayout_ptz->addWidget(pushButton_top_left, 0, 0, 1, 1);

    QPushButton *pushButton_top = new QPushButton();
    //  pushButton_top->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
    pushButton_top->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    pushButton_top->setObjectName(QStringLiteral("pushButton_top"));
    pushButton_top->setText(QString());
    pushButton_top->setStyleSheet(QStringLiteral(""));
    QIcon icon4;
    icon4.addFile(QStringLiteral(":/Images/up.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_top->setIconSize(QSize(icon_width,icon_height));

    pushButton_top->setIcon(icon4);
    gridLayout_ptz->addWidget(pushButton_top, 0, 1, 1, 1);

    QPushButton *pushButton_top_right = new QPushButton();
    //    pushButton_top_right->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
    pushButton_top_right->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    pushButton_top_right->setObjectName(QStringLiteral("pushButton_top_right"));
    pushButton_top_right->setStyleSheet(QStringLiteral(""));

    QIcon icon5;
    icon5.addFile(QStringLiteral(":/Images/up_right.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_top_right->setIconSize(QSize(icon_width,icon_height));

    pushButton_top_right->setIcon(icon5);
    pushButton_top_right->setText(QString());
    gridLayout_ptz->addWidget(pushButton_top_right, 0, 2, 1, 1);

    QPushButton *pushButton_left = new QPushButton();
    pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
    pushButton_left->setStyleSheet(QStringLiteral(""));
    pushButton_left->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);

    QIcon icon6;
    icon6.addFile(QStringLiteral(":/Images/left.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_left->setIcon(icon6);
    pushButton_left->setIconSize(QSize(icon_width,icon_height));
    pushButton_left->setText(QString());
    gridLayout_ptz->addWidget(pushButton_left, 1, 0, 1, 1);

    QPushButton *pushButton_right = new QPushButton();
    pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
    pushButton_right->setStyleSheet(QStringLiteral(""));
    pushButton_right->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);

    QIcon icon7;
    icon7.addFile(QStringLiteral(":/Images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_right->setIcon(icon7);
    pushButton_right->setIconSize(QSize(icon_width,icon_height));
    pushButton_right->setText(QString());
    gridLayout_ptz->addWidget(pushButton_right, 1, 2, 1, 1);

    QPushButton *pushButton_down_left = new QPushButton();
    //  pushButton_down_left->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
    pushButton_down_left->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    pushButton_down_left->setObjectName(QStringLiteral("pushButton_down_left"));
    pushButton_down_left->setStyleSheet(QStringLiteral(""));
    QIcon icon8;
    icon8.addFile(QStringLiteral(":/Images/down_left.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_down_left->setIconSize(QSize(icon_width,icon_height));

    pushButton_down_left->setIcon(icon8);
    pushButton_down_left->setText(QString());
    gridLayout_ptz->addWidget(pushButton_down_left, 2, 0, 1, 1);

    QPushButton *pushButton_down = new QPushButton();
    pushButton_down->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    //  pushButton_down->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
    pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
    // pushButton_down->setMaximumSize(QSize(31, 31));
    pushButton_down->setStyleSheet(QStringLiteral(""));
    QIcon icon9;
    icon9.addFile(QStringLiteral(":/Images/down.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_down->setIconSize(QSize(icon_width,icon_height));

    pushButton_down->setIcon(icon9);
    //  pushButton_down->setIconSize(QSize(22, 22));
    pushButton_down->setText(QString());
    gridLayout_ptz->addWidget(pushButton_down, 2, 1, 1, 1);

    QPushButton *pushButton_down_right = new QPushButton();
    //    pushButton_down_right->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
    pushButton_down_right->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    pushButton_down_right->setObjectName(QStringLiteral("pushButton_down_right"));
    //  pushButton_down_right->setMaximumSize(QSize(31, 31));
    pushButton_down_right->setStyleSheet(QStringLiteral(""));
    QIcon icon10;
    icon10.addFile(QStringLiteral(":/Images/right_down.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_down_right->setIconSize(QSize(icon_width,icon_height));

    pushButton_down_right->setIcon(icon10);
    //  pushButton_down_right->setIconSize(QSize(30, 30));
    pushButton_down_right->setText(QString());
    gridLayout_ptz->addWidget(pushButton_down_right, 2, 2, 1, 1);


    QVBoxLayout *verticalLayout_11=new QVBoxLayout;
    verticalLayout_11->addLayout(gridLayout_ptz);

    QHBoxLayout *  horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
    QPushButton *pushButton_zoomin = new QPushButton();
    //    pushButton_zoomin->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
    pushButton_zoomin->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    pushButton_zoomin->setObjectName(QStringLiteral("pushButton_zoomin"));
    // pushButton_zoomin->setMaximumSize(QSize(31, 31));

    pushButton_zoomin->setStyleSheet(QStringLiteral(""));
    QIcon icon11;
    icon11.addFile(QStringLiteral(":/Images/pluse.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_zoomin->setIconSize(QSize(icon_width/2,icon_height/2));

    pushButton_zoomin->setIcon(icon11);
    pushButton_zoomin->setText(QString());
    horizontalLayout_2->addWidget(pushButton_zoomin);

    QPushButton *pushButton_zoomout = new QPushButton();
    //   pushButton_zoomout->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
    pushButton_zoomout->setFixedSize((m_pHeight/100)*5,(m_pHeight/100)*4);
    pushButton_zoomout->setObjectName(QStringLiteral("pushButton_zoomout"));
    // pushButton_zoomout->setMaximumSize(QSize(31, 31));
    pushButton_zoomout->setStyleSheet(QStringLiteral(""));
    QIcon icon12;
    icon12.addFile(QStringLiteral(":/Images/minuse.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_zoomout->setIconSize(QSize(icon_width,icon_height));

    pushButton_zoomout->setIcon(icon12);
    pushButton_zoomout->setText(QString());
    horizontalLayout_2->addWidget(pushButton_zoomout);

    verticalLayout_11->addLayout(horizontalLayout_2);
    l_Vlayout->addLayout(verticalLayout_11);

    QSpacerItem *verticalSpacer_3 = new QSpacerItem(2,4, QSizePolicy::Minimum, QSizePolicy::Expanding);
    l_Vlayout->addItem(verticalSpacer_3);

    QLabel *label = new QLabel();
    label->setObjectName(QStringLiteral("label"));
    label->setText(QApplication::translate("live_window", "PTZ Tour", 0));

    QFont font3;
    // font3.setPointSize(10);
    // label->setFont(font3);

    QGridLayout *gridLayout_2 = new QGridLayout();
    gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
    gridLayout_2->addWidget(label, 0, 0, 1, 1);

    QComboBox*  comboBox_ptztour = new QComboBox();
    comboBox_ptztour->setObjectName(QStringLiteral("comboBox_ptztour"));
    //comboBox_ptztour->setMaximumSize(QSize(91, 27));
    comboBox_ptztour->setStyleSheet(QStringLiteral(""));
    gridLayout_2->addWidget(comboBox_ptztour, 1, 0, 1, 1);

    QPushButton *pushButton_startptz = new QPushButton();
    pushButton_startptz->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
    pushButton_startptz->setObjectName(QStringLiteral("pushButton_startptz"));
    // pushButton_startptz->setMaximumSize(QSize(51, 27));
    pushButton_startptz->setStyleSheet(QStringLiteral(""));
    pushButton_startptz->setText(QApplication::translate("live_window", "Start", 0));
    gridLayout_2->addWidget(pushButton_startptz, 1, 1, 1, 1);


    l_Vlayout->addLayout(gridLayout_2);
    QSpacerItem *verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);
    l_Vlayout->addItem(verticalSpacer);

    QVBoxLayout*  verticalLayout_3 = new QVBoxLayout();
    verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
    QLabel *  label_2 = new QLabel();
    label_2->setObjectName(QStringLiteral("label_2"));
    label_2->setText(QApplication::translate("live_window", "Speed", 0));

    label_2->setFont(font3);
    verticalLayout_3->addWidget(label_2);

    QSlider *slider_speed = new QSlider();
    slider_speed->setObjectName(QStringLiteral("slider_speed"));
    slider_speed->setStyleSheet(QStringLiteral(""));
    slider_speed->setOrientation(Qt::Horizontal);
    verticalLayout_3->addWidget(slider_speed);
    l_Vlayout->addLayout(verticalLayout_3);

    QSpacerItem * verticalSpacer_2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

    l_Vlayout->addItem(verticalSpacer_2);
    QGridLayout *gridLayout_3 = new QGridLayout();
    gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
    QLabel *label_3 = new QLabel();
    label_3->setObjectName(QStringLiteral("label_3"));
    label_3->setText(QApplication::translate("live_window", "PTZ Preset", 0));
    label_3->setFont(font3);
    gridLayout_3->addWidget(label_3, 0, 0, 1, 1);
    QComboBox*  comboBox_ptzpreset = new QComboBox();
    comboBox_ptzpreset->setObjectName(QStringLiteral("comboBox_ptzpreset"));
    gridLayout_3->addWidget(comboBox_ptzpreset, 1, 0, 1, 1);
    QPushButton *pushButton_ptz_go = new QPushButton();
    pushButton_ptz_go->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);

    pushButton_ptz_go->setObjectName(QStringLiteral("pushButton_ptz_go"));
    pushButton_ptz_go->setStyleSheet(QStringLiteral(""));
    pushButton_ptz_go->setText(QApplication::translate("live_window", "Go", 0));
    gridLayout_3->addWidget(pushButton_ptz_go, 1, 1, 1, 1);
    l_Vlayout->addLayout(gridLayout_3);



    this->setLayout(l_Vlayout);
}
