#ifndef SEQUENTIALTHREAD_H
#define SEQUENTIALTHREAD_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QTimer>
#include "test.h"

class SequentialThread : public QObject
{
    Q_OBJECT
public:
    explicit SequentialThread(QObject *parent = nullptr);

public slots:
    void run();

private slots:
    void timeout();

private:
    QTimer m_timer;
    QThread* worker;

signals:

};

#endif // SEQUENTIALTHREAD_H
