#ifndef ONGLET_H
#define ONGLET_H

#include <QStack>
#include <QTabWidget>
#include <QWidget>
#include "datagestion.h"
#include "pile.h"
#include <string>
#include <sstream>


enum Constante{Integer,Real,Ratio};

class Onglet : public QTabWidget
{
private:
    DataGestion *gestion;
    bool degre;
    bool complexe;
    Constante type;

public:
    Onglet();
    ~Onglet();
    void setComplexe(const bool val){this->complexe=val;}
    void setDegre(const bool val){this->degre=val;}
    void setType(const Constante val){this->type=val;}
    bool getComplexe()const {return complexe;}
    bool getDegre()const {return degre;}
    Constante getType()const{return type;}
    //void ajouterStockage(const DataGestion x){ gestion->getStockage().addPile(x);}
    void viderStockage(){gestion->getStockage().CLEAR();}
    int tailleStockage(){return gestion->getStockage().count();}
    std::string saveContexte() const;
};



#endif // ONGLET_H
