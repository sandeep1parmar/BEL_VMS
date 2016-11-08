#ifndef MODELSINGLETON_H
#define MODELSINGLETON_H

#include <QObject>
#include <QStringListModel>
#include <QTimer>
#include <QDebug>
#include <QMutex>
#include "Model/cameraitem.h"
#include "Model/cameralistmodel.h"
#include "Model/mapitem.h"
#include "Model/maplistmodel.h"
#include "Model/Live/mediasourcelistingmodel.h"
#include "Model/Live/mediasourcelistingitem.h"
#include "Model/manufactureitem.h"
#include "Model/manufacturemodel.h"
#include "Model/modelitem.h"
#include "Model/modelmodel.h"
#include "Model/cameragroupitem.h"
#include "Model/cameragroupmodel.h"
#include "Model/usergroupitem.h"
#include "Model/usergroupmodel.h"
#include "Model/Live/viewitem.h"
#include "Model/Live/viewmodel.h"

typedef struct CameraStruct {
    int CameraID;
    QString CameraName;
    QString CameraIcon;
    QString CameraRTSPLink;
    int CameraMapLinkID;
    int CameraMapXPos;
    int CameraMapYPos;
    int ManufacturId;
    QString ManufacturName;
    int ModelId;
    QString ModelName;
    int CameraGroupId;
    QString CameraGroupName;
    int UserGroupId;
    QString UserGroupName;
}CAMERASTRUCT_S;

class ModelSingleTon : public QObject
{
    Q_OBJECT
public:
    static ModelSingleTon* getInstance();
    CameraListModel* getCameraListModel();
    MapListModel* getMapListModel();
    MediaSourceListingModel* getMediaSourceListingModel();
    ManufacturModel *getManufacturModel();
    ModelModel *getModelModel();
    CameraGroupModel *getCameraGroupModel();
    UserGroupModel *getUserGroupModel();
signals:

public slots:

private slots:

private:
    ModelSingleTon();
    ~ModelSingleTon();
    static ModelSingleTon* m_pModel;
    CameraListModel *m_pCameraListModel;
    MapListModel *m_pMapListModel;
    MediaSourceListingModel *m_pMediaSourceListingmodel;
    ManufacturModel *m_pManufacturModel;
    ModelModel *m_pModelModel;
    CameraGroupModel *m_pCameraGroupModel;
    UserGroupModel *m_pUserGroupModel;
    ViewModel *m_pViewModel;
};

#endif // MODEL_H
