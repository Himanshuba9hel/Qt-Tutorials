#include "asynchronousthread.h"

AsynchronousThread::AsynchronousThread(QObject *parent)
    : QObject{parent}
{
    QThread::currentThread()->setObjectName("Main Thread");
    qInfo()<<"Starting"<<QThread::currentThread();
    QTimer timer;
    // timer.setSingleShot(3000,&test); this work in main.cpp
    QTimer::singleShot(3000, this, &AsynchronousThread::test);
    qInfo()<<"Finished"<<QThread::currentThread();
}

void AsynchronousThread::test()
{
    qInfo()<<"Testing"<<QThread::currentThread();
}

AsynchronousThread::~AsynchronousThread()
{

}

