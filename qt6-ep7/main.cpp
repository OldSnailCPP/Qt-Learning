#include <QList>
#include <QString>
#include <QCoreApplication>

#include "test.h"

typedef QList<Test *> test_list;


test_list get_test_list()
{
    test_list list;

    for (int i = 0; i < 5; ++i)
    {
        list.append(new Test());
        list.last()->setObjectName("Test_" + QString::number(i));
    }

    return list;
}


void display_all(test_list *list)
{
    foreach(Test *item, *list)
    {
        qInfo() << item;
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test_list list = get_test_list();
    display_all(&list);

    qInfo() << "\nDeleting...";
    //qDeleteAll(list);
    qDeleteAll(list.begin(), list.end());
    display_all(&list);

    return a.exec();
}
