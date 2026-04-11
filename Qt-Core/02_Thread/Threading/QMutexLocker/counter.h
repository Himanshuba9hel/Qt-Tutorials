#ifndef COUNTER_H
#define COUNTER_H

#include <QDebug>
#include <QMutexLocker>
#include <QMutex>
#include <QRunnable>
#include <QThread>

class Counter : public QRunnable
{
public:
    Counter(QMutex* mutex, int* value);

    // QRunnable interface
public:
    void run();
private:
    QMutex* m_mutex;
    int*    m_value;
};

#endif // COUNTER_H
