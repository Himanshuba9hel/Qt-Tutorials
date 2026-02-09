#include "iooperation.h"

// Define the global objects (initialization)
QTextStream qin(stdin);
QTextStream qout(stdout);

IOOperation::IOOperation(QObject *parent)
    : QObject{parent}
{
    sesson = UINT_MAX;
    setSessonTag(sesson);
}

void IOOperation::setSessonTag(ID id)
{
    if(id == UINT_MAX){
        sessonTag = "UNKNOWN";
    }else {
        sessonTag = QString::number(id);
    }
    sessonTag = "[ "+sessonTag+" ] ";
}

void IOOperation::init()
{
    qDebug()<<"****** Initiation: IO Operation is ready                 ******";
}

void IOOperation::intro()
{
    qout<<"******** Welcome to Note Manager ********\n"<<Qt::flush;
    credentials();
}

void IOOperation::credentials()
{
    qout<<sessonTag<<"Please enter your credentials\n"<<Qt::flush;
    qout<<s+"ID: "<<Qt::flush;
    IDConstRef id = static_cast<IDConstRef>(qin.readLine().toUInt());
    qout<<s+"Password: "<<Qt::flush;
    PasswordConstRef password = static_cast<PasswordConstRef>(qin.readLine());
    qout<<sessonTag<<"Your Inputs is:\n"<<Qt::flush;
    qout<<s+"ID: "<<id<<" Password: "<<password<<Qt::endl<<Qt::flush;
    if(database->validAuthData(id , password)){
        setSessonTag(id);
        qout<<sessonTag<<"So Your Proccess is Forword\n"<<Qt::flush;
    }
    qout<<sessonTag<<"Your Inputs After Audit is:\n"<<Qt::flush;
    qout<<s+"ID: "<<id<<" Password: "<<password<<Qt::endl<<Qt::flush;


    // qout<<"Please enter your credentials\n"<<Qt::flush;
    // qout<<"\t ID: "<<Qt::flush;
    // ID id = static_cast<ID>(qin.readLine().toUInt());
    // qout<<"\t Password: "<<Qt::flush;
    // Password password = static_cast<Password>(qin.readLine());
    // qout<<"Your Inputs is:\n"<<Qt::flush;
    // qout<<"\t ID: "<<id<<" Password: "<<password<<Qt::endl<<Qt::flush;
    // database->updateAuthData(id , password);
    // //updateCredentials(id,password);
    // qout<<"Your Inputs After Update is:\n"<<Qt::flush;
    // qout<<"\t ID: "<<id<<" Password: "<<password<<Qt::endl<<Qt::flush;

    // user newUser;
    // qout<<"\t Name: "<<Qt::flush;
    // newUser.name = qin.readLine();
    // qout<<"\t Age: "<<Qt::flush;
    // newUser.age = qin.readLine().toUShort();
    // qout<<"\t So, Your name is :"<<newUser.name<<"\n"<<Qt::flush;
    return;
}

void IOOperation::updateCredentials(ID &id, Password &password)
{
    id = 0;
    password = "0000";
}

void IOOperation::setDataBase(DataBase *databaseRef)
{
    database = databaseRef;
    qDebug()<<"****** Initiation: DataBase is Connected to IO Operation ******";
    database->init();
}
