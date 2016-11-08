#include "eventsmodel.h"

EventsModel::EventsModel(QObject *parent) : QAbstractListModel(parent)
{
    m_pEventList = new QList<EventsItem*>;
}

EventsModel::~EventsModel()
{

}

void EventsModel::setEventList(QList<EventsItem*> *aList)
{
    beginResetModel();
    m_pEventList = aList;
    endResetModel();
    //    reset();
}
void EventsModel::AddEvent(EventsItem *aEventsItem)
{
    int first = m_pEventList->count();
    int last = first;

    beginInsertRows(QModelIndex(), first, last);
    m_pEventList->append(aEventsItem);
    endInsertRows();
}

QVariant EventsModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_pEventList->size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return QVariant(QString("%1").arg((m_pEventList->at(index.row()))->getEventName()));
    else
        return QVariant();
}
int EventsModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_pEventList->size();
}
