#include "Model/modelitem.h"

ModelItem::ModelItem(QObject *parent) : QObject(parent)
{
    m_pModelID = 0;
    m_pModelName = "";
}
ModelItem::~ModelItem()
{

}
void ModelItem::setModelID(int aModelID)
{
    m_pModelID = aModelID;
}
void ModelItem::setModelName(QString aModelName)
{
    m_pModelName = aModelName;
}

int ModelItem::getModelID()
{
    return m_pModelID;
}
QString ModelItem::getModelName()
{
    return m_pModelName;
}
