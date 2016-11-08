#include "Model/manufacturemodel.h"

ManufacturModel::ManufacturModel(QObject *parent) : QAbstractListModel(parent)
{
    m_pManufacturModelList = new QList<ManufacturItem*>;
}
ManufacturModel::~ManufacturModel()
{

}

void ManufacturModel::setManufacturItemList(QList<ManufacturItem *> *aList)
{
    beginResetModel();
    m_pManufacturModelList = aList;
    endResetModel();
    //    reset();
}
void ManufacturModel::AddManufacturItem(ManufacturItem *aManufacturItem)
{
    int first = m_pManufacturModelList->count();
    int last = first;

    beginInsertRows(QModelIndex(), first, last);
    m_pManufacturModelList->append(aManufacturItem);
    endInsertRows();
}

QVariant ManufacturModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_pManufacturModelList->size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return QVariant(QString("%1").arg((m_pManufacturModelList->at(index.row()))->getManufacturerName()));
    else
        return QVariant();
}
int ManufacturModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_pManufacturModelList->size();
}
