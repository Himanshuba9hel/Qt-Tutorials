#ifndef TEST3_H
#define TEST3_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QTimer>

class Test3 : public QThread
{
    Q_OBJECT
public:
    explicit Test3(QObject *parent = nullptr);

signals:

    // QThread interface
protected:
    void run();

private:
    void test();
    QTimer m_timer;
};

#endif // TEST3_H
