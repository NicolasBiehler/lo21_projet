#include "factory.h"

using namespace std;

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
Data creer(QString s) {
    if(Nombre::Entier::isEntier(s)) {

    }
    else if(Nombre::Rationnel::isRationnel(s)) {

    }
    else if(Nombre::Reel::isReel(s)) {

    }
    else if(Nombre::Complexe::isComplexe(s)) {

    }
    else { // c'est un opérateur ou une mauvaise entrée

    }
}
