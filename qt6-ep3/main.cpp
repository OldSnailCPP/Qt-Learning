#include <string>
#include <iostream>
#include <QTextStream>
#include <QCoreApplication>


void do_cpp()
{
    std::string name;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello! Your name is " << name << '\n';
}


void do_qt()
{
    QTextStream qin(stdin);
    QTextStream qout(stdout);

    qout << "Enter your name: ";
    //qout.flush();
    QString name = qin.readLine();
    qout << "Hello! " << name << '\n';
    //qout.flush();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    do_cpp();
    do_qt();

    return a.exec();
}
