#include <QtGui/QApplication>

#include "mainwindow.h"

// test
#include "datagestion.h"
#include <iostream>
#include <typeinfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();/*
    Nombre::Data *d = new Nombre::Reel(2.3);
    Nombre::DataReelle *dr = new Nombre::Rationnel(1,2);
    Nombre::Entier e(4);
    std::cout << "d : " << typeid(*d).name()<< std::endl;
    std::cout << "dr : " << typeid(*dr).name()<< std::endl;
    std::cout << "e : " << typeid(e).name()<< std::endl;
    return 0;*/
}
