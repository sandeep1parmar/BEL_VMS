#ifndef CAMERAITEM_H
#define CAMERAITEM_H

#include <QObject>

class CameraItem : public QObject
{
    Q_OBJECT
public:
    explicit CameraItem(QObject *parent = 0);
    ~CameraItem();
    void setCameraID(int aCameraID);
    void setCameraName(QString aCameraName);
    void setCameraIconPath(QString aCameraIconPath);
    void setCameraRTSPLink(QString aRTSPlinkString);
    int getCameraID();
    QString getCameraName();
    QString getCameraIconPath();
    QString getCameraRTSPLink();
    bool ischecked();
    void setChecked(bool aChecked);

signals:

public slots:

private slots:

private:
    int m_pCameraID;
    QString m_pCameraName;
    QString m_pCameraIconPath;
    QString m_pCameraRTSPLink;
    bool m_pIsChecked;

};

#endif // CAMERAITEM_H
