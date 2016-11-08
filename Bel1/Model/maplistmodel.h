#ifndef MAPLISTMODEL_H
#define MAPLISTMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QList>
#include "Model/mapitem.h"

class MapListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit MapListModel(QObject *parent = 0);
    ~MapListModel();
    void setMapItemList(QList<MapItem*> *aList);
    void AddMapItem(MapItem *aMapItem);
    QVariant data(const QModelIndex &index, int role) const;
    int rowCount(const QModelIndex &parent) const;

signals:

public slots:

private slots:

private:
    QList<MapItem*>* m_pMapModelList;
};

#endif // MAPLISTMODEL_H
