#ifndef USERGROUPITEAM_H
#define USERGROUPITEAM_H

#include <QObject>

class UserGroupItem : public QObject
{
    Q_OBJECT
public:
    explicit UserGroupItem(QObject *parent = 0);
    ~UserGroupItem();
    void setUserGroupID(int aUserGroupID);
    void setUserGroupName(QString aUserGroupName);
    int getUserGroupID();
    QString getUserGroupName();

signals:

public slots:

private slots:

private:
    int m_pUserGroupID;
    QString m_pUserGroupName;
};

#endif // USERGROUPITEAM_H
