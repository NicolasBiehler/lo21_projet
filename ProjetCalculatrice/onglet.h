#ifndef ONGLET_H
#define ONGLET_H

#include <QStack>
#include <QTabWidget>
//#include "pile.h"

class Onglet : public QTabWidget
{
public:
    QTabWidget * tab;
    //DataGestion *p;
public:
    Onglet();
};

#endif // ONGLET_H
