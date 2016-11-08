#ifndef CAMERALISTMODEL_H
#define CAMERALISTMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QList>
#include "Model/cameraitem.h"

class CameraListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit CameraListModel(QObject *parent = 0);
    ~CameraListModel();
    void setCameraItemList(QList<CameraItem*> *aList);
    void AddCameraItem(CameraItem *aCameraItem);
    QVariant data(const QModelIndex &index, int role) const;
    int rowCount(const QModelIndex &parent) const;

signals:

public slots:

private slots:

private:
    QList<CameraItem*>* m_pCameraModelList;
};

#endif // CAMERALISTMODEL_H
