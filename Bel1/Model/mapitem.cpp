#include "mapitem.h"

MapItem::MapItem(QObject *parent) : QObject(parent)
{
    m_pMapID = 0;
    m_pMapName = "";
    m_pImagePath = "";
}
MapItem::~MapItem()
{

}
void MapItem::setMapID(int aMapID)
{
    m_pMapID = aMapID;
}
void MapItem::setMapName(QString aMapName)
{
    m_pMapName = aMapName;
}
void MapItem::setMapImagePath(QString aMapImagePath)
{
    m_pImagePath = aMapImagePath;
}
int MapItem::getMapID()
{
    return m_pMapID;
}
QString MapItem::getMapName()
{
    return m_pMapName;
}
QString MapItem::getMapImagePath()
{
    return m_pImagePath;
}
