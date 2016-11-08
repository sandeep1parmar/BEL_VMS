#include "mediasourcelistingitem.h"
#include <QDebug>
MediaSourceListingItem::MediaSourceListingItem(const QString data, MediaSourceListingItem *parent)
{
    m_pCameraItem = new CameraItem();
    parentItem = parent;
    itemData = data;
    isChackable = false;
    isChacked = true;
}

MediaSourceListingItem::~MediaSourceListingItem()
{
    qDeleteAll(childItems);
}


MediaSourceListingItem *MediaSourceListingItem::child(int number)
{
    return childItems.at(number);
}

int MediaSourceListingItem::childCount() const
{
    return childItems.count();
}

int MediaSourceListingItem::childNumber() const
{
    if (parentItem)
        return parentItem->childItems.indexOf(const_cast<MediaSourceListingItem*>(this));

    return 0;
}

int MediaSourceListingItem::columnCount() const
{
    return 1;
}

QVariant MediaSourceListingItem::data() const
{
    return itemData;
}

bool MediaSourceListingItem::insertChildren(int position, int count, int columns)
{
    Q_UNUSED(columns);
    if (position < 0 || position > childItems.size())
        return false;

    for (int row = 0; row < count; ++row) {
        QString data;
        MediaSourceListingItem *item = new MediaSourceListingItem(data, this);
        childItems.insert(position, item);
    }

    return true;
}

bool MediaSourceListingItem::insertChildren(MediaSourceListingItem *item)
{
    childItems.append(item);
    return true;
}

MediaSourceListingItem *MediaSourceListingItem::parent()
{
    return parentItem;
}

bool MediaSourceListingItem::removeChildren(int position, int count)
{
    if (position < 0 || position + count > childItems.size())
        return false;

    for (int row = 0; row < count; ++row)
        delete childItems.takeAt(position);

    return true;
}


bool MediaSourceListingItem::setData(const QString &value)
{
    itemData = value;
    return true;
}

bool MediaSourceListingItem::isCheckable()
{
    return isChackable;
}
void MediaSourceListingItem::setCheckable(bool achackable)
{
    isChackable = achackable;
}
bool MediaSourceListingItem::isChecked()
{
    return isChacked;
}
void MediaSourceListingItem::setChecked(bool achackable)
{
    isChacked = achackable;
}

void MediaSourceListingItem::setCameraItem(CameraItem *aCamera)
{
    m_pCameraItem = aCamera;
}

CameraItem* MediaSourceListingItem::getCameraItem()
{
    return m_pCameraItem;
}

