#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QThread>
#include <QRandomGenerator>
#include <QDebug>

class Counter : public QObject
{
    Q_OBJECT
public:
    explicit Counter(QObject *parent = nullptr);
    ~Counter();
signals:

public slots:
    void start();
};

#endif // COUNTER_H
