#ifndef MANUFACTUREITEAM_H
#define MANUFACTUREITEAM_H
#include <QObject>

class ManufacturItem : public QObject
{
    Q_OBJECT
public:
    explicit ManufacturItem(QObject *parent = 0);
    ~ManufacturItem();
    void    setManufacturerID(int aManufacturerID);
    void    setManufacturerName(QString aManufacturerName);
    int     getManufacturerID();
    QString getManufacturerName();

signals:

public slots:

private slots:

private:
    int m_pManufacturerID;
    QString m_pManufacturerName;
};

#endif // MANUFACTUREITEAM_H
