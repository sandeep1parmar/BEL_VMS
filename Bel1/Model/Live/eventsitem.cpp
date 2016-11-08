#include "eventsitem.h"

EventsItem::EventsItem(QObject *parent) : QObject(parent)
{
    m_pEventID = 0;
    m_pEventName = "";
}

EventsItem::~EventsItem()
{

}

void EventsItem::setEventID(int aEventID)
{
    m_pEventID = aEventID;
}
void EventsItem::setEventName(QString aEventName)
{
    m_pEventName = aEventName;
}

int EventsItem::getEventID()
{
    return m_pEventID;
}
QString EventsItem::getEventName()
{
    return m_pEventName;
}
