#ifndef USERGROUPMODEL_H
#define USERGROUPMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QList>
#include "Model/usergroupitem.h"

class UserGroupModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit UserGroupModel(QObject *parent = 0);
    ~UserGroupModel();
    void setUserGroupItemList(QList<UserGroupItem*> *aList);
    void AddUserGroupItem(UserGroupItem *aUserGroupItem);
    QVariant data(const QModelIndex &index, int role) const;
    int rowCount(const QModelIndex &parent) const;

signals:

public slots:

private slots:

private:
    QList<UserGroupItem*>* m_pUserGroupModelList;
};

#endif // USERGROUPMODEL_H
