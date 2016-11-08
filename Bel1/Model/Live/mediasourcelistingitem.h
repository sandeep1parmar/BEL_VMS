#ifndef MEDIASOURCELISTINGITEM_H
#define MEDIASOURCELISTINGITEM_H

#include <QObject>
#include "Model/cameraitem.h"

class MediaSourceListingItem
{
public:
    explicit MediaSourceListingItem(const QString data, MediaSourceListingItem *parent = 0);
    ~MediaSourceListingItem();
    MediaSourceListingItem *child(int number);
    int childCount() const;
    int columnCount() const;
    QVariant data() const;
    bool insertChildren(int position, int count, int columns);
    bool insertChildren(MediaSourceListingItem *item);
    MediaSourceListingItem *parent();
    bool removeChildren(int position, int count);
    int childNumber() const;
    bool setData(const QString &value);
    bool isCheckable();
    void setCheckable(bool achackable);
    bool isChecked();
    void setChecked(bool achackable);
    void setCameraItem(CameraItem *aCamera);
    CameraItem* getCameraItem();

private:
    QList<MediaSourceListingItem*> childItems;
    QString itemData;
    MediaSourceListingItem *parentItem;
    bool isChackable;
    bool isChacked;
    CameraItem *m_pCameraItem;
};

#endif // MEDIASOURCELISTINGITEM_H
