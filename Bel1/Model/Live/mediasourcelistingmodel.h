#ifndef MEDIASOURCELISTINGMODEL_H
#define MEDIASOURCELISTINGMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QAbstractItemModel>
#include "Model/Live/mediasourcelistingitem.h"

class MediaSourceListingModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit MediaSourceListingModel(QObject *parent = 0);
    ~MediaSourceListingModel();

    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;

    QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
    QModelIndex parent(const QModelIndex &index) const;

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;

    Qt::ItemFlags flags(const QModelIndex &index) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
    bool setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role = Qt::EditRole);

    bool insertRows(int position, int rows, const QModelIndex &parent = QModelIndex());
    bool removeRows(int position, int rows, const QModelIndex &parent = QModelIndex());
    void AppendItemtoRoot(MediaSourceListingItem *item);

signals:

public slots:

private slots:

private:
    MediaSourceListingItem *getItem(const QModelIndex &index) const;
    MediaSourceListingItem *rootItem;
};

#endif // MEDIASOURCELISTINGMODEL_H
