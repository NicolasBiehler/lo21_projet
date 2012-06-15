#include "datagestion.h"

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
            //Nombre::Data& res = calculStrategy->calcul(tmp);
            //pileStockage->addPile(&res);
            //pileAffichage->addPile(&res.toString());
        }
    }
    else {
        QStringList list = expression.split(" ");
        foreach(QString s, list) {
            pileAffichage->addPile(&s);
            pileStockage->addPile(DataGestion::factoryInstance->creer(s));
        }
    }
    calcul();
}

void DataGestion::calcul() {
    if(pileStockage->isEmpty())
        throw CalculException("La pile est vide, pas de calcul a faire");
    if(Nombre::Operateur::isOperateur(pileStockage->top()->toString())) {
        int op = Nombre::Operateur::findOperateur(pileStockage->top()->toString());
        if(op==-1)
            throw CalculException("Operateur non reconnu, videz la pile svp");

        switch(op) {
        case 0:
            calculStrategy = new Operation::Plus();
        case 1:
            calculStrategy = new Operation::Moins();
        case 2:
            calculStrategy = new Operation::Mult();
        case 3:
            calculStrategy = new Operation::Div();
        case 4:
            calculStrategy = new Operation::Mod();
        case 5:
            calculStrategy = new Operation::Pow();
        case 6:
            calculStrategy = new Operation::Sign();
        case 7:
            calculStrategy = new Operation::Sin();
        case 8:
            calculStrategy = new Operation::Cos();
        case 9:
            calculStrategy = new Operation::Tan();
        case 10:
            calculStrategy = new Operation::Tanh();
        case 11:
            calculStrategy = new Operation::Sinh();
        case 12:
            calculStrategy = new Operation::Cosh();
        case 13:
            calculStrategy = new Operation::Ln();
        case 14:
            calculStrategy = new Operation::Log();
        case 15:
            calculStrategy = new Operation::Inv();
        case 16:
            calculStrategy = new Operation::Sqrt();
        case 17:
            calculStrategy = new Operation::Sqr();
        case 18:
            calculStrategy = new Operation::Cube();
        case 19:
            calculStrategy = new Operation::Fact();
        default:
            throw CalculException("Operateur non reconnu, videz la pile svp");
        }
        //calculStrategy->calcul(pileStockage);
    }
    // sinon, rien a faire, rien a calculer
}

DataGestion& DataGestion::clone() const {
    DataGestion* dg = new DataGestion();
    dg->setAffichage(this->pileAffichage->clone());
    dg->setRetablir(this->pileRetablir->clone());
    dg->setStockage(this->pileStockage->clone());
    dg->calculStrategy = new Operation::OperateurStrategy();

    DataGestion& ref = *dg;
    return ref;
}

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
