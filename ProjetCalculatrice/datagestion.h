#ifndef DATAGESTION_H
#define DATAGESTION_H

/**
 * \file DataGestion.h
 * \brief Classe DataGestion servant de facade entre l'IHM et le reste du programme
 * \author Nicolas Biehler/Jean-Baptiste Arzounian
 *
 */

#include <QStack>
#include <QStringList>
#include <string>
#include "data.h"
#include "factory.h"
#include "pile.h"
#include "operateur.h"
#include "calculexception.h"

/*! \class DataGestion
   * \brief classe servant de facade entre les données du programme et l'interface
   * Permet de gérer tout le programme
   *
   */
class DataGestion {
private:
    Pile<QString> * pileAffichage; /*!< la pile d'affichage */
    Pile<Data> * pileStockage; /*!< la pile de calcul */
    Pile<Data> * pileRetablir; /*!< la pile servant à l'annulation/rétablissement */
    Factory* factoryInstance; /*!< l'instance de la factory */
    Operation::OperateurStrategy* calculStrategy; /*!< un pointeur sur un operateur général */
public:
            /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         */
    DataGestion();
                /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe
         *
         */
    ~DataGestion();
           /*!
         *  \brief retourne la pile de stockage
         *
         */
    Pile<Data>& getStockage() const {return *pileStockage;}
               /*!
         *  \brief retourne la pile rétablir
         *
         */
    Pile<Data>& getRetablir() const {return *pileRetablir;}
               /*!
         *  \brief retourne la pile d'affichage
         *
         */
    Pile<QString>& getAffichage() const {return *pileAffichage;}
               /*!
         *  \brief change la pile de stockage
         *
         * \param p : nouvelle pile
         */
    void setStockage(Pile<Data>& p) {
        delete pileStockage;
        pileStockage = &p;
    }
                   /*!
         *  \brief change la pile rétablir
         *
         * \param p : nouvelle pile
         */
    void setRetablir(Pile<Data>& p) {
        delete pileRetablir;
        pileRetablir = &p;
    }
    
                   /*!
         *  \brief change la pile d'affichage
         *
         * \param p : nouvelle pile
         */
    void setAffichage(Pile<QString>& p) {
        delete pileAffichage;
        pileAffichage = &p;
    }
                   /*!
         *  \brief retourne l'instance de la factory
         *
         */
    Factory& getFactory() const {return *factoryInstance;}
                   /*!
         *  \brief décode une entrée utlisateur
         *
         * Appel la factory, crée les Data qu'il faut, remplit les piles et appelle calcul
         *
         * \param expression : la QStrign entrée par l'utilisateur
         */
    void parse(QString expression);
                   /*!
         *  \brief effectue le calcul
         *
         * Utilise le pattern strategy des opérations pour calculer et mettre les piles à jour
         */
    void calcul();
  //  DataGestion& clone() const;
                 /*!
         *  \brief annule les x dernières opérations sur la pile de stockage
         *
         */
    void annuler();
                     /*!
         *  \brief rétablit les x dernières opérations sur la pile de stockage
         *
         */
    void retablir();
};

#endif // DATAGESTION_H
