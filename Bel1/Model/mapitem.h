#ifndef MAPITEM_H
#define MAPITEM_H

#include <QObject>

class MapItem : public QObject
{
    Q_OBJECT
public:
    explicit MapItem(QObject *parent = 0);
    ~MapItem();
    void setMapID(int aMapID);
    void setMapName(QString aMapName);
    void setMapImagePath(QString aMapImagePath);
    int getMapID();
    QString getMapName();
    QString getMapImagePath();

signals:

public slots:

private slots:

private:
    int m_pMapID;
    QString m_pMapName;
    QString m_pImagePath;
};

#endif // MAPITEM_H
