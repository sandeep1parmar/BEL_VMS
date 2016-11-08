#ifndef VIEWITEM_H
#define VIEWITEM_H

#include <QObject>

class ViewItem : public QObject
{
    Q_OBJECT
public:
    explicit ViewItem(QObject *parent = 0);
    ~ViewItem();
    void setViewID(int aViewID);
    void setViewName(QString aViewName);

    int getViewID();
    QString getViewName();

signals:

public slots:

private:
    int m_pViewID;
    QString m_pViewName;
};

#endif // VIEWITEM_H
