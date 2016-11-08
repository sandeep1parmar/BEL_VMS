#ifndef TOOLBOXMAPCONTROLWIDGET_H
#define TOOLBOXMAPCONTROLWIDGET_H

#include <QWidget>

#include <QLabel>
#include <QVBoxLayout>
#include <QListView>
#include <QPushButton>
#include"modelsingleton.h"

class ToolBoxMapControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ToolBoxMapControlWidget(QWidget *parent = 0);
    ~ToolBoxMapControlWidget();
signals:

public slots:

private slots:

private:
void creatControlsAndLayout();
QListView *listViewMapControl;
};

#endif // TOOLBOXMAPCONTROLWIDGET_H
