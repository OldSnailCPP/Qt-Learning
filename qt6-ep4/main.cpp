#include <QDebug>
#include <QCoreApplication>

#include "test.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test *test = new Test();
    QObject::connect(test, &Test::close, &a, &QCoreApplication::quit, Qt::QueuedConnection);
    test->dostuff();

    int ret_val = a.exec();
    qInfo() << "The returning value is " << ret_val;
    return ret_val;
}
