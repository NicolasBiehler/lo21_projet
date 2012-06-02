#ifndef DATAGESTION_H
#define DATAGESTION_H

#include <stack>
#include <string>
#include "data.h"
#include "factory.h"

class DataGestion {
private:
    stack<QString> pileAffichage;
    stack<Data> pileStockage;
    stack<Data> pileRetablir;
    Factory* factoryInstance;
public:
    DataGestion();
    ~DataGestion();
    stack<Data> getStockage() const {return pileStockage;}
    stack<Data> getRetablir() const {return pileRetablir;}
    stack<QString> getAffichage() const {return pileAffichage;}
    stack<Data> parse(QString expression); // dans cette fonction : la factory
    void calcul(); // appelle différente fonction suivant le contenu
};

#endif // DATAGESTION_H
