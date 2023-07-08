#include <QDebug>
#include <QCoreApplication>

#include "cat.h"


void test(Cat &cat)
{
    qInfo() << &cat;
}


void test(Cat *cat)
{
    qInfo() << cat;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat kitty;
    Cat tom;

    kitty.setObjectName("kitty");
    tom.setObjectName("tom");

    qInfo() << &kitty;
    test(kitty);
    test(&kitty);

    qInfo() << '\n' << &tom;
    test(tom);
    test(&tom);

    return a.exec();
}
