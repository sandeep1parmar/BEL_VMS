#ifndef TOOLBOXLAYOUTCONTROLWIDGET_H
#define TOOLBOXLAYOUTCONTROLWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QListView>
#include <QPushButton>

class ToolBoxLayoutControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ToolBoxLayoutControlWidget(int aWidth, int aHeight, QWidget *parent = 0);
    ~ToolBoxLayoutControlWidget();
signals:
    void sigLayoutButtonPressed(int abtindex);
public slots:

private slots:
    void slot1x1clicked();
    void slot2x2clicked();
    void slot3x3clicked();
    void slot4x4clicked();
private:
void creatControlsAndLayout();
QPushButton *pushButton_1x1;
QPushButton *pushButton_2x2;
QPushButton *pushButton_4x4;
QPushButton *pushButton_5x5;
QPushButton *pushButton_3x3_one;
QPushButton *pushButton_4x4_one;
QPushButton *pushButton_2x2_left;
QPushButton *pushButton_3x3;
QPushButton *pushButton_2x2_top;
QPushButton *pushButton_aspect_ratio;
QGridLayout *gridLayout;
QVBoxLayout *l_Vlayout;

int m_pHeight;
int m_pWidth;
int icon_height;
int icon_width;

};

#endif // TOOLBOXLAYOUTCONTROLWIDGET_H
