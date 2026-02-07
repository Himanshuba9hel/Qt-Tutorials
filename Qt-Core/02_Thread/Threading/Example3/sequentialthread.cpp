#include "sequentialthread.h"

SequentialThread::SequentialThread(QObject *parent)
    : QObject{parent}
{

}

void SequentialThread::run()
{
    QThread::currentThread()->setObjectName("Master Thread");
    qInfo() << "Running" << QThread::currentThread();
    worker = new QThread(this);
    worker->setObjectName("Worker Thread");
    Test *test = new Test;
    test->moveToThread(worker);
    connect(worker, &QThread::started,
            test, &Test::run);
    connect(worker, &QThread::finished,
            test, &QObject::deleteLater);
    connect(worker, &QThread::finished,
            worker, &QObject::deleteLater);
    worker->start();

    qInfo() << "Finished" << QThread::currentThread();
}

void SequentialThread::timeout()
{
    qInfo()<<"Timeout"<<QThread::currentThread();
}
