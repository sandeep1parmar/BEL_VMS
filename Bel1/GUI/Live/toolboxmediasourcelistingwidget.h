#ifndef TOOLBOXMEDIASOURCELISTINGWIDGET_H
#define TOOLBOXMEDIASOURCELISTINGWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QTreeView>
#include "modelsingleton.h"

class ToolBoxMediaSourceListingWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ToolBoxMediaSourceListingWidget(QWidget *parent = 0);
    ~ToolBoxMediaSourceListingWidget();
signals:

public slots:

private slots:

private:
void creatControlsAndLayout();

QTreeView *m_pMediaSourceTreeView;

};

#endif // TOOLBOXMEDIASOURCELISTINGWIDGET_H
