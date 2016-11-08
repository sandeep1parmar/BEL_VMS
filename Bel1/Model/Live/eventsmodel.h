#ifndef EVENTSMODEL_H
#define EVENTSMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QList>
#include "Model/Live/eventsitem.h"

class EventsModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit EventsModel(QObject *parent = 0);
    ~EventsModel();
    void setEventList(QList<EventsItem*> *aList);
    void AddEvent(EventsItem *aEvent);
    QVariant data(const QModelIndex &index, int role) const;
    int rowCount(const QModelIndex &parent) const;

signals:

public slots:

private:
    QList<EventsItem*>* m_pEventList;
};

#endif // EVENTSMODEL_H
