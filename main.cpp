#include "sleeptimer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SleepTimer w; // Créer une instance de la classe SleepTimer
    w.show();

    return a.exec();
}
