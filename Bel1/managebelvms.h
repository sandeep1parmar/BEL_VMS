#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QApplication>
#include <QDesktopWidget>
#include <QLabel>
#include "GUI/Settings/settings.h"
#include "modelsingleton.h"
#include "GUI/Live/live.h"

const int WIDTH_MARGIN = 4; // width margin 25 pixels

typedef enum {
    GUIMainLiveScreen = 0,
    GUIMainPlayBackScreen,
    GUIMainAlarmScreen,
    GUIMainSettingsScreen
} GUIMainScreens;

class ManageBELVMS : public QMainWindow
{
    Q_OBJECT

public:
    static ManageBELVMS* getInstance();
signals:

public slots:

private slots:
    void slotSettingsButtonClicked();    
    void slotLiveButtonClicked();
    void slotPlayBackButtonClicked();
    void slotAlarmButtonClicked();

private:
    ManageBELVMS();
    ~ManageBELVMS();
    static ManageBELVMS* m_pManageBELVMS;
    void creatControlsAndLayout();
    void addWidgetsInStacked();
    QStackedWidget *m_pStackedWidget;
    void setDisplaySize();
    int m_pWidth;
    int m_pHight;
    QWidget* m_pCentralWidget;
    Settings *m_pSettings;
    Live *m_pLiveWidget;
};
//m_pManageBELVMS

#endif // MAINWINDOW_H
