#ifndef OPERATEUR_H
#define OPERATEUR_H

/**
 * \file Operateur.h
 * \brief Classe Operateur contenant les stratégies de calcul
 * \author Nicolas Biehler/Jean-Baptiste Arzounian
 *
 */

#include <typeinfo>
#include "data.h"
#include "pile.h"
#include "calculexception.h"

using namespace Nombre;

namespace Operation {

/*! \class OperateurStrategy
   * \brief classe virtuelle dont hérite toutes les stratégies
   *
   */
class OperateurStrategy{
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    virtual Data& calcul(Pile<Data> &p)=0;
};

/*! \class Plus
   * \brief classe permettant d'effectuer l'opération plus
   *
   */
class Plus : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
    /*!
    * \brief permet d'effectuer l'opération plus pour deux complexes
    *
    * \param a : le premier complexe
    * \param b : le second complexe
    */
    Complexe& plusComplexe(const Complexe &a, const Complexe &b);
        /*!
    * \brief permet d'effectuer l'opération plus pour deux rationnels
    *
    * \param r1 : le premier rationnel
    * \param r2 : le second rationnel
    */
    Rationnel& plusRationnel(const Rationnel& r1, const Rationnel& r2);
};

/*! \class Moins
   * \brief classe permettant d'effectuer l'opération moins
   *
   */
class Moins : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
        /*!
    * \brief permet d'effectuer l'opération moins pour deux complexes
    *
    * \param a : le premier complexe
    * \param b : le second complexe
    */
    Complexe& moinsComplexe(const Complexe &a, const Complexe &b);
        /*!
    * \brief permet d'effectuer l'opération moins pour deux rationnels
    *
    * \param r1 : le premier rationnel
    * \param r2 : le second rationnel
    */
    Rationnel& moinsRationnel(const Rationnel& r1, const Rationnel& r2);
};

/*! \class Div
   * \brief classe permettant d'effectuer l'opération div
   *
   */
class Div : public OperateurStrategy {
public:
        /*!
    * \brief permet d'effectuer l'opération div pour deux complexes
    *
    * \param a : le premier complexe
    * \param b : le second complexe
    */
    Complexe& divComplexe(const Complexe &a, const Complexe &b);
        /*!
    * \brief permet d'effectuer l'opération div pour deux rationnels
    *
    * \param r1 : le premier rationnel
    * \param r2 : le second rationnel
    */
    Rationnel& divRationnel(const Rationnel& r1, const Rationnel& r2);
        /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};

/*! \class Mult
   * \brief classe permettant d'effectuer l'opération multiplier
   *
   */
class Mult : public OperateurStrategy {
public:
        /*!
    * \brief permet d'effectuer l'opération mult pour deux complexes
    *
    * \param a : le premier complexe
    * \param b : le second complexe
    */
    Complexe& multComplexe(const Complexe &a, const Complexe &b);
            /*!
    * \brief permet d'effectuer l'opération mult pour deux rationnels
    *
    * \param r1 : le premier rationnel
    * \param r2 : le second rationnel
    */
    Rationnel& multRationnel(const Rationnel& r1, const Rationnel& r2);
        /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};

/*! \class Pow
   * \brief classe permettant d'effectuer l'opération pow
   *
   */
class Pow : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};

/*! \class Mod
   * \brief classe permettant d'effectuer l'opération modulo
   *
   */
class Mod : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};

/*! \class Sign
   * \brief classe permettant d'effectuer l'opération sign
   *
   */
class Sign : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};

/*! \class Sin
   * \brief classe permettant d'effectuer l'opération sin
   *
   */
class Sin : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};

/*! \class Cos
   * \brief classe permettant d'effectuer l'opération cos
   *
   */
class Cos : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};

/*! \class Tan
   * \brief classe permettant d'effectuer l'opération tan
   *
   */
class Tan : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};
/*! \class Sinh
   * \brief classe permettant d'effectuer l'opération sinh
   *
   */
class Sinh : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};
/*! \class Cosh
   * \brief classe permettant d'effectuer l'opération cosh
   *
   */
class Cosh : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};
/*! \class Tanh
   * \brief classe permettant d'effectuer l'opération tanh
   *
   */
class Tanh : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};
/*! \class ln
   * \brief classe permettant d'effectuer l'opération ln
   *
   */
class Ln : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};
/*! \class Log
   * \brief classe permettant d'effectuer l'opération log10
   *
   */
class Log : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};
/*! \class Inv
   * \brief classe permettant d'effectuer l'opération d'inversion
   *
   */
class Inv : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};
/*! \class Sqrt
   * \brief classe permettant d'effectuer l'opération racine carrée
   *
   */
class Sqrt : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};
/*! \class Sqr
   * \brief classe permettant d'effectuer l'opération carrée
   *
   */
class Sqr : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};
/*! \class Cube
   * \brief classe permettant d'effectuer l'opération cube
   *
   */
class Cube : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};
/*! \class Fact
   * \brief classe permettant d'effectuer l'opération factorielle
   *
   */
class Fact : public OperateurStrategy {
public:
    /*!
    * \brief permet d'effectuer le calcul et de mettre la pile à jour
    *
    * \param p : la pile à mettre à jour après calcul
    */
    Data& calcul(Pile<Data> *p);
};

}
#endif // OPERATEUR_H
