#include "modelsingleton.h"
#include<QDebug>


ModelSingleTon* ModelSingleTon::m_pModel = NULL;

ModelSingleTon::ModelSingleTon() : QObject()
{
    m_pCameraListModel = new CameraListModel();
    m_pMapListModel = new MapListModel();
    m_pMediaSourceListingmodel = new MediaSourceListingModel();
    m_pManufacturModel = new ManufacturModel();
    m_pModelModel = new ModelModel();
    m_pCameraGroupModel = new CameraGroupModel();
    m_pUserGroupModel = new UserGroupModel();
    m_pViewModel = new ViewModel();

//Temp Data Insertion in Model Lter needs to be removed and will be done by Controller via Model API's
    CameraItem *item1 = new CameraItem();
    CameraItem *item2 = new CameraItem();
    CameraItem *item3 = new CameraItem();
    item1->setCameraName("Cam-1");
    item2->setCameraName("Cam-2");
    item3->setCameraName("Cam-3");
    m_pCameraListModel->AddCameraItem(item1);
    m_pCameraListModel->AddCameraItem(item2);
    m_pCameraListModel->AddCameraItem(item3);    

    MapItem *map1 = new MapItem();
    MapItem *map2 = new MapItem();
    MapItem *map3 = new MapItem();
    map1->setMapName("Map-1");
    map2->setMapName("Map-2");
    map3->setMapName("Map-3");
    m_pMapListModel->AddMapItem(map1);
    m_pMapListModel->AddMapItem(map2);
    m_pMapListModel->AddMapItem(map3);

    ManufacturItem *manu1 = new ManufacturItem();
    ManufacturItem *manu2 = new ManufacturItem();
    ManufacturItem *manu3 = new ManufacturItem();
    ManufacturItem *manu4 = new ManufacturItem();
    manu1->setManufacturerName("Manufacturer - 1");
    manu2->setManufacturerName("Manufacturer - 2");
    manu3->setManufacturerName("Manufacturer - 3");
    manu4->setManufacturerName("Manufacturer - 4");
    m_pManufacturModel->AddManufacturItem(manu1);
    m_pManufacturModel->AddManufacturItem(manu2);
    m_pManufacturModel->AddManufacturItem(manu3);
    m_pManufacturModel->AddManufacturItem(manu4);

    ModelItem *model1 = new ModelItem();
    ModelItem *model2 = new ModelItem();
    ModelItem *model3 = new ModelItem();
    ModelItem *model4 = new ModelItem();
    model1->setModelName("Model - 1");
    model2->setModelName("Model - 2");
    model3->setModelName("Model - 3");
    model4->setModelName("Model - 4");
    m_pModelModel->AddModelItem(model1);
    m_pModelModel->AddModelItem(model2);
    m_pModelModel->AddModelItem(model3);
    m_pModelModel->AddModelItem(model4);

    CameraGroupItem *camGroup1 = new CameraGroupItem();
    CameraGroupItem *camGroup2 = new CameraGroupItem();
    CameraGroupItem *camGroup3 = new CameraGroupItem();
    CameraGroupItem *camGroup4 = new CameraGroupItem();
    camGroup1->setCameraGroupName("Camera Group - 1");
    camGroup2->setCameraGroupName("Camera Group - 2");
    camGroup3->setCameraGroupName("Camera Group - 3");
    camGroup4->setCameraGroupName("Camera Group - 4");
    m_pCameraGroupModel->AddCameraGroupItem(camGroup1);
    m_pCameraGroupModel->AddCameraGroupItem(camGroup2);
    m_pCameraGroupModel->AddCameraGroupItem(camGroup3);
    m_pCameraGroupModel->AddCameraGroupItem(camGroup4);

    UserGroupItem *usrGroup1 = new UserGroupItem();
    UserGroupItem *usrGroup2 = new UserGroupItem();
    UserGroupItem *usrGroup3 = new UserGroupItem();
    UserGroupItem *usrGroup4 = new UserGroupItem();
    usrGroup1->setUserGroupName("User Group - 1");
    usrGroup2->setUserGroupName("User Group - 2");
    usrGroup3->setUserGroupName("User Group - 3");
    usrGroup4->setUserGroupName("User Group - 4");
    m_pUserGroupModel->AddUserGroupItem(usrGroup1);
    m_pUserGroupModel->AddUserGroupItem(usrGroup2);
    m_pUserGroupModel->AddUserGroupItem(usrGroup3);
    m_pUserGroupModel->AddUserGroupItem(usrGroup4);



    MediaSourceListingItem *root = new MediaSourceListingItem("S1");

    MediaSourceListingItem *mitem1 = new MediaSourceListingItem("Cam-1",root);
    MediaSourceListingItem *mitem2 = new MediaSourceListingItem("Cam-2",root);
    MediaSourceListingItem *mitem3 = new MediaSourceListingItem("Cam-3",root);
    MediaSourceListingItem *mitem4 = new MediaSourceListingItem("Cam-4",root);
    MediaSourceListingItem *mitem5 = new MediaSourceListingItem("Cam-5",root);
    mitem1->setCheckable(true);
    mitem2->setCheckable(true);
    mitem3->setCheckable(true);
    mitem4->setCheckable(true);
    mitem5->setCheckable(true);
    root->insertChildren(mitem1);
    root->insertChildren(mitem2);
    root->insertChildren(mitem3);
    root->insertChildren(mitem4);
    root->insertChildren(mitem5);

    MediaSourceListingItem *root2 = new MediaSourceListingItem("S2");
    MediaSourceListingItem *mitem6 = new MediaSourceListingItem("Cam-6",root2);
    MediaSourceListingItem *mitem7 = new MediaSourceListingItem("Cam-7",root2);
    MediaSourceListingItem *mitem8 = new MediaSourceListingItem("Cam-8",root2);
    MediaSourceListingItem *mitem9 = new MediaSourceListingItem("Cam-9",root2);
    MediaSourceListingItem *mitem10 = new MediaSourceListingItem("Cam-10",root2);
    mitem6->setCheckable(true);
    mitem7->setCheckable(true);
    mitem8->setCheckable(true);
    mitem9->setCheckable(true);
    mitem10->setCheckable(true);
    root2->insertChildren(mitem6);
    root2->insertChildren(mitem7);
    root2->insertChildren(mitem8);
    root2->insertChildren(mitem9);
    root2->insertChildren(mitem10);

    m_pMediaSourceListingmodel->AppendItemtoRoot(root);
    m_pMediaSourceListingmodel->AppendItemtoRoot(root2);


}

ModelSingleTon* ModelSingleTon::getInstance()
{
    if (NULL == m_pModel )
    {
        m_pModel = new ModelSingleTon();
    }
    return m_pModel;
}

ModelSingleTon::~ModelSingleTon()
{
}

CameraListModel* ModelSingleTon::getCameraListModel()
{
    return m_pCameraListModel;
}

MapListModel* ModelSingleTon::getMapListModel()
{
    return m_pMapListModel;
}

MediaSourceListingModel* ModelSingleTon::getMediaSourceListingModel()
{
    return m_pMediaSourceListingmodel;
}

ManufacturModel* ModelSingleTon::getManufacturModel()
{
    return m_pManufacturModel;
}

ModelModel* ModelSingleTon::getModelModel()
{
    return m_pModelModel;
}

CameraGroupModel* ModelSingleTon::getCameraGroupModel()
{
    return m_pCameraGroupModel;
}

UserGroupModel* ModelSingleTon::getUserGroupModel()
{
    return m_pUserGroupModel;
}
