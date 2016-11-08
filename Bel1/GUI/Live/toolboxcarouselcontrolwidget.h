#ifndef TOOLBOXCAROUSELCONTROLWIDGET_H
#define TOOLBOXCAROUSELCONTROLWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
#include <QListView>

class ToolBoxCarouselControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ToolBoxCarouselControlWidget(QWidget *parent = 0);
    ~ToolBoxCarouselControlWidget();
signals:

public slots:

private slots:

private:   
void creatControlsAndLayout();
QVBoxLayout *verticalLayout_page_carousel;
QListView *listWidget_carousel;
QPushButton *create_button;
QPushButton *pushbuttonDeleteView;
QWidget *dualPushButtons;
QHBoxLayout *hLayout;
QVBoxLayout *l_Vlayout;
};

#endif // TOOLBOXCAROUSELCONTROLWIDGET_H
