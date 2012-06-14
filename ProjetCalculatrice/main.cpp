#include <QtGui/QApplication>

#include "mainwindow.h"

// test
#include "datagestion.h"
#include <iostream>
#include <typeinfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w(0);
    w.show();
    
    return a.exec();
}
