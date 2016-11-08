#ifndef EVENTSITEM_H
#define EVENTSITEM_H

#include <QObject>

class EventsItem : public QObject
{
    Q_OBJECT
public:
    explicit EventsItem(QObject *parent = 0);
    ~EventsItem();
    void setEventID(int aEventID);
    void setEventName(QString aEventName);

    int getEventID();
    QString getEventName();

signals:

public slots:

private:
    int m_pEventID;
    QString m_pEventName;
};

#endif // EVENTSITEM_H
