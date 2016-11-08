#ifndef MANUFACTUREMODEL_H
#define MANUFACTUREMODEL_H
#include <QObject>
#include <QAbstractListModel>
#include <QList>
#include "manufactureitem.h"

class ManufacturModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ManufacturModel(QObject *parent = 0);
    ~ManufacturModel();
    void setManufacturItemList(QList<ManufacturItem*> *aList);
    void AddManufacturItem(ManufacturItem *aManufacturItem);
    QVariant data(const QModelIndex &index, int role) const;
    int rowCount(const QModelIndex &parent) const;

signals:

public slots:

private slots:

private:
    QList<ManufacturItem*>* m_pManufacturModelList;
};

#endif // MANUFACTUREMODEL_H
