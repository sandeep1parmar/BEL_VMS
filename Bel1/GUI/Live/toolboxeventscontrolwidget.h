#ifndef TOOLBOXEVENTSCONTROLWIDGET_H
#define TOOLBOXEVENTSCONTROLWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QListView>


class ToolBoxEventsControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ToolBoxEventsControlWidget(QWidget *parent = 0);
    ~ToolBoxEventsControlWidget();
signals:

public slots:

private slots:

private:
void creatControlsAndLayout();
QListView *listWidget_events;
QVBoxLayout *l_Vlayout;

};

#endif // TOOLBOXEVENTSCONTROLWIDGET_H
