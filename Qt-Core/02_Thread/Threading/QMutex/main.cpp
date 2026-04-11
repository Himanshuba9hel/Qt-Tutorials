#include <QCoreApplication>
#include <QDebug>
#include <QThread>
#include <QThreadPool>
#include <QMutex>
#include "counter.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QThread::currentThread()->setObjectName("Main");
    QThreadPool* pool = QThreadPool::globalInstance();

    QMutex mutex;
    int value = 0;
    qInfo()<<"Threads: "<<pool->maxThreadCount();

    for(int i = 0; i < 100; i++)
    {
        Counter* counter = new Counter(&mutex,&value);
        counter->setAutoDelete(true);
        pool->start(counter);
    }
    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.

    return a.exec();
}
