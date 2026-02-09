#include "database.h"

DataBase::DataBase(QObject *parent)
    : QObject{parent}
{}

void DataBase::init()
{
    qDebug()<<"****** Initiation: DataBase is Ready                     ******";
    defaultValue();
}

void DataBase::defaultValue()
{
    qDebug()<<"****** Initiation: DataBase is Setting Up Default Value  ******";
    QPair<ID , Password> defaultUserAuthData[] ={
        {11111,  QStringLiteral("1234")},
        {22222,  QStringLiteral("1234")},
        {33333,  QStringLiteral("1234")},
        {44444,  QStringLiteral("1234")},
        {55555,  QStringLiteral("1234")},
        {66666,  QStringLiteral("1234")}
    };
    for(const auto &i: defaultUserAuthData){
        insertAuthList(i.first, i.second);
    }
}

void DataBase::insertAuthList(ID id, const QString &password)
{
    if(AuthList.contains(id)){
        qDebug()<<"[ ALERT ]: ID is all ready exist!!!. Try New ID";
    }
    AuthList[id] = password;
}

bool DataBase::validAuthData(IDConstRef id, PasswordConstRef password)
{
    if(AuthList.contains(id)){
        if(AuthList[id] == password){
            qDebug()<<"[ VALID ]: You have a valid authorization";
            return true;
        }else{
            qDebug()<<"[ ALERT ]: ID is exist but password is incorrect";
            return false;
        }
    }else{
        qDebug()<<"[ ALERT ]: ID is not exist!!!.";
        return false;
    }
}

void DataBase::updateAuthData(ID *id, Password *password)
{
    if(id && password){
        *id +=1 ;
        *password += "0";
        return;
    }else{
        return;
    }
}

void DataBase::updateAuthData(ID &id, Password &password)
{
    id = 1111;
    password = "1111";
}

