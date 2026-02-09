#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QPair>
#include <QDebug>
#include <CustomTypes/customtypes.h>

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = nullptr);
    void init();

private:

    QMap<ID , Password> AuthList;
    QMap<ID , user>     CredentialsDataList;

    void defaultValue();

//CRUD Operation
private:
    void insertAuthList(ID id, const QString &password);
public:
    bool  validAuthData(IDConstRef id, PasswordConstRef password);
    void  updateAuthData(ID *id, Password *password);
    void  updateAuthData(ID &id, Password &password);

signals:
};

#endif // DATABASE_H
