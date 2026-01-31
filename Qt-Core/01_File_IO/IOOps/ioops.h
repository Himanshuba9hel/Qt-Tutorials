#ifndef IOOPS_H
#define IOOPS_H

#include <QObject>
#include <QDebug>

class IOOps : public QObject
{
    Q_OBJECT
public:
    explicit IOOps(QObject *parent = nullptr);
    void intro();
signals:

};

#endif // IOOPS_H
