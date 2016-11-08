#include "viewitem.h"

ViewItem::ViewItem(QObject *parent) : QObject(parent)
{
    m_pViewID = 0;
    m_pViewName = "";
}

ViewItem::~ViewItem()
{

}

void ViewItem::setViewID(int aViewID)
{
    m_pViewID = aViewID;
}
void ViewItem::setViewName(QString aViewName)
{
    m_pViewName = aViewName;
}

int ViewItem::getViewID()
{
    return m_pViewID;
}
QString ViewItem::getViewName()
{
    return m_pViewName;
}
