#include <QCoreApplication>
#include "xmloperation.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    xmlOperation* xmlOps = new xmlOperation();
    xmlOps->xmlIntro();
    xmlOps->xmlOpenNRead();
    return a.exec();
}
