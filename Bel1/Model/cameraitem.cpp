#include "cameraitem.h"

CameraItem::CameraItem(QObject *parent) : QObject(parent)
{
    m_pCameraID = 0;
    m_pCameraName = "";
    m_pCameraIconPath = "";
    m_pCameraRTSPLink = "";
    m_pIsChecked = false;
}

CameraItem::~CameraItem()
{

}
void CameraItem::setCameraID(int aCameraID)
{
    m_pCameraID = aCameraID;
}
void CameraItem::setCameraName(QString aCameraName)
{
    m_pCameraName = aCameraName;
}
void CameraItem::setCameraIconPath(QString aCameraIconPath)
{
    m_pCameraIconPath = aCameraIconPath;
}
void CameraItem::setCameraRTSPLink(QString aRTSPlinkString)
{
    m_pCameraRTSPLink = aRTSPlinkString;
}
int CameraItem::getCameraID()
{
    return m_pCameraID;
}
QString CameraItem::getCameraName()
{
    return m_pCameraName;
}
QString CameraItem::getCameraIconPath()
{
    return m_pCameraIconPath;
}
QString CameraItem::getCameraRTSPLink()
{
    return m_pCameraRTSPLink;
}
bool CameraItem::ischecked()
{
    return m_pIsChecked;
}
void CameraItem::setChecked(bool aChecked)
{
    m_pIsChecked = aChecked;
}
