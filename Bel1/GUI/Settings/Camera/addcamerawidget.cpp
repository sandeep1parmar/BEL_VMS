/*! \file addCamera.cpp

\brief A Source file for addCameraWidget.


Auther : Tejas
Date : 10/27/2016
Create source file for add Camera page.

*/
#include <QDebug>
#include <QMainWindow>
#include "addcamerawidget.h"                   /*!< Header file for addCamera. */

//! AddCamera constructor.

/*!

AddCameraWidget constructor which construct all widgets and allocate memory for those widgets.

*/
AddCameraWidget::AddCameraWidget(int aWidth, int aHeight,QWidget *parent)
    : QWidget(parent)
{
    m_height = aHeight;
    m_width = aWidth;

    AddCameraWidget::createLayout();

    setFixedSize(m_width, m_height);
}

//! AddCamera destructor.

/*!

A destructor which remove alocated memory.

*/
AddCameraWidget::~AddCameraWidget()
{

}

void AddCameraWidget::createLayout()
{
    QVBoxLayout *layout = new QVBoxLayout();                    /*!< Vertical Layout create for entire page/view. */

    QLabel *ipAdder = new QLabel();                /*!< label object create to show text on view. */
    ipAdder->setText("Camera Information");
    ipAdder->setFixedHeight(30);
    ipAdder->setContentsMargins(m_width/60,1,1,1);
    ipAdder->setStyleSheet("border: 1px solid");

    QGridLayout *layout2 = new QGridLayout();                   /*!< Grid Layout for Grid View. */

    QLabel *ipAddress = new QLabel();              /*!< label object create to show text on view. */
    ipAddress->setText(tr("IP Address"));

    QLabel *camName = new QLabel();                /*!< label object create to show text on view. */
    camName->setText(tr("Camera Name"));

    QLabel *desc = new QLabel();                   /*!< label object create to show text on view. */
    desc->setText(tr("Description"));

    QLabel *manuf = new QLabel();                  /*!< label object create to show text on view. */
    manuf->setText(tr("Manufacturer"));
    manuf->setContentsMargins(m_width/60,1,1,1);

    QLabel *mod = new QLabel();                    /*!< label object create to show text on view. */
    mod->setText(tr("Model No."));
    mod->setContentsMargins(m_width/60,1,1,1);

    QLabel *usrName = new QLabel();                /*!< label object create to show text on view. */
    usrName->setText(tr("User Name"));
    usrName->setContentsMargins(m_width/60,1,1,1);

    QLabel *pass = new QLabel();                   /*!< label object create to show text on view. */
    pass->setText(tr("Password"));
    pass->setContentsMargins(m_width/60,1,1,1);

    ipAdd = new QLineEdit();                       /*!< line edit for user input. */

    cameraName = new QLineEdit();                  /*!< line edit for user input. */

    descri = new QTextEdit();                      /*!< Text edit for user multiple line input. */

    manufacture = new QComboBox();                 /*!< Combo Box for multiple choices. */
    manufacture->setModel(ModelSingleTon::getInstance()->getManufacturModel());

    modelNo = new QComboBox();                     /*!< Combo Box for multiple choices. */
    modelNo->setModel(ModelSingleTon::getInstance()->getModelModel());


    userName = new QLineEdit();                    /*!< line edit for user input. */

    password = new QLineEdit();                    /*!< line edit for user input. */


    connectCamera = new QPushButton();             /*!< Push Button for connect to camera. */
    connectCamera->setText(tr("Connect to Camera"));
    connectCamera->setFixedWidth(m_width/5);

    QSpacerItem *sp = new QSpacerItem(m_width/20,m_height);         /*!< Spacer for create require gap. */

    /*!< set Grid layout. */
    layout2->addWidget(ipAddress,0,0,1,1);
    layout2->addItem(sp,0,1,1,1);
    layout2->addWidget(ipAdd,0,2,1,1);
    layout2->addItem(sp,0,4,1,1);
    layout2->addWidget(camName,1,0,1,1);
    layout2->addWidget(cameraName,1,2,1,1);
    layout2->addWidget(desc,2,0,1,1);
    layout2->addWidget(descri,2,2,2,1);
    layout2->addWidget(manuf,0,3,1,1);
    layout2->addWidget(manufacture,0,5,1,1);
    layout2->addWidget(mod,1,3,1,1);
    layout2->addWidget(modelNo,1,5,1,1);
    layout2->addWidget(usrName,2,3,1,1);
    layout2->addWidget(userName,2,5,1,1);
    layout2->addWidget(pass,3,3,1,1);
    layout2->addWidget(password,3,5,1,1);
    layout2->addWidget(connectCamera,4,5,1,1,Qt::AlignRight);

    layout2->setContentsMargins(m_width/50,1,1,1);                /*!< add spacing left side. */

    QLabel *cameraCap = new QLabel();              /*!< label object create to show text on view. */
    cameraCap->setText(tr("Camera Capability"));
    cameraCap->setContentsMargins(m_width/60,1,1,1);
    cameraCap->setFixedHeight(30);
    cameraCap->setStyleSheet("border: 1px solid");


    QGridLayout *layout3 = new QGridLayout();                   /*!< Grid Layout for Grid View. */

    camera = new QCheckBox();                      /*!< Check Box for set user choice. */
    camera->setText(tr("Enable Camera"));

    mask = new QCheckBox();                        /*!< Check Box for set user choice. */
    mask->setText(tr("Privacy Mask Capable"));

    hidden = new QCheckBox();                      /*!< Check Box for set user choice. */
    hidden->setText(tr("Is Hidden"));

    multiStreaming = new QCheckBox();              /*!< Check Box for set user choice. */
    multiStreaming->setText(tr("Is Multistreaming Support"));

    present = new QCheckBox();                     /*!< Check Box for set user choice. */
    present->setText(tr("Present Capable"));

    ptz = new QCheckBox();                         /*!< Check Box for set user choice. */
    ptz->setText(tr("PTZ Capable"));

    ptzTour = new QCheckBox();                     /*!< Check Box for set user choice. */
    ptzTour->setText(tr("Is PTZ Tour Capable"));

    /*!< set layout. */
    layout3->addWidget(camera,0,0,1,1);
    layout3->addWidget(mask,1,0,1,1);
    layout3->addWidget(hidden,2,0,1,1);
    layout3->addWidget(multiStreaming,3,0,1,1);
    layout3->addWidget(present,0,1,1,1);
    layout3->addWidget(ptz,1,1,1,1);
    layout3->addWidget(ptzTour,2,1,1,1);

    layout3->setContentsMargins(m_width/50,1,1,1);            /*!< add spacing left side. */

    QLabel *addCamGroup = new QLabel();        /*!< label object create to show text on view. */
    addCamGroup->setText(tr("Add to Camera Group"));
    addCamGroup->setContentsMargins(m_width/60,1,1,1);
    addCamGroup->setFixedHeight(30);
    addCamGroup->setStyleSheet("border: 1px solid");

    QHBoxLayout *layout4 = new QHBoxLayout();               /*!< Set Horizantal layout. */

    QLabel *camGroup = new QLabel();           /*!< label object create to show text on view. */
    camGroup->setText(tr("Camera Group"));
    camGroup->setFixedWidth(m_width/5);

    cameraGroup = new QComboBox();             /*!< Combo Box for multiple choices. */
    cameraGroup->setFixedWidth(m_width/5);
    cameraGroup->setModel(ModelSingleTon::getInstance()->getCameraGroupModel());

    addNewGroup = new QPushButton();           /*!< Push Button for add new user Group. */
    addNewGroup->setText(tr("Add New Group"));
    addNewGroup->setFixedWidth(m_width/5);

    /*!< set Layout. */
    layout4->addWidget(camGroup,Qt::AlignLeft);
    layout4->addWidget(cameraGroup,Qt::AlignLeft);
    layout4->addWidget(addNewGroup,Qt::AlignLeft);
    layout4->setContentsMargins(m_width/60,1,m_width,1);

    QLabel *addUsrGroup = new QLabel();        /*!< label object create to show text on view. */
    addUsrGroup->setText(tr("Add to User Group"));
    addUsrGroup->setContentsMargins(m_width/60,1,1,1);
    addUsrGroup->setFixedHeight(30);
    addUsrGroup->setStyleSheet("border: 1px solid");

    QGridLayout *layout5 = new QGridLayout();  /*!< Grid Layout for Grid View. */

    QLabel *group1 = new QLabel();             /*!< label object create to show text on view. */
    group1->setText(tr("Assigned Group(s)"));

    QLabel *group2 = new QLabel();             /*!< label object create to show text on view. */
    group2->setText(tr("Assigned Group(s)"));

    filter1 = new QLineEdit();                 /*!< line edit for user input. */
    filter1->setPlaceholderText(tr("Filter"));

    filter2 = new QLineEdit();                 /*!< line edit for user input. */
    filter2->setPlaceholderText(tr("Filter"));

    usrGroup1 = new QListView();             /*!< List Widget. */
    usrGroup1->setModel(ModelSingleTon::getInstance()->getUserGroupModel());
    usrGroup2 = new QListView();             /*!< List Widget. */
    usrGroup2->setModel(ModelSingleTon::getInstance()->getUserGroupModel());

    /*!< set Layout. */
    layout5->addWidget(group1,0,0,1,1);
    layout5->addWidget(group2,0,1,1,1);
    layout5->addWidget(filter1,1,0,1,1);
    layout5->addWidget(filter2,1,1,1,1);
    layout5->addWidget(usrGroup1,2,0,1,1);
    layout5->addWidget(usrGroup2,2,1,1,1);

    layout5->setContentsMargins(m_width/50,1,m_width/50,1);     /*!< Add space left side and right side. */

    QHBoxLayout *layout6 = new QHBoxLayout();

    next = new QPushButton();                  /*!< PushButton for Next. */
    next->setText(tr("Next"));
    save = new QPushButton();                  /*!< PushButton for Next. */
    save->setText(tr("Save"));
    cancel = new QPushButton();                /*!< PushButton for Next. */
    cancel->setText(tr("Cancel"));

    /*!< set Layout. */
    layout6->addWidget(next);
    layout6->addWidget(save);
    layout6->addWidget(cancel);

    layout6->setContentsMargins(m_width,1,m_width/50,1);     /*!< Add space left side and right side. */

    /*!< set layout. */
    layout->addWidget(ipAdder,Qt::AlignTop);
    layout->addLayout(layout2,Qt::AlignTop);
    layout->addWidget(cameraCap,Qt::AlignTop);
    layout->addLayout(layout3,Qt::AlignTop);
    layout->addWidget(addCamGroup,Qt::AlignTop);
    layout->addLayout(layout4,Qt::AlignTop);
    layout->addWidget(addUsrGroup,Qt::AlignTop);
    layout->addLayout(layout5,Qt::AlignTop);
    layout->addLayout(layout6,Qt::AlignRight);

    //layout->setContentsMargins(1,1,1,m_width/10);             /*!< Add space left side and right side. */

    this->setLayout(layout);                                /*!< final layout set in central widget. */
}
