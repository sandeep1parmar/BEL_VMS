#ifndef MODELITEAM_H
#define MODELITEAM_H
#include <QObject>

class ModelItem : public QObject
{
    Q_OBJECT
public:
    explicit ModelItem(QObject *parent = 0);
    ~ModelItem();
    void    setModelID(int aModelID);
    void    setModelName(QString aModelName);
    int     getModelID();
    QString getModelName();

signals:

public slots:

private slots:

private:
    int m_pModelID;
    QString m_pModelName;
};

#endif // MODELITEAM_H
