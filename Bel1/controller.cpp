#include "controller.h"
#include <unistd.h>

Controller::Controller(ModelSingleTon *m):m_pModel(m)
{    
}
void Controller::updatemodel()
{    
}

void Controller::insertInModel()
{    
}

void Controller::removeFromModel()
{
}

void Controller::dataInserted()
{
    qDebug()<<"Controller:: Data Inserted";
    printf("Controller:: Data Inserted");
}
void Controller::dataRemoved()
{
    qDebug()<<"Controller:: Data Removed";
    printf("Controller:: Data Removed");
}
void Controller::dataUpdated()
{
    qDebug()<<"Controller:: Data Updated";
    printf("Controller:: Data Updated");
}
