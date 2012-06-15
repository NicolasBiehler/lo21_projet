#ifndef DATAGESTION_H
#define DATAGESTION_H

#include <QStack>
#include <QStringList>
#include <string>
#include "data.h"
#include "factory.h"
#include "pile.h"
#include "operateur.h"
#include "calculexception.h"

class DataGestion {
private:
    Pile<QString> * pileAffichage;
    Pile<Data> * pileStockage;
    Pile<Data> * pileRetablir;
    Factory* factoryInstance;
    Operation::OperateurStrategy* calculStrategy;
public:
    DataGestion();
    ~DataGestion();
    Pile<Data>& getStockage() const {return *pileStockage;}
    Pile<Data>& getRetablir() const {return *pileRetablir;}
    Pile<QString>& getAffichage() const {return *pileAffichage;}
    void setStockage(Pile<Data>& p) {
        delete pileStockage;
        pileStockage = &p;
    }
    void setRetablir(Pile<Data>& p) {
        delete pileRetablir;
        pileRetablir = &p;
    }
    void setAffichage(Pile<QString>& p) {
        delete pileAffichage;
        pileAffichage = &p;
    }
    Factory& getFactory() const {return *factoryInstance;}
    void parse(QString expression); // update pileaffichage + pileretablir
    void calcul(); // appelle différente fonction suivant le contenu --> strategy
    void annuler();
    void retablir();
    DataGestion& clone() const;
};

#endif // DATAGESTION_H
