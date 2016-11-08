#ifndef CAROUSELITEM_H
#define CAROUSELITEM_H

#include <QObject>

class CarouselItem : public QObject
{
    Q_OBJECT
public:
    explicit CarouselItem(QObject *parent = 0);
    ~CarouselItem();
    void setCarouselID(int aCameraID);
    void setCarouselName(QString aCameraName);

    int getCarouselID();
    QString getCarouselName();

signals:

public slots:

private:
    int m_pCarouselID;
    QString m_pCarouselName;
};

#endif // CAROUSELITEM_H
