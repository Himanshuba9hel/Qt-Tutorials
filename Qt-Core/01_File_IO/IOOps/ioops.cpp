#include "ioops.h"

IOOps::IOOps(QObject *parent)
    : QObject{parent}
{

}

void IOOps::intro()
{
    qInfo()<<"Welcome to IO operation";
}
