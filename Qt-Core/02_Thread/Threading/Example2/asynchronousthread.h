#ifndef ASYNCHRONOUSTHREAD_H
#define ASYNCHRONOUSTHREAD_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QTimer>

class AsynchronousThread : public QObject
{
    Q_OBJECT
public:
    explicit AsynchronousThread(QObject *parent = nullptr);
    ~AsynchronousThread();

    void test();
signals:

};

#endif // ASYNCHRONOUSTHREAD_H
