#include "datagestion.h"

DataGestion::DataGestion() {
    // chargerContexte ?
    pileAffichage = new QStack<QString>(10);
    pileStockage = new QStack<Data>(10); // cette valeur ?
    pileRetablir = new QStack<Data>(10);
    factoryInstance = Factory::getInstance();

}

DataGestion::~DataGestion() {

    // TODO
}

void DataGestion::parse(QString expression) {
    /*test expression
            couper en morceau séparé par des ' '
            factory::creer sur chaque morceau
            remplissage de stockage
            appel à calcul
            remplissage de stockage
            remplissage de affichage*/
}

void DataGestion::calcul();
