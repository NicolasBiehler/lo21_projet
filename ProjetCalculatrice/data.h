#ifndef DATA_H
#define DATA_H

/**
 * \file Data.h
 * \brief Classe Data contenant les différents types de données
 * \author Nicolas Biehler/Jean-Baptiste Arzounian
 *
 */

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

static QString OPERATEUR[]={"+","-","*","DIV","%","^","SIGN","SIN","COS","TAN","TANH",
                       "SINH","COSH","LN","LOG","INV","SQRT","SQR","CUBE","!"};

class DataReelle;
class Entier;
class Reel;
class Rationnel;
class Complexe;
class Expression;
class Operateur;

/*! \class Data
   * \brief classe dont hérite toutes les autres
   *
   */
class Data {
public:
            /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         */
    Data() {}
                /*!
         *  \brief renvoie l'information en QString de la classe
         *
         *
         */
    virtual QString& toString() const=0;
                /*!
         *  \brief clone la classe
         *
         *
         */
    virtual Data& clone() const=0;
};
/*! \class DataReelle
   * \brief classe mère de Entier, Rationnel et Reel
   *
   */
class DataReelle : public Data {
public:
            /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         */
    DataReelle() {}
                    /*!
         *  \brief clone la classe
         *
         *
         */
    virtual DataReelle& clone() const=0;
                    /*!
         *  \brief transforme la Data en Entier
         *
         *
         */
    virtual Nombre::Entier& toEntier() const=0;
                    /*!
         *  \brief transforme la Data en Reel
         *
         *
         */
    virtual Nombre::Reel& toReel() const=0;
                        /*!
         *  \brief transforme la Data en Rationnel
         *
         *
         */
    virtual Nombre::Rationnel& toRationnel() const=0;
};

/*! \class Entier
   * \brief classe représentant les nombres entiers
   *
   */
class Entier : public DataReelle {
private:
    int valeur; /*!< valeur de l'entier */
public:
            /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         * \param i : valeur de l'entier
         */
    Entier(int i) : valeur(i) {}
    
                /*!
         *  \brief Constructeur par recopie
         *
         *  Constructeur de la classe
         *
         * \param e : entier à copier
         */
    Entier(const Entier& e) : valeur(e.valeur){}
                /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         * \param s : qstring ayant la valeur de l'entier
         */
    Entier(const QString &s) {valeur = s.toInt();}
                      /*!
         *  \brief retourne la valeur
         *
         *
         */ 
    int getValeur() const {return valeur;}
                       /*!
         *  \brief donne une nouvelle valeur
         *
         *  \param i : nouvelle valeur
         */
    void setValeur(int i) {valeur = i;}
    Entier& toEntier() const{return this->clone();}
    Reel& toReel() const;
    Rationnel& toRationnel() const;
                       /*!
         *  \brief test si une string est un entier
         *
         *  \param s : la QString a tester
         */
    static bool isEntier(const QString& s);
    QString& toString() const {
        QString* s = new QString(QString::number(valeur));
        QString& ref = *s;
        return ref;
    }
    Entier& clone() const {
        Entier *e = new Entier(valeur);
        Entier &ref = *e;
        return ref;
    }
};
/*! \class Rationnel
   * \brief classe représentant les nombres rationnels
   *
   */
class Rationnel : public DataReelle {
private:
    Entier* numerateur; /*!< numérateur du rationnel */
    Entier* denominateur; /*!< dénominateur du rationnel */
public:
            /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         * \param n : numerateur
         * \param d : denominateur
         */
    Rationnel(int n, int d) {
        if(d!=0) {
            numerateur = new Entier(n);
            denominateur = new Entier(d);
        }
        else {
            throw CalculException("Denominateur de valeur 0");
        }
    }
                    /*!
         *  \brief Constructeur par recopie
         *
         *  Constructeur de la classe
         *
         * \param e : rationnel à copier
         */
    Rationnel(const Rationnel& e) {
        numerateur->setValeur(e.getNumerateur().clone().getValeur());
        denominateur->setValeur(e.getDenominateur().clone().getValeur());
    }
                    /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         * \param s : qstring ayant la valeur du rationnel
         */
    Rationnel(const QString &s){    
        QString copie(s);
        numerateur=new Entier((copie.section('/',0,0)).toInt());
        denominateur=new Entier((copie.section('/',1,1)).toInt());
        if (denominateur==0) throw CalculException("Division par 0");
        this->simplifier();
    }
                /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe
         */
    ~Rationnel() {
        delete numerateur;
        delete denominateur;
    }
                /*!
         *  \brief retourne le numerateur
         *
         */
    Entier& getNumerateur() const {return numerateur->clone();}
                    /*!
         *  \brief retourne le denominateur
         *
         */
    Entier& getDenominateur() const {return denominateur->clone();}
                    /*!
         *  \brief change le numerateur
         *  \param n : nouvelle valeur
         */
    void setNumerateur(int n) {numerateur->setValeur(n);}
                    /*!
         *  \brief change le denominateur
         *  \param d : nouvelle valeur
         */
    void setDenominateur(int d) {
        if(d!=0)
            denominateur->setValeur(d);
        else
            throw CalculException("Denominateur de valeur 0");
    }
                    /*!
         *  \brief simplifie le rationnel en utilisant le pvcd
         *
         */
    void simplifier();
                           /*!
         *  \brief test si une string est un rationnel
         *
         *  \param s : la QString a tester
         */
    static bool isRationnel(const QString& s);
    Rationnel& toRationnel() const {return this->clone();}
    Entier& toEntier() const;
    Reel& toReel() const;
                           /*!
         *  \brief retourne le pvcd
         *
         *  \param a : entier a
         * \param b : entier b
         */
    Entier pgcd(const Entier& a, const Entier& b);
    QString& toString() const {
        QString& s1 = numerateur->toString();
        QString& s2 = denominateur->toString();
        QString* s = &s1.append(" / ").append(&s2);
        QString& ref = *s;
        return ref;
    }
    Rationnel& clone() const {
        Rationnel *e = new Rationnel(numerateur->getValeur(),denominateur->getValeur());
        Rationnel &ref = *e;
        return ref;
    }
};
/*! \class Reel
   * \brief classe représentant les nombres réels
   *
   */
