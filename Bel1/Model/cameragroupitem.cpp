#include "Model/cameragroupitem.h"

CameraGroupItem::CameraGroupItem(QObject *parent) : QObject(parent)
{
    m_pCameraGroupID = 0;
    m_pCameraGroupName = "";
}
CameraGroupItem::~CameraGroupItem()
{

}
void CameraGroupItem::setCameraGroupID(int aCameraGroupID)
{
    m_pCameraGroupID = aCameraGroupID;
}
void CameraGroupItem::setCameraGroupName(QString aCameraGroupName)
{
    m_pCameraGroupName = aCameraGroupName;
}

int CameraGroupItem::getCameraGroupID()
{
    return m_pCameraGroupID;
}

QString CameraGroupItem::getCameraGroupName()
{
    return m_pCameraGroupName;
}
