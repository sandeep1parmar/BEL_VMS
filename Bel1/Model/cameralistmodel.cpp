#include "cameralistmodel.h"

CameraListModel::CameraListModel(QObject *parent) : QAbstractListModel(parent)
{    
    m_pCameraModelList = new QList<CameraItem*>;
}
CameraListModel::~CameraListModel()
{

}

void CameraListModel::setCameraItemList(QList<CameraItem*> *aList)
{
    beginResetModel();
    m_pCameraModelList = aList;
    endResetModel();
    //    reset();
}
void CameraListModel::AddCameraItem(CameraItem *aCameraItem)
{
    int first = m_pCameraModelList->count();
    int last = first;

    beginInsertRows(QModelIndex(), first, last);
    m_pCameraModelList->append(aCameraItem);
    endInsertRows();
}

QVariant CameraListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_pCameraModelList->size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return QVariant(QString("%1").arg((m_pCameraModelList->at(index.row()))->getCameraName()));
    else
        return QVariant();
}
int CameraListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_pCameraModelList->size();
}
