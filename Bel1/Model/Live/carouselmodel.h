#ifndef CAROUSELMODEL_H
#define CAROUSELMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QList>
#include "Model/Live/carouselitem.h"

class CarouselModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit CarouselModel(QObject *parent = 0);
    ~CarouselModel();
    void setCarouselList(QList<CarouselItem*> *aList);
    void AddCarousel(CarouselItem *aCarousel);
    QVariant data(const QModelIndex &index, int role) const;
    int rowCount(const QModelIndex &parent) const;

signals:

public slots:

private:
    QList<CarouselItem*>* m_pCarouselList;
};

#endif // CAROUSELMODEL_H
