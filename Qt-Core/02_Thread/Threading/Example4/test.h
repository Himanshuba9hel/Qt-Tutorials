#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QTimer>

class test : public QThread
{
    Q_OBJECT
public:
    explicit test(QObject *parent = nullptr);

signals:
};

#endif // TEST_H
