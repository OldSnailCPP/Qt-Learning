#include <QDebug>

#include "test.h"


Test::Test(QObject *parent)
    : QObject{parent}
{

}


void Test::dostuff()
{
    qInfo() << "do stuff.";
    emit close();
}
