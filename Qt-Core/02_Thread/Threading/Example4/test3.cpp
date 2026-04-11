#include "test3.h"

Test3::Test3(QObject *parent) : QThread{parent}
{}

void Test3::run()
{
    //Notice after 3 seconds nothing happens!!
    m_timer.singleShot(3000,this,&Test3::test);
    test();
}

void Test3::test()
{
    //Notice this gets run last!
    qInfo() << "TESTING" << currentThread();

    terminate();

    //Bad things happen from here...
}
