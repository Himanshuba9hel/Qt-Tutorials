#include "ioops.h"

IOOps::IOOps(QObject *parent)
    : QObject{parent}
{

}

void IOOps::intro()
{
    qout<<"Welcome to IO operation\n\n"<<Qt::flush;
}

void IOOps::menu()
{
    qout<<"Select Your Operation:\n"<<Qt::flush;
    //Operation = qin<static_cast<Operation>()
}
