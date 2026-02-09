#ifndef CUSTOMTYPES_H
#define CUSTOMTYPES_H
#include <QString>

typedef unsigned int        ID;
typedef const unsigned int& IDConstRef;
typedef QString             Password;
typedef const QString&      PasswordConstRef;
typedef struct{
    QString        name;
    unsigned short age;
    QString        note;
}user;

typedef enum{
    changePassword,
       infoAdd,
       noteAdd,
       nodeChange,
       nodeDelete
}menu;

typedef enum {
    CREATE,
    READ,
    UPDATE,
    DELETE
}Operations;


#endif // CUSTOMTYPES_H
