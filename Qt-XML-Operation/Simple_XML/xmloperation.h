#ifndef XMLOPERATION_H
#define XMLOPERATION_H

#include <QDebug>
#include <QtXml>

class xmlOperation
{
private:
    QDomDocument document;

public:
    xmlOperation();
    void xmlIntro();
    void xmlOpenNRead();
    void listElements(QDomElement root, QString tagname, QString attribute);
};

#endif // XMLOPERATION_H
