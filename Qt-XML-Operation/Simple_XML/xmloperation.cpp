#include "xmloperation.h"

xmlOperation::xmlOperation() {

}

void xmlOperation::xmlIntro()
{
    qDebug()<<"Welcome to Xml Operation."<<Qt::endl;
}

void xmlOperation::listElements(QDomElement root, QString tagname, QString id)
{
    QDomNodeList items = root.elementsByTagName(tagname);
    qDebug()<<"Total No of Books: "<<items.count();

    for(int i = 0; i < items.count(); i++){
        QDomNode itemnode = items.at(i);
        if(itemnode.isElement()){
            QDomElement itemele = itemnode.toElement();
            qDebug()<<"    "<<i<<". ID Of Book: "<<itemele.attribute(id);
            listElements(itemele , "Chapter" ,"Name");
        }
    }
    qDebug()<<Qt::endl;
}

void xmlOperation::xmlOpenNRead()
{
    QString path = "/home/o2i/Desktop/Himanshu/Qt_p/Qt-Tutorials/Qt-XML-Operation/book.xml";
    qDebug()<<"Xml File Accessing Your File Path: "<<path<<Qt::endl;
    QFile file(path);
    // if(file.exists()){
    //     qDebug()<<"Your File Exist!"<<Qt::endl;
    // }else{
    //     qDebug()<<"Oops! Your File Not Exist"<<Qt::endl;
    // }
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug()<<"Qt can't open your file";
        return;
    }else{
        if(!document.setContent(&file)){
            qDebug()<<"Failed to load the file";
            return;
        }
        file.close();
    }

    QDomElement root = document.firstChildElement();
    listElements(root ,"book","id");
    qDebug()<<"Finished";
}

