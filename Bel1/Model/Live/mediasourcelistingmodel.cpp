#include "mediasourcelistingmodel.h"
#include <QDebug>

MediaSourceListingModel::MediaSourceListingModel(QObject *parent) : QAbstractItemModel(parent)
{
    rootItem = new MediaSourceListingItem("");
}

MediaSourceListingModel::~MediaSourceListingModel()
{
    delete rootItem;
}

int MediaSourceListingModel::columnCount(const QModelIndex &) const
{
    return rootItem->columnCount();
}

QVariant MediaSourceListingModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (role != Qt::DisplayRole && role != Qt::EditRole && role != Qt::CheckStateRole)
        return QVariant();

    MediaSourceListingItem *item = getItem(index);

    if ( role == Qt::CheckStateRole && item->isCheckable())
    {
        Qt::CheckState eChkState = ( item->isChecked()) ? Qt::Checked : Qt::Unchecked;
        return eChkState;
    }
    else if (role == Qt::CheckStateRole && !item->isCheckable())
    {
        return QVariant();
    }

    return item->data();
}

Qt::ItemFlags MediaSourceListingModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return 0;

    Qt::ItemFlags flags = Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;

    MediaSourceListingItem *item = getItem(index);

    if(item->isCheckable())
    {
        flags |= Qt::ItemIsUserCheckable;
    }
    return flags;
}

MediaSourceListingItem *MediaSourceListingModel::getItem(const QModelIndex &index) const
{
    if (index.isValid()) {
        MediaSourceListingItem *item = static_cast<MediaSourceListingItem*>(index.internalPointer());
        if (item) return item;
    }
    return rootItem;
}

QVariant MediaSourceListingModel::headerData(int section, Qt::Orientation orientation,
                                             int role) const
{
    Q_UNUSED(section);
    if (orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return rootItem->data();

    return QVariant();
}

QModelIndex MediaSourceListingModel::index(int row, int column, const QModelIndex &parent) const
{
    if (parent.isValid() && parent.column() != 0)
        return QModelIndex();

    MediaSourceListingItem *parentItem = getItem(parent);

    MediaSourceListingItem *childItem = parentItem->child(row);
    if (childItem)
        return createIndex(row, column, childItem);
    else
        return QModelIndex();
}

void MediaSourceListingModel::AppendItemtoRoot(MediaSourceListingItem *item)
{
    QModelIndex index = QModelIndex();

    if (!insertRow(index.row()+1, index.parent()))
        return;

    QModelIndex child = this->index(index.row()+1, 0, index.parent());
    setData(child, item->data(), Qt::EditRole);

    if(item->childCount() > 0)
    {
        for(int i = 0 ; i < item->childCount();i++)
        {
            insertRow(i, child);
            QModelIndex childa= this->index(i, 0, child);

            setData(childa, item->child(i)->data(), Qt::EditRole);
            if(item->child(i)->isCheckable())
            {
                MediaSourceListingItem *temp = getItem(childa);
                temp->setCheckable(item->child(i)->isCheckable());
                temp->setChecked(item->child(i)->isChecked());
                if(item->child(i)->isChecked())
                {
                    setData(childa, Qt::Checked, Qt::CheckStateRole);
                }
                else
                {
                    setData(childa, Qt::Unchecked, Qt::CheckStateRole);
                }
            }
        }
    }
}

bool MediaSourceListingModel::insertRows(int position, int rows, const QModelIndex &parent)
{
    MediaSourceListingItem *parentItem = getItem(parent);
    bool success;

    beginInsertRows(parent, position, position + rows - 1);
    success = parentItem->insertChildren(position, rows, rootItem->columnCount());
    endInsertRows();

    return success;
}

QModelIndex MediaSourceListingModel::parent(const QModelIndex &index) const
{
    if (!index.isValid())
        return QModelIndex();

    MediaSourceListingItem *childItem = getItem(index);
    MediaSourceListingItem *parentItem = childItem->parent();

    if (parentItem == rootItem)
        return QModelIndex();

    return createIndex(parentItem->childNumber(), 0, parentItem);
}


bool MediaSourceListingModel::removeRows(int position, int rows, const QModelIndex &parent)
{
    MediaSourceListingItem *parentItem = getItem(parent);
    bool success = true;

    beginRemoveRows(parent, position, position + rows - 1);
    success = parentItem->removeChildren(position, rows);
    endRemoveRows();

    return success;
}

int MediaSourceListingModel::rowCount(const QModelIndex &parent) const
{
    MediaSourceListingItem *parentItem = getItem(parent);

    return parentItem->childCount();
}

bool MediaSourceListingModel::setData(const QModelIndex &index, const QVariant &value,
                                      int role)
{

    if (role != Qt::EditRole && role != Qt::CheckStateRole )
        return false;

    MediaSourceListingItem *item = getItem(index);
    bool result;
    if ( role == Qt::CheckStateRole && item->isCheckable() )
    {
        if(Qt::Checked == value)
        {
            item->setChecked(true);
        }
        else
        {
            item->setChecked(false);
        }
        result = true;
    }
    else if (role == Qt::CheckStateRole && !item->isCheckable() )
    {
        result = false;
    }
    else
    {
        result = item->setData(value.toString());
    }
    if (result)
        emit dataChanged(index, index);
    return result;
}

bool MediaSourceListingModel::setHeaderData(int section, Qt::Orientation orientation,
                              const QVariant &value, int role)
{
    if (role != Qt::EditRole || orientation != Qt::Horizontal)
        return false;

    bool result = rootItem->setData(value.toString());

    if (result)
        emit headerDataChanged(orientation, section, section);

    return result;
}


