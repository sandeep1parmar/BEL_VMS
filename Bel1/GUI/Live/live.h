#ifndef LIVE_H
#define LIVE_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QApplication>
#include <QDesktopWidget>
#include <QLabel>
#include <QToolBox>
#include "GUI/Live/toolboxmediasourcelistingwidget.h"
#include "GUI/Live/toolboxmapcontrolwidget.h"
#include "GUI/Live/toolboxptzcontrolwidget.h"
#include "GUI/Live/toolboxlayoutcontrolwidget.h"
#include "GUI/Live/toolboxviewcontrolwidget.h"
#include "GUI/Live/toolboxeventscontrolwidget.h"
#include "GUI/Live/toolboxcarouselcontrolwidget.h"
#include "GUI/Live/onexone.h"
#include "GUI/Live/twoxtwo.h"
#include "GUI/Live/threexthree.h"
#include "GUI/Live/fourxfour.h"

class Live : public QWidget
{
    Q_OBJECT
public:
    explicit Live(int aWidth, int aHeight, QWidget *parent = 0);
    ~Live();

signals:

public slots:

private slots:
    void slotChangeLayout(int index);

private:
void creatControlsAndLayout();
void creatToolBox();
int m_pWidth;
int m_pHight;
QToolBox *m_pToolBox;
QStackedWidget *m_pLiveViewStackedWidget;
ToolBoxMediaSourceListingWidget *m_pTBMediaSourceWidget;
ToolBoxMapControlWidget         *m_pTBMapControlWidget;
ToolBoxPTZControlWidget         *m_pTBPTZControlWidget;
ToolBoxLayoutControlWidget      *m_pTBLayoutControlWidget;
ToolBoxViewControlWidget        *m_pTBViewControlWidget;
ToolBoxEventsControlWidget      *m_pTBEventsControlWidget;
ToolBoxCarouselControlWidget    *m_pTBCarouselControlWidget;
OneXOne                         *m_pOneXOne;
TwoXTwo                         *m_pTwoXTwo;
ThreeXThree                     *m_pThreeXThree;
FourXFour                       *m_pFourXFour;
};

#endif // LIVE_H
