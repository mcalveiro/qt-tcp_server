#include "networkplot.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    networkplot w;
    w.show();
    return a.exec();
}
