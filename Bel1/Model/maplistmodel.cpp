#include "maplistmodel.h"

MapListModel::MapListModel(QObject *parent) : QAbstractListModel(parent)
{
    m_pMapModelList = new QList<MapItem*>;
}
MapListModel::~MapListModel()
{

}

void MapListModel::setMapItemList(QList<MapItem*> *aList)
{
    beginResetModel();
    m_pMapModelList = aList;
    endResetModel();
    //    reset();
}
void MapListModel::AddMapItem(MapItem *aMapItem)
{
    int first = m_pMapModelList->count();
    int last = first;

    beginInsertRows(QModelIndex(), first, last);
    m_pMapModelList->append(aMapItem);
    endInsertRows();
}

QVariant MapListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_pMapModelList->size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return QVariant(QString("%1").arg((m_pMapModelList->at(index.row()))->getMapName()));
    else
        return QVariant();
}
int MapListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_pMapModelList->size();
}
