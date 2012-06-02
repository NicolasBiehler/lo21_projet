#ifndef FACTORY_H
#define FACTORY_H

#include "data.h"

class Factory {
private:
    static Factory* instance;
    Factory(){}
    ~Factory(){}
    Factory(const Factory& f);
    Factory& operator=(const Factory& f);
public:
    static Factory& getInstance();
    static void releaseInstance();
    Data creer(QString s);
};

#endif // FACTORY_H
