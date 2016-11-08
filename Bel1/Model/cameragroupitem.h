#ifndef CAMERAGROUPITEAM_H
#define CAMERAGROUPITEAM_H
#include <QObject>

class CameraGroupItem : public QObject
{
    Q_OBJECT
public:
    explicit CameraGroupItem(QObject *parent = 0);
    ~CameraGroupItem();
    void    setCameraGroupID(int aCameraGroupID);
    void    setCameraGroupName(QString aCameraGroupName);
    int     getCameraGroupID();
    QString getCameraGroupName();

signals:

public slots:

private slots:

private:
    int m_pCameraGroupID;
    QString m_pCameraGroupName;
};

#endif // CAMERAGROUPITEAM_H
