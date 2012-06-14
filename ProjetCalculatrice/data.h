#ifndef DATA_H
#define DATA_H

#include <string>
#include <QString>
#include <QStringList>
#include <QRegExp>
#include <cmath>
#include "calculexception.h"

#define RATIONNEL "^[\\d]+\/[\\d]+$"
#define REEL "^[\\d]+[\.][\\d]+$"
#define COMPLEXE "^[\\d]+(([\.]|[\/])[\\d]+)?[\$][\\d]+(([\.]|[\/])[\\d]+)?$"
#define ENTIER "^[\\d]+$"
#define EXPRESSION "'"

namespace Nombre {

class DataReelle;
class Entier;
class Reel;
class Rationnel;
class Complexe;
class Expression;
class Operateur;

class Data {
public:
    Data() {}
    virtual QString& toString() const=0;
    virtual Data& clone() const=0;
};

class DataReelle : public Data {
public:
    DataReelle() {}
    virtual DataReelle& clone() const=0;
    virtual Nombre::Entier& toEntier() const=0;
    virtual Nombre::Reel& toReel() const=0;
    virtual Nombre::Rationnel& toRationnel() const=0;
};

class Entier : public DataReelle {
private:
    int valeur;
public:
    Entier(int i) : valeur(i) {}
    Entier(const Entier& e) : valeur(e.valeur){}
    int getValeur() const {return valeur;}
    void setValeur(int i) {valeur = i;}
    Entier& toEntier() const{return this->clone();}
    Reel& toReel() const;
    Rationnel& toRationnel() const;
    static bool isEntier(const QString& s);
    QString& toString() const {
        QString* s = new QString("" + valeur);
        QString& ref = *s;
        return ref;
    }
    Entier& clone() const {
        Entier *e = new Entier(valeur);
        Entier &ref = *e;
        return ref;
    }
};

class Rationnel : public DataReelle {
private:
    Entier* numerateur;
    Entier* denominateur;
public:
    Rationnel(int n, int d) {
        if(d!=0) {
            numerateur = new Entier(n);
            denominateur = new Entier(d);
        }
        else {
            throw CalculException("Denominateur de valeur 0");
        }
    }
    Rationnel(const Rationnel& e) {
        numerateur->setValeur(e.getNumerateur().clone().getValeur());
        denominateur->setValeur(e.getDenominateur().clone().getValeur());
    }

    ~Rationnel() {
        delete numerateur;
        delete denominateur;
    }

    Entier& getNumerateur() const {return numerateur->clone();}
    Entier& getDenominateur() const {return denominateur->clone();}
    void setNumerateur(int n) {numerateur->setValeur(n);}
    void setDenominateur(int d) {
        if(d!=0)
            denominateur->setValeur(d);
        else
            throw CalculException("Denominateur de valeur 0");
    }
    void simplifier();
    static bool isRationnel(const QString& s);
    Rationnel& toRationnel() const {return this->clone();}
    Entier& toEntier() const;
    Reel& toReel() const;
    Entier pgcd(const Entier& a, const Entier& b);
    QString& toString() const {
        QString* s = new QString(numerateur->toString() + " / " + denominateur->toString());
        QString& ref = *s;
        return ref;
    }
    Rationnel& clone() const {
        Rationnel *e = new Rationnel(numerateur->getValeur(),denominateur->getValeur());
        Rationnel &ref = *e;
        return ref;
    }
};

class Reel : public DataReelle {
private:
    double valeur;
public:
    Reel(double d) : valeur(d) {}
    Reel(const Reel& e) {
        valeur = e.getValeur();
    }
    double getValeur() const {return valeur;}
    void setValeur(double v) {valeur =v;}
    static bool isReel(const QString& s);
    Reel& toReel() const {return this->clone();}
    Entier& toEntier() const;
    Rationnel& toRationnel() const;
    QString& toString() const {
        QString s = QString::number(valeur);
        QString& ref = s;
        return ref;
    }
    Reel& clone() const {
        Reel *e = new Reel(valeur);
        Reel &ref = *e;
        return ref;
    }
};

class Complexe : public Data {
private:
    DataReelle * partie_reelle;
    DataReelle * partie_imaginaire;
public:
    Complexe(const DataReelle& r, const DataReelle& i) {
        DataReelle& dr = r.clone();
        DataReelle& di = i.clone();
        partie_reelle = &dr;
        partie_imaginaire = &di;
    }
    ~Complexe(){
        delete partie_reelle;
        delete partie_imaginaire;
    }

    DataReelle& getReel() const {return partie_reelle->clone();}
    DataReelle& getImaginaire() const {return partie_imaginaire->clone();}
    void setReel(const DataReelle& r) {
        DataReelle& dr = r.clone();
        partie_reelle = &dr;
    }
    void setImaginaire(const DataReelle& i) {
        DataReelle& di = i.clone();
        partie_imaginaire = &di;
    }
    static bool isComplexe(const QString& s);
    QString& toString() const {
        QString* s = new QString(partie_reelle->toString() + " $ " + partie_imaginaire->toString());
        QString& ref = *s;
        return ref;
    }
    Complexe& clone() const {
        Complexe *e = new Complexe(*partie_reelle, *partie_imaginaire);
        Complexe &ref = *e;
        return ref;
    }
};

class Expression : public Data {
private:
    QString exp;
public:
    Expression(QString s) : exp(s) {}
    ~Expression() {}
    void setExp(const QString& s) {exp = s;}
    Expression& clone() const {
        Expression *e = new Expression(exp);
        Expression &ref = *e;
        return ref;
    }
    QString& toString() const {
        QString * e = new QString(exp);
        QString& ref = *e;
        return ref;
    }
    static bool isExpression(const QString& s);
};

class Operateur : public Data {
private:
    QString op;
public:
    Operateur(QString s) : op(s) {}
    ~Operateur(){}
    void setOp(const QString& s) {op = s;}
    Operateur& clone() const {
        Operateur *e = new Operateur(op);
        Operateur& ref = *e;
        return ref;
    }
    QString& toString() const {
        QString *e = new QString(op);
        QString& ref = *e;
        return ref;
    }
};

}
#endif // DATA_H
