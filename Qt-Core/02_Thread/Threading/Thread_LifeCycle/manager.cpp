#include "manager.h"

Manager::Manager(QObject *parent)
    : QObject{parent}
{
    for(int i = 0; i < 5; i++){
        QThread *thread = new QThread(this);
        thread->setObjectName("Thread" + QString::number(i));
        qInfo()<<"Created: "<<thread->objectName();
        connect(thread,&QThread::started,this,&Manager::started);
        connect(thread,&QThread::finished,this,&Manager::finished);
        threads.append(thread);
    }
}

void Manager::start()
{
    qInfo()<<"Starting...";
    foreach (QThread* thread, threads) {
        qInfo()<<"Started: "<<thread->objectName();
        Counter* counter = new Counter(); // RAW Pointer!!!
        counter->moveToThread(thread);
        connect(thread,&QThread::started,counter,&Counter::start);
        thread->start();
        /*
         * QObject::moveToThread: Cannot move objects `with a parent
         *`
         * qInfo()<<"Started: "<<th`read->objectName();
         * Counter* c = new Counter(this);
         * c->moveToThread(thread);
         *
         */
    }
}

void Manager::started()
{
    qInfo() << "Starting" << sender();
    QThread* thread = qobject_cast<QThread*>(sender());
    if(!thread) return;
    qInfo() << "Started: " << thread->objectName();
}

void Manager::finished()
{
    qInfo() << "Finishing" << sender();
    QThread* thread = qobject_cast<QThread*>(sender());
    if(!thread) return;
    qInfo() << "Children" << thread->children().length();
    qInfo() << "Finished: " << thread->objectName();

    threads.removeAll(thread);// To Delete Dangaling Pointer
    delete thread;            //
}
