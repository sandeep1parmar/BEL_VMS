#ifndef CONTROLLER_H
#define CONTROLLER_H

#include"modelsingleton.h"

class Controller
{
    ModelSingleTon *m_pModel;
public:
    Controller(ModelSingleTon* m);
    void updatemodel();
    void insertInModel();
    void removeFromModel();

    //bool login();

    void dataInserted();
    void dataRemoved();
    void dataUpdated();
};

#endif // CONTROLLER_H
