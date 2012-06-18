#ifndef COLLECTION_ONGLET_H
#define COLLECTION_ONGLET_H

/**
 * \file Collection_onglet.h
 * \brief Classe de gestion des onglets
 * \author Nicolas Biehler/Jean-Baptiste Arzounian
 *
 */

#include <QVector>
#include "onglet.h"
#include <fstream>
#include "calculexception.h"
#include "pile.h"
#include <QtXml/QDomDocument>
#include <QFile>
#include "data.h"

/*! \class Collection_onglet
   * \brief classe gérant l'ensemble des onglets de l'application
   *
   */
class Collection_Onglet : public QVector<Onglet *>
{
private :
    int actif; /*!< état de l'instance */
    static Collection_Onglet * instance; /*!< l'instance de la classe */
        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe, privé car design pattern singleton
         *
         */
    Collection_Onglet(){}
            /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe, privé car design pattern singleton
         *
         */
    ~Collection_Onglet();
        
        /*!
         *  \brief operateur d'affectation, privé car singleton
         *
         *  \param x : une collection d'onglet à recopier
         *
         */
    void operator=(const Collection_Onglet&);
public:
        /*!
         *  \brief change l'entier actif de la classe
         *
         *  \param x : nouvelle valeur de actif
         *
         */
    void SetActif(const int x) {actif=x;}
       /*!
         *  \brief retourne actif
         *
         */
    int GetActif() const {return actif;}
       /*!
         *  \brief retourne l'instance de la classe
         *
         */
    static Collection_Onglet& GetInstance();
       /*!
         *  \brief libère l'instance de la classe
         *
         */
    static void ReleaseInstance();
       /*!
         *  \brief ajoute un onglet à la classe
         *
         *  \param monOnglet : pointeur sur l'onglet à ajouter à la collection
         */
    void ajouterOnglet(Onglet * monOnglet);
       /*!
         *  \brief retourne la taille de la collection
         *
         */
    int taille(){return this->count();}
       /*!
         *  \brief supprime un onglet de la collection
         *
         *  \param index : index de l'onglet à supprimer
         */
    void supprimerOnglet(int index);
       /*!
         *  \brief sauvegarde le contexte du programme dans un document xml
         *
         */
    void saveContexte();
       /*!
         *  \brief charge le contexte du programme depuis un document xml
         *
         */
    void chargerContexte();
};

#endif // COLLECTION_ONGLET_H

