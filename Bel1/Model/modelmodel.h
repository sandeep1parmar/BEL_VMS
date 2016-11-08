#ifndef MODELMODEL_H
#define MODELMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QList>
#include "modelitem.h"

class ModelModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ModelModel(QObject *parent = 0);
    ~ModelModel();
    void setModelItemList(QList<ModelItem*> *aList);
    void AddModelItem(ModelItem *aModelItem);
    QVariant data(const QModelIndex &index, int role) const;
    int rowCount(const QModelIndex &parent) const;

signals:

public slots:

private slots:

private:
    QList<ModelItem*>* m_pModelList;
};

#endif // MODELMODEL_H
