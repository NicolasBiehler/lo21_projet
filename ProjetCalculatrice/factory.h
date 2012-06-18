#ifndef FACTORY_H
#define FACTORY_H

/**
 * \file Factory.h
 * \brief Classe Factory créant les données
 * \author Nicolas Biehler/Jean-Baptiste Arzounian
 *
 */

#include <QStringList>
#include "data.h"
#include "operateur.h"

/*! \class Factory
   * \brief classe gérant la création des différents éléments de données du programme
   *
   */
class Factory {
private:
    static Factory* instance; /*!< l'instance de la classe */
            /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe, privé car design pattern singleton
         *
         */
    Factory(){}
                /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe, privé car design pattern singleton
         *
         */
    ~Factory(){}
                /*!
         *  \brief Constructeur
         *
         *  Constructeur par recopie, privé car design pattern singleton
         *  \param f : factory
         *
         */
    Factory(const Factory& f);
                /*!
         *  \brief Operateur d'affectation
         *
         *  privé car design pattern singleton
         *  \param f : factory
         *
         */
    Factory& operator=(const Factory& f);
public:
       /*!
         *  \brief retourne l'instance de la classe
         *
         */
    static Factory& getInstance();
           /*!
         *  \brief libère l'instance de la classe
         *
         */
    static void releaseInstance();
           /*!
         *  \brief cree une nouvelle Data à partir d'une QString et la renvoie
         *
         *  \param s : QString servant de base à la création de la donnée
         */
    Nombre::Data* creer(QString s);
};

/*! \class EntierFactory
   * \brief classe gérant la création des Entier
   *
   */
class EntierFactory : public Factory {
public:
           /*!
         *  \brief cree une nouvelle Data à partir d'une QString et la renvoie
         *
         *  \param s : QString servant de base à la création de la donnée
         */
    static Nombre::Entier& creer(QString s);
};

/*! \class ReelFactory
   * \brief classe gérant la création des Reel
   *
   */
class ReelFactory : public Factory {
public:
           /*!
         *  \brief cree une nouvelle Data à partir d'une QString et la renvoie
         *
         *  \param s : QString servant de base à la création de la donnée
         */
    static Nombre::Reel& creer(QString s);
};

/*! \class RationnelFactory
   * \brief classe gérant la création des Rationnel
   *
   */
class RationnelFactory : public Factory {
public:
           /*!
         *  \brief cree une nouvelle Data à partir d'une QString et la renvoie
         *
         *  \param s : QString servant de base à la création de la donnée
         */
    static Nombre::Rationnel& creer(QString s);
};

/*! \class ComplexeFactory
   * \brief classe gérant la création des Complexe
   *
   */
class ComplexeFactory : public Factory {
public:
           /*!
         *  \brief cree une nouvelle Data à partir d'une QString et la renvoie
         *
         *  \param s : QString servant de base à la création de la donnée
         */
    static Nombre::Complexe& creer(QString s);
};

/*! \class ExpressionFactory
   * \brief classe gérant la création des Expression
   *
   */
class ExpressionFactory : public Factory {
public:
           /*!
         *  \brief cree une nouvelle Data à partir d'une QString et la renvoie
         *
         *  \param s : QString servant de base à la création de la donnée
         */
    static Nombre::Expression& creer(QString s);
};

/*! \class OperateurFactory
   * \brief classe gérant la création des Operateur
   *
   */
class OperateurFactory : public Factory {
public:
           /*!
         *  \brief cree une nouvelle Data à partir d'une QString et la renvoie
         *
         *  \param s : QString servant de base à la création de la donnée
         */
    static Nombre::Operateur& creer(QString s);
};

#endif // FACTORY_H
