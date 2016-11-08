/*! \file addcamera.h

\brief A Header file for addCamera.


Auther : Tejas
Date : 10/27/2016
Create header file for add Camera page.

*/
#ifndef ADDCAMERAWIDGET_H
#define ADDCAMERAWIDGET_H

#include <QWidget>
#include <QVBoxLayout>      /*!< Header file for Vertical Layout. */
#include <QHBoxLayout>      /*!< Header file for Horizantal Layout. */
#include <QGridLayout>      /*!< Header file for Grid Layout. */
#include <QLabel>           /*!< Header file for Label. */
#include <QLineEdit>        /*!< Header file for Line Edit. */
#include <QComboBox>        /*!< Header file for Combo Box. */
#include <QTextEdit>        /*!< Header file for Text Edit. */
#include <QPushButton>      /*!< Header file for Push Button. */
#include <QCheckBox>        /*!< Header file for Check Box. */
#include <QListView>      /*!< Header file for List Widget. */
#include <QFrame>           /*!< Header file for Frame. */
#include "modelsingleton.h" /*!< Header file for Model sync. */

//! AddCamera class.

/*!

AddCamera main class which contain class of other widgets.

*/
class AddCameraWidget : public QWidget
{
    Q_OBJECT                            /*!< Main Qt Object for handel Qt features. */

public:
    AddCameraWidget(int aWidth, int aHeight,QWidget *parent = 0);     /*!< Constructor. */
    ~AddCameraWidget();                       /*!< Destructor. */
    void createLayout();                     /*!< sub function to create layout. */

private:


    int m_width;                       /*!< Screen Width. */
    int m_height;                      /*!< Screen Height. */

    /*!< Line Edit class. */
    QLineEdit *ipAdd;
    QLineEdit *cameraName;
    QLineEdit *userName;
    QLineEdit *password;
    QLineEdit *filter1;
    QLineEdit *filter2;

    /*!< Check Box class. */
    QCheckBox *camera;
    QCheckBox *mask;
    QCheckBox *hidden;
    QCheckBox *multiStreaming;
    QCheckBox *present;
    QCheckBox *ptz;
    QCheckBox *ptzTour;

    /*!< Combo Box class. */
    QComboBox *manufacture;
    QComboBox *modelNo;
    QComboBox *cameraGroup;

    /*!< Push Button class. */
    QPushButton *connectCamera;
    QPushButton *addNewGroup;
    QPushButton *next;
    QPushButton *save;
    QPushButton *cancel;

    /*!< List Widget class. */
    QListView *usrGroup1;
    QListView *usrGroup2;

    /*!< Text Edit class. */
    QTextEdit *descri;
};

#endif // ADDCAMERAWIDGET_H
