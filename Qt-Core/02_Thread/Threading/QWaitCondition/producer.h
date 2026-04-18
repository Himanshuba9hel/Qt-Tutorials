#ifndef PRODUCER_H
#define PRODUCER_H

#include <QObject>
#include <QMutex>
#include <QWaitCondition>
#include <QThread>
#include <QRandomGenerator>
#include <QDebug>

class Producer : public QObject
{
    Q_OBJECT
public:
    explicit Producer(QMutex *mutex,QWaitCondition *valueReady,int *value,QObject *parent = nullptr);

signals:

public slots:
    void run();
private:
    QMutex         *m_mutex;
    QWaitCondition *m_valueReady;
    int            *m_value;
};

#endif // PRODUCER_H
