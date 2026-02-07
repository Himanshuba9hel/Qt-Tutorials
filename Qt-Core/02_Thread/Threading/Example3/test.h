#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QTimer>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

public slots:
    void run();

private slots:
    void timeout();

private:
    QTimer m_timer;

signals:

};

#endif // TEST_H
