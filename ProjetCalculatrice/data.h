#ifndef DATA_H
#define DATA_H

#include <string>
#include "calculexception.h"

namespace Nombre {

class Data {
public:
    Data() {}
};

class DataReelle : public Data {
public:
    DataReelle() {}
};

class Entier : public DataReelle {
private:
    int valeur;
public:
    Entier(int i) : valeur(i) {}
    int getValeur() const {return valeur;}
    void setValeur(int i) {valeur = i;}
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
};

class Reel : public DataReelle {
private:
    double valeur;
public:
    Reel(double d) : valeur(d) {}
    double getValeur() const {return valeur;}
    void setValeur(double v) const {valeur =v;}
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
};

// A définir
class Operateur : public Data {
private:
    string type;
};

}
#endif // DATA_H
