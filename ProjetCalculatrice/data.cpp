#include "data.h"

using namespace Nombre;

void Rationnel::simplifier() {
    Entier vpgcd = pgcd(this->getNumerateur(), this->getDenominateur());
    const Reel* num = new Reel(Rationnel::numerateur->getValeur() / vpgcd.getValeur());
    const Reel* den = new Reel(Rationnel::denominateur->getValeur() / vpgcd.getValeur());

    if(num==0 || den==0)
        throw CalculException("Simplification a échouée");

    Rationnel::numerateur = &num->toEntier();
    Rationnel::denominateur = &den->toEntier();
}

Reel& Entier::toReel() const {
    Reel* res = new Reel(Entier::valeur);
    Reel& ref = *res;
    return ref;
}

Rationnel& Entier::toRationnel() const {
    Rationnel* res = new Rationnel(Entier::valeur, 1);
    Rationnel& ref = *res;
    return ref;
}

Entier& Rationnel::toEntier() const {
    Entier* res= new Entier(Rationnel::numerateur->getValeur() / Rationnel::denominateur->getValeur());
    Entier& ref = *res;
    return ref;
}

Reel& Rationnel::toReel() const {
    double r = Rationnel::numerateur->getValeur() / Rationnel::denominateur->getValeur();
    Reel* res = new Reel(r);
    Reel& ref = *res;
    return ref;
}

Entier& Reel::toEntier() const {
    Entier* res = new Entier(Reel::valeur);
    Entier& ref = *res;
    return ref;
}

Rationnel& Reel::toRationnel() const {
    QString str;
    str.setNum(Reel::valeur);
    QStringList list = str.split(".");
    int decimal = list.value(1).count();
    Rationnel* res= new Rationnel(Reel::valeur*pow((double)10,decimal), pow((double)10,decimal));
    res->simplifier();
    Rationnel& ref=*res;
    return ref;
}

bool Nombre::Entier::isEntier(const QString& s){
    QRegExp regexp(ENTIER);
    return (s.contains(regexp));
}

bool Nombre::Reel::isReel(const QString& s){
    QRegExp regexp(REEL);
    return (s.contains(regexp));
}

bool Nombre::Rationnel::isRationnel(const QString& s){

    QRegExp regexp(RATIONNEL);
    return (s.contains(regexp));
}

bool Nombre::Complexe::isComplexe(const QString& s){
    QRegExp regexp(COMPLEXE);
    return (s.contains(regexp));
}

bool Nombre::Expression::isExpression(const QString& s){
    QRegExp regexp(EXPRESSION);
    return (s.contains(regexp));
}


Entier Rationnel::pgcd(const Entier& a, const Entier& b) {
    Entier x(a.getValeur());
    Entier y(b.getValeur());

    if((y.getValeur())==0)
        return x;
    else
        return pgcd(y,Entier(x.getValeur() % y.getValeur()));
}

bool Operateur::isOperateur(const QString& s) {
    for(int i=0; i<20;i++) {
        if(s == Nombre::OPERATEUR[i]) {
            return true;
        }
    }
    return false;
}

bool Operateur::isBinaire() const {
    if(Operateur::op == "SIGN" || Operateur::op == "+" || Operateur::op == "-"
            || Operateur::op == "*" || Operateur::op == "/" || Operateur::op == "%"
            || Operateur::op == "^")
        return true;
    return false;
}
