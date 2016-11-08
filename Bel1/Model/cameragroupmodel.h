#ifndef CAMERAGROUPMODEL_H
#define CAMERAGROUPMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QList>
#include "cameragroupitem.h"

class CameraGroupModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit CameraGroupModel(QObject *parent = 0);
    ~CameraGroupModel();
    void setCameraGroupItemList(QList<CameraGroupItem*> *aList);
    void AddCameraGroupItem(CameraGroupItem *aCameraGroupItem);
    QVariant data(const QModelIndex &index, int role) const;
    int rowCount(const QModelIndex &parent) const;

signals:

public slots:

private slots:

private:
    QList<CameraGroupItem*>* m_pCameraGroupList;
};

#endif // CAMERAGROUPMODEL_H
