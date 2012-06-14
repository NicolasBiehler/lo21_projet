#include <QtGui/QApplication>

#include "mainwindow.h"

// test
#include "datagestion.h"
#include <iostream>
#include <typeinfo>

int main(/*int argc, char *argv[]*/)
{
    /*QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();*/
    Nombre::Data *d = new Nombre::Reel(2.3);
    Nombre::DataReelle *dr = new Nombre::Rationnel(1,2);
    Nombre::Entier e(4);
    if(Entier::isEntier("4")) {
        std::cout << "victoire Entier" << std::endl;
    }
    if(Rationnel::isRationnel("3/4")) {
        std::cout << "victoire Rationnel" << std::endl;
    }
    if(Reel::isReel("2.34")) {
        std::cout << "victoire Reel" << std::endl;
    }
    if(Complexe::isComplexe("267$4.5")) {
        std::cout << "victoire Complexe" << std::endl;
    }
    std::cout << "d : " << typeid(*d).name()<< std::endl;
    std::cout << "dr : " << typeid(*dr).name()<< std::endl;
    std::cout << "e : " << typeid(e).name()<< std::endl;
    return 0;
}
