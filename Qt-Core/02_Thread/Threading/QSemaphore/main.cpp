#include <QCoreApplication>
#include <QThread>
#include <QSemaphore>

#include "workers.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> values;
    for(int i= 0; i <10; i++){
        values.append(0);
    }
    qInfo()<<"values: "<<values;
    QSemaphore sema(values.size());

    QThread thread1, thread2;
    thread1.setObjectName("Thread 1");
    thread2.setObjectName("Thread 2");

    Workers worker1(&sema,&values);
    Workers worker2(&sema,&values);

    worker1.moveToThread(&thread1);
    worker2.moveToThread(&thread2);

    QObject::connect(&thread1,&QThread::started,&worker1,&Workers::run);
    QObject::connect(&thread2,&QThread::started,&worker2,&Workers::run);

    thread1.start();
    thread2.start();
    return a.exec();
}
