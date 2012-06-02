#include "datagestion.h"

DataGestion() {
    pileAffichage = new QStack<QString>(10);
    pileStockage = new QStack<Data>(10); // cette valeur ?
    pileRetablir = new QStack<Data>(10);
    factoryInstance = Factory::getInstance();

}

~DataGestion() {

    // TODO
}

stack<Data> parse(QString expression) {
    /*test expression
            couper en morceau séparé par des ' '
            factory::creer sur chaque morceau
            remplissage de stockage
            appel à calcul
            remplissage de stockage
            remplissage de affichage*/
}

void calcul();
