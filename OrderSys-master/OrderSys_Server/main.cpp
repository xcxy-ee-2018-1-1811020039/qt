#include "widget.h"

#include <QApplication>
User user;
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
