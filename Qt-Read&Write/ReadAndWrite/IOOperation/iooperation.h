#ifndef IOOPERATION_H
#define IOOPERATION_H

#include <QObject>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <iostream>
#include <CustomTypes/customtypes.h>
#include <DataBase/database.h>
class DataBase;
// // Declare as extern if you want one global instance across multiple files
// // Otherwise, you can define them directly if used only in one place.
extern QTextStream qin;
extern QTextStream qout;



class IOOperation : public QObject
{
    Q_OBJECT
public:
    explicit IOOperation(QObject *parent = nullptr);
    // QTextStream qin{stdin};
    // QTextStream qout{stdout};

// Current Session Manager Start
private:

    ID sesson;
    QString sessonTag;
    void setSessonTag(ID id);
    QString s = "\t\t";
// Current Session Manager End

public:
    void init();
public:
    void intro();
    void credentials();
private:
    void menu();
    void updateCredentials(ID &id, Password &password);

private:


private:


private:
    IOType ioType;

private:
    DataBase *database;
public:
    void  setDataBase(DataBase *databaseRef);

signals:
};

#endif // IOOPERATION_H
