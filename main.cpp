/**
 * This class is designed to launch the start window which acts as the
 * opening interace of our program.
 **/

#include "startwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    startWindow w;
    w.show();

    return a.exec();
}
