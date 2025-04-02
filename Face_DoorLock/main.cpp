#include "face_doorlock.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Face_DoorLock w;
    w.show();
    return a.exec();
}
