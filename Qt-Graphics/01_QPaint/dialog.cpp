#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QPen paintpen(Qt::black);
    paintpen.setWidth(6);

    QPen linepen(Qt::red);
    linepen.setWidth(2);

    QPoint p1;
    p1.setX(10);
    p1.setY(20);

    QPoint p2;
    p2.setX(300);
    p2.setY(200);

    //painter.drawLine(10,10,100,100); //without pointer
    painter.setPen(linepen);
    painter.drawLine(p1,p2);

    painter.setPen(paintpen );
    painter.drawPoint(p1);
    painter.drawPoint(p2);

}



