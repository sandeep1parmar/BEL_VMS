#include "Model/cameragroupmodel.h"

CameraGroupModel::CameraGroupModel(QObject *parent) : QAbstractListModel(parent)
{
    m_pCameraGroupList = new QList<CameraGroupItem*>;
}

CameraGroupModel::~CameraGroupModel()
{

}

void CameraGroupModel::setCameraGroupItemList(QList<CameraGroupItem *> *aList)
{
    beginResetModel();
    m_pCameraGroupList = aList;
    endResetModel();
    //    reset();
}
void CameraGroupModel::AddCameraGroupItem(CameraGroupItem *aCameraGroupItem)
{
    int first = m_pCameraGroupList->count();
    int last = first;

    beginInsertRows(QModelIndex(), first, last);
    m_pCameraGroupList->append(aCameraGroupItem);
    endInsertRows();
}

QVariant CameraGroupModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_pCameraGroupList->size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return QVariant(QString("%1").arg((m_pCameraGroupList->at(index.row()))->getCameraGroupName()));
    else
        return QVariant();
}

int CameraGroupModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_pCameraGroupList->size();
}
