#include <QCoreApplication>
#include "globals.h"
#include "IOOps/ioops.h"

QTextStream qin(stdin);
QTextStream qout(stdout);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    IOOps *ioOps = new IOOps();
    ioOps->intro();
    return a.exec();
}
