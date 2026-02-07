#ifndef SIMPLETHREAD_H
#define SIMPLETHREAD_H

#include <QObject>
#include <QThread>
#include <QDebug>

class SimpleThread : public QObject
{
    Q_OBJECT
public:
    explicit SimpleThread(QObject *parent = nullptr);
    void test();
    ~SimpleThread();
signals:

};

#endif // SIMPLETHREAD_H
