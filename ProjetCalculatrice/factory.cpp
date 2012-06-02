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
