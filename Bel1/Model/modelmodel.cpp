#include "Model/modelmodel.h"

ModelModel::ModelModel(QObject *parent) : QAbstractListModel(parent)
{
    m_pModelList = new QList<ModelItem*>;
}
ModelModel::~ModelModel()
{

}

void ModelModel::setModelItemList(QList<ModelItem *> *aList)
{
    beginResetModel();
    m_pModelList = aList;
    endResetModel();
    //    reset();
}
void ModelModel::AddModelItem(ModelItem *aModelItem)
{
    int first = m_pModelList->count();
    int last = first;

    beginInsertRows(QModelIndex(), first, last);
    m_pModelList->append(aModelItem);
    endInsertRows();
}

QVariant ModelModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_pModelList->size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return QVariant(QString("%1").arg((m_pModelList->at(index.row()))->getModelName()));
    else
        return QVariant();
}

int ModelModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_pModelList->size();
}
