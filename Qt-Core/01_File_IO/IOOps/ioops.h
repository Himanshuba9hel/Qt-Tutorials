#ifndef IOOPS_H
#define IOOPS_H

#include <QObject>
#include <QDebug>
#include <string>
#include "globals.h"

class IOOps : public QObject
{
    Q_OBJECT
public:
    explicit IOOps(QObject *parent = nullptr);
    void intro();
    void menu();

// ******* Menu *******
// Start
private:
    //Enum as User Input
    typedef enum{
        IO_read,
        IO_write,
        IO_NA
    }Operation;
    //Option on String
    std::string ListOfOption[IO_NA] = {
        "Read",
        "Write"
    };
// End

signals:

};

#endif // IOOPS_H
