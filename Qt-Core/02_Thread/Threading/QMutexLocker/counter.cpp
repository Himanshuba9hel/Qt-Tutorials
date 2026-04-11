#include "counter.h"

Counter::Counter(QMutex* mutex, int* value)
{
    m_mutex = mutex;
    m_value = value;
}


void Counter::run()
{
    /* QMutex Is Like SmartPtr which lock and
     * unlock the mutex accourding to its scope
     * Used this over regular mutex
     */
    QMutexLocker locker(m_mutex);
    /* Other Threads will wait for this thread
     * to complete it's operation */
    //m_mutex->lock();

    // Our Operation on Shared Resources
    QThread::currentThread()->msleep(50);
    *m_value = *m_value+ 1;
    qInfo()<<QThread::currentThread()<<*m_value;

    //m_mutex->unlock();
    /* Now Other Threads can resume it operation on shared resourses */
}

