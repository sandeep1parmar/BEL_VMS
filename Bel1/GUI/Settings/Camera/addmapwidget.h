#ifndef ADDMAPWIDGET_H
#define ADDMAPWIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QApplication>
#include <QDesktopWidget>
#include <QLabel>
#include <QComboBox>
#include <QListView>
#include "modelsingleton.h"

class AddMapWidget : public QWidget
{
    Q_OBJECT
public:
    explicit AddMapWidget(int aWidth, int aHeight,QWidget *parent = 0);
    ~AddMapWidget();

signals:

public slots:

private slots:

private:
    void creatControlsAndLayout();
    int m_pWidth;
    int m_pHight;
    QLabel      *m_pCameraNameVal;
    QComboBox   *m_pMapListComboBox;
    QListView   *m_pListView;
    QLabel      *m_pMapLable;
};

#endif // ADDMAPWIDGET_H
