#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructed" << parent;
}

Test::~Test()
{
    qInfo() << this << "destructed" << this->parent();
}
