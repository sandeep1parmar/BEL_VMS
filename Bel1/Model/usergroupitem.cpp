#include "usergroupitem.h"

UserGroupItem::UserGroupItem(QObject *parent) : QObject(parent)
{
    m_pUserGroupID = 0;
    m_pUserGroupName = "";
}

UserGroupItem::~UserGroupItem()
{

}
void UserGroupItem::setUserGroupID(int aUserGroupID)
{
    m_pUserGroupID = aUserGroupID;
}
void UserGroupItem::setUserGroupName(QString aUserGroupName)
{
    m_pUserGroupName = aUserGroupName;
}

int UserGroupItem::getUserGroupID()
{
    return m_pUserGroupID;
}
QString UserGroupItem::getUserGroupName()
{
    return m_pUserGroupName;
}
