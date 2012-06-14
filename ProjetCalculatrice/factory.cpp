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
    if(instance!=0)
        delete instance;
    instance=0;
}

Data *Factory::creer(QString s) {
    Data * d=0;
    if(Nombre::Entier::isEntier(s)) {
        *d = EntierFactory::creer(s);
    }
    else if(Nombre::Rationnel::isRationnel(s)) {
        *d = RationnelFactory::creer(s);
    }
    else if(Nombre::Reel::isReel(s)) {
        *d = ReelFactory::creer(s);
    }
    else if(Nombre::Complexe::isComplexe(s)) {
        *d = ComplexeFactory::creer(s);
    }
    else if(Nombre::Expression::isExpression(s)) {
        *d = ExpressionFactory::creer(s);
    }
    else { // c'est un opérateur ou une mauvaise entrée
        OperateurFactory::creer(s);
    }
    return d;
}

Entier& EntierFactory::creer(QString s) {
    Entier* res = new Entier(s.toInt());
    Entier& ref = *res;
    return ref;
}

Reel& ReelFactory::creer(QString s) {
    Reel* res = new Reel(s.toDouble());
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
    DataReelle *dr = dynamic_cast<DataReelle*>(Factory::getInstance().creer(list[0]));
    DataReelle *di = dynamic_cast<DataReelle*>(Factory::getInstance().creer(list[1]));
    Complexe* res = new Complexe( *dr, *di);
    Complexe& ref = *res;
    return ref;
}

Expression& ExpressionFactory::creer(QString s) {
    Expression *e= new Expression(s);
    Expression& ref = *e;
    return ref;
}

Operateur& OperateurFactory::creer(QString s) {
    Operateur *o = new Operateur(s);
    Operateur& ref = *o;
    return ref;
}
