#include <QCoreApplication>

#include "Example1/simplethread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SimpleThread* singleThread = new SimpleThread;
    singleThread->~SimpleThread();

    return a.exec();
}
