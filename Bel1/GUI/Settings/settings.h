#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QApplication>
#include <QDesktopWidget>
#include <QLabel>
#include "GUI/Settings/Camera/addcameramainwidget.h"

const int WIDTH_MARGIN_SETTINGS = 15; // width margin 25 pixels

typedef enum {
    CameraSettings = 0,
    CameraSettings2,
    CameraSettingsMax
} SettingScreen;

class Settings : public QWidget
{
    Q_OBJECT
public:
    explicit Settings(int aWidth, int aHeight, QWidget *parent = 0);
    ~Settings();

signals:

public slots:

private slots:
void slotAddCameraClicked();

private:
void creatControlsAndLayout();
QStackedWidget *m_pSettingsStackedWidget;
int m_pWidth;
int m_pHight;
AddCameraMainWidget *m_pAddCameraMain;
};

#endif // SETTINGS_H
