#include "data.h"

using namespace Nombre;

void Rationnel::simplifier() {
    Entier vpgcd = pgcd(Rationnel::numerateur, Rationnel::denominateur);
    const Reel* num = Rationnel::numerateur.getValeur() / vpgcd.getValeur();
    const Reel* den = Rationnel::denominateur.getValeur() / vpgcd.getValeur();

    if(p_num_div==0 || p_den_div==0)
        throw CalculatriceException("Simplification a échouée");

    Rationnel::numerateur = num->toEntier();
    Rationnel::denominateur = den->toEntier();
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
    Entier* res= new Entier(Rationnel::numerateur::getValeur() / Rationnel::denominateur::getValeur());
    Entier& ref = *res;
    return ref;
}

Reel& Rationnel::toReel() const {
    double r = Rationnel::numerateur::getValeur() / Rationnel::denominateur::getValeur();
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
    Rationnel* res= new Rationnel(Reel::valeur*pow(10,decimal), pow(10,decimal));
    res->simplifier();
    Rationnel& ref=*res;
    return ref;
}

bool Nombre::Entier::isEntier(const QString& s){
    QRegExp regexp("^[\\d]+$");
    return (s.contains(regexp));
}

bool Nombre::Reel::isReel(const QString& s){
    QRegExp regexp("^[\\d]+[\.][\\d]+$");
    return (s.contains(regexp));
}

bool Nombre::Rationnel::isRationnel(const QString& s){
    QRegExp regexp("^[\\d]+\/[\\d]+$");
    return (s.contains(regexp));
}

bool Nombre::Complexe::isComplexe(const QString& s){
    QRegExp regexp("^[\\d]+(([\.]|[\/])[\\d]+)?[\$][\\d]+(([\.]|[\/])[\\d]+)?$");
    return (s.contains(regexp));
}