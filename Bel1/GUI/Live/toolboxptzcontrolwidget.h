#ifndef TOOLBOXPTZCONTROLWIDGET_H
#define TOOLBOXPTZCONTROLWIDGET_H

#include <QWidget>

#include <QLabel>
#include <QVBoxLayout>
#include <QListView>
#include <QPushButton>
#include <QComboBox>
#include <QApplication>
#include <QString>

class ToolBoxPTZControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ToolBoxPTZControlWidget(int aWidth, int aHeight, QWidget *parent = 0);
    ~ToolBoxPTZControlWidget();
signals:

public slots:

private slots:

private:
    void creatControlsAndLayout();
    QVBoxLayout *l_Vlayout;
    int m_pHeight;
    int m_pWidth;
    int icon_height;
    int icon_width;
};

#endif // TOOLBOXPTZCONTROLWIDGET_H
