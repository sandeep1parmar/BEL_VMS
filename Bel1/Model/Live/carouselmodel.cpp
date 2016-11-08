#include "carouselmodel.h"

CarouselModel::CarouselModel(QObject *parent) : QAbstractListModel(parent)
{
    m_pCarouselList = new QList<CarouselItem*>;
}

CarouselModel::~CarouselModel()
{

}

void CarouselModel::setCarouselList(QList<CarouselItem*> *aList)
{
    beginResetModel();
    m_pCarouselList = aList;
    endResetModel();
    //    reset();
}
void CarouselModel::AddCarousel(CarouselItem *aCarouselItem)
{
    int first = m_pCarouselList->count();
    int last = first;

    beginInsertRows(QModelIndex(), first, last);
    m_pCarouselList->append(aCarouselItem);
    endInsertRows();
}

QVariant CarouselModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_pCarouselList->size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return QVariant(QString("%1").arg((m_pCarouselList->at(index.row()))->getCarouselName()));
    else
        return QVariant();
}
int CarouselModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_pCarouselList->size();
}
