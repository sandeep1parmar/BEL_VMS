#include "usergroupmodel.h"

UserGroupModel::UserGroupModel(QObject *parent) : QAbstractListModel(parent)
{
    m_pUserGroupModelList = new QList<UserGroupItem*>;
}
UserGroupModel::~UserGroupModel()
{

}

void UserGroupModel::setUserGroupItemList(QList<UserGroupItem*> *aList)
{
    beginResetModel();
    m_pUserGroupModelList = aList;
    endResetModel();
    //    reset();
}
void UserGroupModel::AddUserGroupItem(UserGroupItem *aUserGroupItem)
{
    int first = m_pUserGroupModelList->count();
    int last = first;

    beginInsertRows(QModelIndex(), first, last);
    m_pUserGroupModelList->append(aUserGroupItem);
    endInsertRows();
}

QVariant UserGroupModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_pUserGroupModelList->size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return QVariant(QString("%1").arg((m_pUserGroupModelList->at(index.row()))->getUserGroupName()));
    else
        return QVariant();
}
int UserGroupModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_pUserGroupModelList->size();
}
