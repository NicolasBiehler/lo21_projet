#include "factory.h"

using namespace std;
using namespace Nombre;

Factory* Factory::instance=0;

Factory& Factory::getInstance() {
    if(instance==0)
        instance = new Factory();
    return *instance;
}

void Factory::releaseInstance() {
    if(f!=0)
        delete instance;
    f=0;
}

// les entrées sont découpés au niveau des ' ' et creer est appelée pour chaque élément
// donc pas de calcul à gérer, un seul truc à la fois
Data *Factory::creer(QString s) {
    if(Nombre::Entier::isEntier(s)) {
        EntierFactory::creer(s);
    }
    else if(Nombre::Rationnel::isRationnel(s)) {
        RationnelFactory::creer(s);
    }
    else if(Nombre::Reel::isReel(s)) {
        ReelFactory::creer(s);
    }
    else if(Nombre::Complexe::isComplexe(s)) {
        ComplexeFactory::creer(s);
    }
    else { // c'est un opérateur ou une mauvaise entrée
        OperateurFactory::creer(s);
    }
}

Entier& EntierFactory::creer(QString s) {
    Entier* res = new Entier(s.toInt());
    Entier& ref = *res;
    return ref;
}

Reel& ReelFactory::creer(QString s) {
    Reel* res = new Rationnel(s.toDouble());
    Reel& ref = *res;
    return ref;
}

Rationnel& RationnelFactory::creer(QString s) {
    QStringList list = s.split("/");
    Rationnel* res = new Rationnel(list[0].toInt(), list[1].toInt());
    res->simplifier();
    Rationnel& ref = *res;
    return ref;
}

Complexe& ComplexeFactory::creer(QString s) {
    QStringList list = s.split("$");
    DataReelle dr = Factory::getInstance().creer(list[O]);
    DataReelle di = Factory::getInstance().creer(list[1]);
    Complexe* res = new Complexe(dr,di);
    Complexe& ref = *res;
    return ref;
}

Operateur& OperateurFactory::creer(QString s) {
    // classe operateur a faire
}
