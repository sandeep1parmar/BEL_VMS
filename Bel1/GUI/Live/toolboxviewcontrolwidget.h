#ifndef TOOLBOXVIEWCONTROLWIDGET_H
#define TOOLBOXVIEWCONTROLWIDGET_H

#include <QWidget>

#include <QLabel>
#include <QVBoxLayout>
#include <QListView>
#include <QPushButton>

class ToolBoxViewControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ToolBoxViewControlWidget(QWidget *parent = 0);
    ~ToolBoxViewControlWidget();
signals:

public slots:

private slots:

private:
void creatControlsAndLayout();
QListView *listViewview;
};

#endif // TOOLBOXVIEWCONTROLWIDGET_H
