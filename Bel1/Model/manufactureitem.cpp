#include "Model/manufactureitem.h"

ManufacturItem::ManufacturItem(QObject *parent) : QObject(parent)
{
    m_pManufacturerID = 0;
    m_pManufacturerName = "";
}
ManufacturItem::~ManufacturItem()
{

}
void ManufacturItem::setManufacturerID(int aManufacturerID)
{
    m_pManufacturerID = aManufacturerID;
}
void ManufacturItem::setManufacturerName(QString aManufacturerName)
{
    m_pManufacturerName = aManufacturerName;
}

int ManufacturItem::getManufacturerID()
{
    return m_pManufacturerID;
}
QString ManufacturItem::getManufacturerName()
{
    return m_pManufacturerName;
}

