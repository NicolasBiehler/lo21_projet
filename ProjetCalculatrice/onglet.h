#ifndef ONGLET_H
#define ONGLET_H

#include <QStack>
#include <QTabWidget>
#include <QWidget>
#include "datagestion.h"
#include "pile.h"


enum Constante{Integer,Real,Ratio};

class Onglet : public QTabWidget
{
private:
    Pile<DataGestion> stockage;
    Pile<QString> affichage;
    Pile<DataGestion> annuler;
    bool degre;
    bool complexe;
    Constante type;

public:
    Onglet();
    ~Onglet();
    void setComplexe(const bool val){this->complexe=val;}
    void setDegre(const bool val){this->degre=val;}
    void setType(const Constante val){this->type=val;}
    //void ajouterStockage(DataGestion x){ this->stockage.addPile(x);}
    void viderStockage(){this->stockage.CLEAR();}
    int tailleStockage(){return this->stockage.count();}
};



#endif // ONGLET_H
