#include <QCoreApplication>

#include "Example1/simplethread.h"
#include "Example2/asynchronousthread.h"
#include "Example3/sequentialthread.h"
#include "Example3/test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

/*--------------------- Example 1 START ---------------------*/
//    // Way one ignore warning
//    SimpleThread*       singleThread = new SimpleThread(&a);
//    singleThread->~SimpleThread();

//    // Way second ignore warning
//    SimpleThread singleThread;
/*--------------------- Example 1 END   ---------------------*/


/*--------------------- Example 2 START ---------------------*/
    //AsynchronousThread* asycThread   = new AsynchronousThread(&a);
    //asycThread->~AsynchronousThread();

    //AsynchronousThread asycThread;
/*--------------------- Example 2 END   ---------------------*/


/*--------------------- Example 3 START ---------------------*/

/*--------------------- Part I START    ---------------------*/

//    QThread::currentThread()->setObjectName("Main Thread");
//    qInfo()<<"Starting"<<QThread::currentThread();

//    QThread worker;
//    worker.setObjectName("Worker Thread");

//    Test test;
//    test.moveToThread(&worker);
//    QObject::connect(&worker,&QThread::started,&test,&Test::run);
//    worker.start();

//    qInfo()<<"Finished"<<QThread::currentThread();

/*--------------------- Part I END      ---------------------*/

/*--------------------- Part II START   ---------------------*/

//    QThread::currentThread()->setObjectName("Main Thread");
//    qInfo()<<"Starting"<<QThread::currentThread();

//    QThread *master = new QThread(&a);
//    SequentialThread *seq = new SequentialThread;
//    seq->moveToThread(master);
//    QObject::connect(master, &QThread::started,
//                     seq, &SequentialThread::run);
//    QObject::connect(master, &QThread::finished,
//                     seq, &QObject::deleteLater);
//    master->start();

//    qInfo()<<"Finished"<<QThread::currentThread();

/*--------------------- Part II END     ---------------------*/

/*--------------------- Example 3 END   ---------------------*/


    return a.exec();
}
