#ifndef ADDCAMERAMAINWIDGET_H
#define ADDCAMERAMAINWIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QApplication>
#include <QDesktopWidget>
#include <QLabel>
#include "GUI/Settings/Camera/addmapwidget.h"
#include "GUI/Settings/Camera/addcamerawidget.h"

typedef enum {
    AddCamera = 0,
    AddCameraConfig,
    AddCameraAddMap,
    AddCameraMax
} AddCameraScreens;

class AddCameraMainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit AddCameraMainWidget(int aWidth, int aHeight, QWidget *parent = 0);
    ~AddCameraMainWidget();

signals:

public slots:

private slots:
    void slotNextBtClicked();
    void slotBackBtClicked();

private:
    void creatControlsAndLayout();
    QStackedWidget *m_pCameraMainStackedWidget;
    int m_pWidth;
    int m_pHight;
    AddMapWidget *m_pAddMap;
    AddCameraWidget *m_pAddCamera;
};

#endif // ADDCAMERAMAINWIDGET_H
