#include <QCoreApplication>

#include "Example1/simplethread.h"
#include "Example2/asynchronousthread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    // Way one ignore warning
//    SimpleThread*       singleThread = new SimpleThread(&a);
//    singleThread->~SimpleThread();

//    // Way second ignore warning
//    SimpleThread singleThread;

    //AsynchronousThread* asycThread   = new AsynchronousThread(&a);
    //asycThread->~AsynchronousThread();

    AsynchronousThread asycThread;
    return a.exec();
}
