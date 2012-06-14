#ifndef DATAGESTION_H
#define DATAGESTION_H

#include <QStack>
#include <QStringList>
#include <string>
#include "data.h"
#include "factory.h"
#include "pile.h"
#include "operateur.h"

class DataGestion {
private:
    //Pile<QString> pileAffichage;
    //Pile<Data> pileStockage;
    //Pile<Data> pileRetablir;
    Factory* factoryInstance;
    Operateur::OperateurStrategy* calculStrategy;
public:
    DataGestion();
    ~DataGestion();
    //Pile<Data> getStockage() const {return pileStockage;}
    //Pile<Data> getRetablir() const {return pileRetablir;}
    //Pile<QString> getAffichage() const {return pileAffichage;}
    Factory& getFactory() const {return *factoryInstance;}
    void parse(QString expression); // update pileaffichage + pileretablir
    void calcul(); // appelle différente fonction suivant le contenu --> strategy
    void annuler();
    void retablir();
    void saveContexte();
    void chargerContexte();
    void close(); // appelle le destructeur + saveContexte
    void open(); // appelle le constructeur + chargerContexte
    DataGestion& clone() const;
};

#endif // DATAGESTION_H
