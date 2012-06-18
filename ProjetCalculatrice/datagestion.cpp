#include "datagestion.h"
#include <iostream>

DataGestion::DataGestion() {
    pileAffichage = new Pile<QString>();
    pileStockage = new Pile<Data>();
    pileRetablir = new Pile<Data>();
    factoryInstance = &Factory::getInstance();
    calculStrategy = 0;
}

DataGestion::~DataGestion() {
    delete pileAffichage;
    delete pileStockage;
    delete pileRetablir;
    delete calculStrategy;
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
            Nombre::Data& res = calculStrategy->calcul(tmp);
            pileStockage->addPile(&res);
            pileAffichage->addPile(&res.toString());
        }
    }
    else {
        QStringList list = expression.split(" ",QString::SkipEmptyParts);
        foreach(QString s, list) {
            pileAffichage->addPile(&s);
            pileStockage->addPile(DataGestion::factoryInstance->creer(s));
        }
    }
    calcul();
}

void DataGestion::calcul() {
    if(pileStockage->isEmpty()){
        throw CalculException("La pile est vide, pas de calcul a faire");
    }

    if(Nombre::Operateur::isOperateur(pileStockage->top()->toString())) {
        int op = Nombre::Operateur::findOperateur(pileStockage->top()->toString());
        if(op==-1)
            throw CalculException("Operateur non reconnu, videz la pile svp");
        Data& ope = *pileStockage->pop();
        switch(op) {
        case 0:
            Operation::Plus *additionner;
            if(1){
                Data& resultat = additionner->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 1:
            Operation::Moins *soustraire;
            if(1){
                Data& resultat = soustraire->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 2:
            Operation::Mult *multiplier;
            if(1){
                Data& resultat = multiplier->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 3:
            Operation::Div *diviser;
            if(1){
                Data& resultat = diviser->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 4:
            Operation::Mod *modulo;
            if(1){
                Data& resultat = modulo->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 5:
            Operation::Pow *puissance;
            if(1){
                Data& resultat = puissance->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
    /*    case 6:
            Operation::Plus *sign;
            calculStrategy = sign;
            break;
   */     case 7:
            Operation::Sin *sinus;
            if(1){
                Data& resultat = sinus->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 8:
            Operation::Cos *cosinus;
            if(1){
                Data& resultat = cosinus->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 9:
            Operation::Tan *tangente;
            if(1){
                Data& resultat = tangente->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 10:
            Operation::Tanh *tangenteh;
            if(1){
                Data& resultat = tangenteh->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 11:
            Operation::Sinh *sinush;
            if(1){
                Data& resultat = sinush->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 12:
            Operation::Cosh *cosinush;
            if(1){
                Data& resultat = cosinush->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 13:
            Operation::Ln *ln;
            if(1){
                Data& resultat = ln->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 14:
            Operation::Log *log;
            if(1){
                Data& resultat = log->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 15:
            Operation::Inv *inverse;
            if(1){
                Data& resultat = inverse->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
        case 16:
            Operation::Sqrt *racine;
            if(1){
                Data& resultat = racine->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
            }
            break;
 /*       case 17:
            Operation::Plus *carre;
            calculStrategy = new Operation::Sqr();
            break;
        case 18:
            Operation::Plus *cube;
            calculStrategy = new Operation::Cube();
            break;
*/        case 19:
            Operation::Fact *factoriel;
            if(1){
                Data& resultat = factoriel->calcul(pileStockage);
                pileStockage->addPile(&ope);
                pileStockage->addPile(&resultat);
                pileAffichage->addPile(&resultat.toString());
            }
            break;
        default:
            throw CalculException("Operateur non reconnu, videz la pile svp");
            break;
        }
    // sinon, rien a faire, rien a calculer
    }
}

/*DataGestion& DataGestion::clone() const {
    DataGestion* dg = new DataGestion();
    dg->setAffichage(this->pileAffichage->clone());
    dg->setRetablir(this->pileRetablir->clone());
    dg->setStockage(this->pileStockage->clone());
    dg->calculStrategy = 0;

    DataGestion& ref = *dg;
    return ref;
}*/

void DataGestion::annuler(){
    if(this->getStockage().isEmpty())         //Si la pile est vide
        throw CalculException("annulation impossible : pile vide");
    if(Nombre::Operateur::isOperateur(this->getStockage().top()->toString()))    //Si le premier element est un operateur
        throw CalculException("annulation impossible : erreur d'expression");
    this->getRetablir().addPile(this->getStockage().pop());     //on depile
    if(!Nombre::Operateur::isOperateur(this->getStockage().top()->toString())){   //puis si ce n'est pas un operateur
        this->getStockage().addPile(this->getRetablir().pop());   //on repile et on quitte
        throw CalculException("erreur d'expression lors de l'annulation d'une operation");
    }
    this->getRetablir().addPile(this->getStockage().pop()); //sinon on depile
    if(Nombre::Operateur::isBinaire(this->getRetablir().top()->toString()))   //si l'operateur est binaire
        this->getRetablir().addPile((this->getStockage().pop()));     //on depile une derniere fois
    this->getAffichage().pop(); //enfin on depile la pile d'affichage
}

void DataGestion::retablir(){
    if(this->getRetablir().isEmpty())   //Si la pile est vide
        throw CalculException("Erreur : rien a retablir");
    if(Nombre::Operateur::isOperateur(this->getRetablir().top()->toString())){   //si c'est un operateur
        this->getStockage().addPile(this->getRetablir().pop());     //on depile 2 fois
        this->getStockage().addPile(this->getRetablir().pop());
    }
    else{                                                          //Sinon on depile 3 fois
        this->getStockage().addPile(this->getRetablir().pop());
        this->getStockage().addPile(this->getRetablir().pop());
        this->getStockage().addPile(this->getRetablir().pop());
    }
}
