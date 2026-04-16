#ifndef WORKERS_H
#define WORKERS_H

#include <QObject>
#include <QList>
#include <QSemaphore>
#include <QDebug>
#include <QRandomGenerator>
#include <QThread>

class Workers : public QObject
{
    Q_OBJECT
public:
    explicit Workers(QSemaphore *sema,QList<int> *values, QObject *parent = nullptr);

public slots:
    void run();

private:
    QSemaphore *m_sema;
    QList<int> *m_values;

signals:
};

#endif // WORKERS_H