class Reel : public DataReelle {
private:
    double valeur; /*!< valeur du réel */
public:
            /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         * \param d : valeur du réel
         */
    Reel(double d) : valeur(d) {}
    
                /*!
         *  \brief Constructeur par recopie
         *
         *  Constructeur de la classe
         *
         * \param e : reel à copier
         */
    Reel(const Reel& e) {
        valeur = e.getValeur();
    }
                /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         * \param s : qstring ayant la valeur de l'entier
         */
    Reel(const QString &s){
        valeur = s.toDouble();
    }
     /*!
         *  \brief retourne la valeur du réel
         *
         */
    double getValeur() const {return valeur;}
         /*!
         *  \brief change la valeur du réel
         * \param v : nouvelle valeur
         */
    void setValeur(double v) {valeur =v;}
                           /*!
         *  \brief test si une string est un reel
         *
         *  \param s : la QString a tester
         */
    static bool isReel(const QString& s);
    Reel& toReel() const {return this->clone();}
    Entier& toEntier() const;
    Rationnel& toRationnel() const;
    QString& toString() const {
        QString* s = new QString(QString::number(valeur));
        QString& ref = *s;
        return ref;
    }
    Reel& clone() const {
        Reel *e = new Reel(valeur);
        Reel &ref = *e;
        return ref;
    }
};
/*! \class Complexe
   * \brief classe représentant les nombres complexes
   *
   */
class Complexe : public Data {
private:
    DataReelle * partie_reelle; /*!< partie réelle du complexe */
    DataReelle * partie_imaginaire; /*!< partie imaginaire du complexe */
public:
            /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         * \param r : valeur de la partie réelle
         * \param i : valeur de la partie imaginaire
         */
    Complexe(const DataReelle& r, const DataReelle& i) {
        DataReelle& dr = r.clone();
        DataReelle& di = i.clone();
        partie_reelle = &dr;
        partie_imaginaire = &di;
    }
                    /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         * \param s : qstring ayant la valeur du complexe
         */
    Complexe(const QString &s){
        QString copie(s);
      //  partie_reelle = Factory::creer(copie.section('$',0,0));
      //  partie_imaginaire = Factory::creer(copie.section('$',1,1));
    }
                /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe
         *
         */
    ~Complexe(){
        delete partie_reelle;
        delete partie_imaginaire;
    }
                /*!
         *  \brief retourne la partie réelle
         *
         *
         */
    DataReelle& getReel() const {return partie_reelle->clone();}
                    /*!
         *  \brief retourne la partie imaginaire
         *
         *
         */
    DataReelle& getImaginaire() const {return partie_imaginaire->clone();}
                        /*!
         *  \brief change la partie réelle
         *
         * \param i : nouvelle valeur
         */
    void setReel(const DataReelle& r) {
        DataReelle& dr = r.clone();
        partie_reelle = &dr;
    }
                    /*!
         *  \brief change la partie imaginaire
         *
         * \param i : nouvelle valeur
         */
    void setImaginaire(const DataReelle& i) {
        DataReelle& di = i.clone();
        partie_imaginaire = &di;
    }
                           /*!
         *  \brief test si une string est un complexe
         *
         *  \param s : la QString a tester
         */
    static bool isComplexe(const QString& s);
    QString& toString() const {
        QString s1 = partie_reelle->toString();
        QString s2 = partie_imaginaire->toString();
        QString* s = new QString(s1 + " $ " + s2);
        QString& ref = *s;
        return ref;
    }
    Complexe& clone() const {
        Complexe *e = new Complexe(*partie_reelle, *partie_imaginaire);
        Complexe &ref = *e;
        return ref;
    }
};

/*! \class Expression
   * \brief classe représentant les expressions
   *
   */
class Expression : public Data {
private:
    QString exp; /*!< expression */
public:
                    /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         * \param s : qstring ayant la valeur de l'expression
         */
    Expression(QString s) : exp(s) {}
    ~Expression() {}
                        /*!
         *  \brief change la valeur de l'expression
         *
         * \param s : qstring ayant la valeur de l'expression
         */
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
                           /*!
         *  \brief test si une string est une expression
         *
         *  \param s : la QString a tester
         */
    static bool isExpression(const QString& s);
};

/*! \class Operateur
   * \brief classe représentant les opérateurs
   *
   */
class Operateur : public Data {
private:
    QString op; /*!< opérateur */
public:
                    /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         * \param s : qstring ayant la valeur de l'opérateur
         */
    Operateur(const QString &s) {QString copie(s); op=copie;}
                        /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe
         *
         */
    ~Operateur(){}
                        /*!
         *  \brief change l'opérateur
         *
         *
         * \param s : qstring ayant la valeur de l'opérateur
         */
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
                           /*!
         *  \brief test si une string est un opérateur
         *
         *  \param s : la QString a tester
         */
    static bool isOperateur(const QString& s);
                           /*!
         *  \brief test si une string est un opérateur binaire
         *
         *  \param s : la QString a tester
         */
    static bool isBinaire(const QString& s);
                               /*!
         *  \brief trouve l'opérateur correspondant er retourne son index dans le tableau
         *
         *  \param s : la QString correspondant à l'opérateur
         */
    static int findOperateur(const QString& s);
};

}
#endif // DATA_H
