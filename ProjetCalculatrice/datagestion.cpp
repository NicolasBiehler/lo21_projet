#include "datagestion.h"

DataGestion::DataGestion() {
    // chargerContexte ?
    pileAffichage = new Pile<QString>();
    pileStockage = new Pile<Data>();
    pileRetablir = new Pile<Data>();
    factoryInstance = &Factory::getInstance();

}

DataGestion::~DataGestion() {

    // TODO
}

void DataGestion::parse(QString expression) {
    if(expression.contains("'")) {
        Pile<Data> tmp;
        QStringList list = expression.split("'");
        foreach(QString s2, list) {
            QStringList l = s2.split(" ");
            foreach(QString s, s2) {
                pileStockage->addPile(DataGestion::factoryInstance->creer(s));
                tmp.addPile(DataGestion::factoryInstance->creer(s));
            }
        }
        //res = calcul(tmp);
        //pileStockage.addPile(res);
        //pileAffichage.addPile(res.toString());
    }
    else {
        QStringList list = expression.split(" ");
        foreach(QString s, list) {
            pileAffichage->addPile(&s);
            pileStockage->addPile(DataGestion::factoryInstance->creer(s));
        }
    }
}

void DataGestion::calcul() {
    /*
     *tant que pilestockage pas vide FAIRE
     *  tete = x
     *  x == Data
     *  RIEN
     *else if expression {
     * parse
     *}
     *else {
     *  op == Op1 ---> strategy1
     *  op == op2 ----> strategy2
     *}
     */
}

DataGestion& DataGestion::clone() const {
    DataGestion* dg = new DataGestion();
    //dg->pileAffichage = *this->pileAffichage.clone();
    //dg->pileRetablir = *this->pileRetablir.clone();
    //dg->pileStockage = *this->pileStockage.clone();
   // dg.calculStrategy = this->calculStrategy;

    DataGestion& ref = *dg;
    return ref;
}
