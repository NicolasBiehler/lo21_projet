#ifndef DATA_H
#define DATA_H

#include <string>
#include <QString>
#include <QStringList>
#include <QRegExp>
#include <math.h>
#include "calculexception.h"

#define RATIONNEL "^[\\d]+\/[\\d]+$"
#define REEL "^[\\d]+[\.][\\d]+$"
#define COMPLEXE "^[\\d]+(([\.]|[\/])[\\d]+)?[\$][\\d]+(([\.]|[\/])[\\d]+)?$"
#define ENTIER "^[\\d]+$"

namespace Nombre {

class Data {
public:
    Data() {}
};

class DataReelle : public Data {
public:
    DataReelle() {}
    virtual Entier& toEntier() const;
    virtual Reel& toReel() const;
    virtual Rationnel& toRationnel() const;
};

class Entier : public DataReelle {
private:
    int valeur;
public:
    Entier(int i) : valeur(i) {}
    int getValeur() const {return valeur;}
    void setValeur(int i) {valeur = i;}
    Reel& toReel() const;
    Rationnel& toRationnel() const;
    static bool isEntier(const QString& s);
};

class Rationnel : public DataReelle {
private:
    Entier numerateur;
    Entier denominateur;
public:
    Rationnel(int n, int d) {
        if(d!=0) {
            numerateur(n);
            denominateur(d);
        }
        else {
            throw CalculException("Denominateur de valeur 0");
        }
    }
    Entier getNumerateur() const {return numerateur;}
    Entier getDenominateur() const {return denominateur;}
    void setNumerateur(int n) {numerateur(Entier(n));}
    void setDenominateur(int d) {
        if(d!=0)
            denominateur(Entier(d));
        else
            throw CalculException("Denominateur de valeur 0");
    }
    void simplifier();
    static bool isRationnel(const QString& s);
    Entier& toEntier() const;
    Reel& toReel() const;
    Entier pgcd(const Entier& a, const Entier& b);
};

class Reel : public DataReelle {
private:
    double valeur;
public:
    Reel(double d) : valeur(d) {}
    double getValeur() const {return valeur;}
    void setValeur(double v) const {valeur =v;}
    static bool isReel(const QString& s);
    Entier& toEntier() const;
    Rationnel& toRationnel() const;
};

class Complexe : public Data {
private:
    DataReelle partie_reelle;
    DataReelle partie_imaginaire;
public:
    Complexe(DataReelle r, DataReelle i) : partie_reelle(r), partie_imaginaire(i) {}
    DataReelle getReel() const {return partie_reelle;}
    DataReelle getImaginaire() const {return partie_imaginaire;}
    void setReel(DataReelle r) {partie_reelle(r);}
    void setImaginaire(DataReelle i) {partie_imaginaire(i);}
    static bool isComplexe(const QString& s);
};

}
#endif // DATA_H
