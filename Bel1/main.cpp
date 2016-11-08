#include "managebelvms.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ManageBELVMS *w = ManageBELVMS::getInstance();
    w->showMaximized();

    return a.exec();
}
