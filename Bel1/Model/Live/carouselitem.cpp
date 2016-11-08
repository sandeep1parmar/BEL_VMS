#include "carouselitem.h"

CarouselItem::CarouselItem(QObject *parent) : QObject(parent)
{
    m_pCarouselID = 0;
    m_pCarouselName = "";
}

CarouselItem::~CarouselItem()
{

}

void CarouselItem::setCarouselID(int aCarouselID)
{
    m_pCarouselID = aCarouselID;
}
void CarouselItem::setCarouselName(QString aCarouselName)
{
    m_pCarouselName = aCarouselName;
}

int CarouselItem::getCarouselID()
{
    return m_pCarouselID;
}
QString CarouselItem::getCarouselName()
{
    return m_pCarouselName;
}

