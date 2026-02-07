#include "simplethread.h"

SimpleThread::SimpleThread(QObject *parent)
    : QObject{parent}
{
    QThread::currentThread()->setObjectName("Main Thread");
    qInfo()<<"Starting"<<QThread::currentThread();
    test();
    qInfo()<<"Ending"<<QThread::currentThread();
}

void SimpleThread::test()
{
    qInfo()<<"Testing"<<QThread::currentThread();
}

SimpleThread::~SimpleThread()
{

}
