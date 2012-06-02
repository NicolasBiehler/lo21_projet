#include "factory.h"

using namespace std;

Factory* Factory::instance=0;

Factory& Factory::getInstance() {
    if(instance==0)
        instance = new Factory();
    return *instance;
}

void Factory::releaseInstance() {
    delete instance;
}

// les entrées sont découpés au niveau des ' ' et creer est appelée pour chaque élément
// donc pas de calcul à gérer, un seul truc à la fois
Data creer(QString s) {
    if(0) {

    }
}
