#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QThread>
#include <QRunnable>
#include <QRandomGenerator>
#include <QDebug>

class Counter : public QRunnable
{
public:
    Counter();

    // QRunnable interface
public:
    void run();
};

#endif // COUNTER_H
