#include "test.h"


Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Constructed" << parent;
}


Test::~Test()
{
    foreach(QObject *child, children())
    {
        qInfo() << this << "has a child named" << child;
    }

    qInfo() << this << "Destructed" << this->parent();
}
