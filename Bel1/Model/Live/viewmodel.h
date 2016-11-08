#ifndef VIEWMODEL_H
#define VIEWMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QList>
#include "Model/Live/viewitem.h"

class ViewModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ViewModel(QObject *parent = 0);
    ~ViewModel();
    void setViewList(QList<ViewItem*> *aList);
    void AddView(ViewItem *aView);
    QVariant data(const QModelIndex &index, int role) const;
    int rowCount(const QModelIndex &parent) const;

signals:

public slots:

private:
    QList<ViewItem*>* m_pViewList;
};

#endif // VIEWMODEL_H
