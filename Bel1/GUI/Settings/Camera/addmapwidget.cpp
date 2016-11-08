#include "addmapwidget.h"

AddMapWidget::AddMapWidget(int aWidth, int aHeight, QWidget *parent) : QWidget(parent)
{
    m_pHight = aHeight;
    m_pWidth = aWidth;
    creatControlsAndLayout();
    setFixedSize(m_pWidth,m_pHight);
}
AddMapWidget::~AddMapWidget()
{
}
void AddMapWidget::creatControlsAndLayout()
{
    QString ss = "QLabel { background-color: gray; border-style: box; border-width: 2px; border-color : gray; }";
    QLabel *l_cameraNameLabel = new QLabel("Camera Name");
    m_pCameraNameVal = new QLabel("cam-1");
    l_cameraNameLabel->setFixedWidth(100);
    l_cameraNameLabel->setFixedHeight(20);
    l_cameraNameLabel->setStyleSheet(ss);
    m_pCameraNameVal->setStyleSheet(ss);
    m_pCameraNameVal->setFixedHeight(20);

    QHBoxLayout *l_cameranameLayout = new QHBoxLayout;
    l_cameranameLayout->addWidget(l_cameraNameLabel);
    l_cameranameLayout->addWidget(m_pCameraNameVal);
    l_cameranameLayout->setSpacing(0);

    //map load layout
    QLabel *l_mapLbl = new QLabel("Map");

    m_pMapListComboBox = new QComboBox;
    m_pMapListComboBox->setFixedWidth(100);
    m_pMapListComboBox->setModel(ModelSingleTon::getInstance()->getMapListModel());

    QPushButton *l_loadMapBt = new QPushButton("Load Map");
    l_loadMapBt->setFixedWidth(80);

    QHBoxLayout *l_maploadLayout = new QHBoxLayout;
    l_maploadLayout->addWidget(l_mapLbl);
    l_maploadLayout->addWidget(m_pMapListComboBox);
    l_maploadLayout->addWidget(l_loadMapBt);
    l_maploadLayout->addItem(new QSpacerItem(100,10,QSizePolicy::Expanding,QSizePolicy::Ignored));


    // camera list and its layout

    QLabel *l_CameraListLbl = new QLabel("Camera List");
    l_CameraListLbl->setStyleSheet(ss);
    l_CameraListLbl->setFixedHeight(20);
    m_pListView = new QListView;
//    m_pListView->setFixedHeight(100);
    m_pListView->setModel(ModelSingleTon::getInstance()->getCameraListModel());

    QVBoxLayout *cameralistLayout = new QVBoxLayout;
    cameralistLayout->addWidget(l_CameraListLbl);
    cameralistLayout->addWidget(m_pListView);

    m_pMapLable = new QLabel;
    QPixmap pix(":/Images/Map1.png");
    m_pMapLable->setPixmap(pix);
    //l_addCameraFlow->setAlignment(Qt::AlignHCenter);

    // middle layout for list widget and image of map
    QHBoxLayout *l_middleLayout = new QHBoxLayout;
    l_middleLayout->addLayout(cameralistLayout);
    l_middleLayout->addWidget(m_pMapLable);
    l_middleLayout->addItem(new QSpacerItem(100,10,QSizePolicy::Expanding,QSizePolicy::Ignored));

    //lower button layout
    QPushButton *btPrevious = new QPushButton("Previous");
    QPushButton *btNext = new QPushButton("Next");
    QPushButton *btSave = new QPushButton("Save");
    QPushButton *btCancel = new QPushButton("Cancel");

    QHBoxLayout *l_buttonLayout = new QHBoxLayout;
    l_buttonLayout->addItem(new QSpacerItem(100,10,QSizePolicy::Expanding,QSizePolicy::Ignored));
    l_buttonLayout->addWidget(btPrevious);
    l_buttonLayout->addWidget(btNext);
    l_buttonLayout->addWidget(btSave);
    l_buttonLayout->addWidget(btCancel);
    l_buttonLayout->addItem(new QSpacerItem(100,10,QSizePolicy::Expanding,QSizePolicy::Ignored));


    QVBoxLayout *l_layout = new QVBoxLayout;
    l_layout->addLayout(l_cameranameLayout);
    l_layout->addLayout(l_maploadLayout);
    l_layout->addLayout(l_middleLayout);
    l_layout->addLayout(l_buttonLayout);
    this->setLayout(l_layout);
}
