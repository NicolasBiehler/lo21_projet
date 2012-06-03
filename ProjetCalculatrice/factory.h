#ifndef FACTORY_H
#define FACTORY_H

#include <QStringList>
#include "data.h"
#include "operateur.h"

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
    Nombre::Data creer(QString s);
};

class EntierFactory : public Factory {
    static Nombre::Entier& creer(QString s);
};

class ReelFactory : public Factory {
    static Nombre::Reel& creer(QString s);
};

class RationnelFactory : public Factory {
    static Nombre::Rationnel& creer(QString s);
};

class ComplexeFactory : public Factory {
    static Nombre::Complexe& creer(QString s);
};

class OperateurFactory : public Factory {
    static Operateur& creer(QString s);
};

#endif // FACTORY_H
