#include <QCoreApplication>
#include <IOOperation/iooperation.h>
#include <DataBase/database.h>

class IOOperation;
class DataBase;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    IOOperation ioOperation;
    DataBase    database;
    ioOperation.init();
    ioOperation.setDataBase(&database);
    ioOperation.intro();

    return a.exec();
}
