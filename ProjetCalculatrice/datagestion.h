#ifndef DATAGESTION_H
#define DATAGESTION_H

#include <stack>
#include <string>
#include "data.h"

class DataGestion {
private:
    stack<QString> pileAffichage;
    stack<Data> pileStockage;
    stack<Data> pileRetablir;
    Factory* factoryInstance;
public:
    DataGestion();
    ~DataGestion();
    stack<Data> getStockage() {return pileStockage;}
    stack<Data> getRetablir() {return pileRetablir;}
    stack<QString> getAffichage() {return pileAffichage;}
    stack<Data> parse(QString expression); // dans cette fonction : la factory
    void calcul(); // appelle différente fonction suivant le contenu
};

#endif // DATAGESTION_H
