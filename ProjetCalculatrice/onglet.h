#ifndef ONGLET_H
#define ONGLET_H

/**
 * \file Onglet.h
 * \brief Classe Onglet
 * \author Nicolas Biehler/Jean-Baptiste Arzounian
 *
 */

#include <QStack>
#include <QTabWidget>
#include <QWidget>
#include "datagestion.h"
#include "pile.h"
#include <string>
#include <sstream>


enum Constante{Integer,Real,Ratio};

/*! \class Onglet
   * \brief classe représentant un onglet de la calculatrice
   *
   */
class Onglet : public QTabWidget
{
private:
    DataGestion *gestion; /*!< instance de datagestion */
    bool degre; /*!< booléen si degré activé */
    bool complexe; /*!< booléen si complexe activé */
    Constante type; /*!< type de constante paramétré sur l'interface */

public:
            /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         */
    Onglet();
                /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe
         *
         */
    ~Onglet();
/*!
*  \brief change la valeur du booléen complexe
*
*  \param val : nouvelle valeur du booléen
*/
    void setComplexe(const bool val){this->complexe=val;}
    /*!
*  \brief change la valeur du booléen degré
*
*  \param val : nouvelle valeur du booléen
*/
    void setDegre(const bool val){this->degre=val;}
    /*!
*  \brief change la valeur du type
*
*  \param val : nouvelle valeur du type
*/
    void setType(const Constante val){this->type=val;}
    /*!
*  \brief retourne le booléen complexe
*
*/
    bool getComplexe()const {return complexe;}
        /*!
*  \brief retourne le booléen degré
*
*/
    bool getDegre()const {return degre;}
        /*!
*  \brief retourne l'instance de datagestion
*
*/
    DataGestion& getDataGestion() const{return *gestion;}
        /*!
*  \brief retourne le type paramétré
*
*/
    Constante getType()const{return type;}
        /*!
*  \brief donne une nouvelle DataGestion
*
* \param g : nouvelle DataGestion
*/
    void setDataGestion(DataGestion& g) {
        delete gestion;
        gestion=&g;
    }
        /*!
*  \brief vide la pile de stockage
*
*/
    void viderStockage(){gestion->getStockage().CLEAR();}
            /*!
*  \brief retourne la taille de la pile de stockage
*
*/
    int tailleStockage(){return gestion->getStockage().count();}
            /*!
*  \brief sauve le contexte des piles et des booléens de l'onglet
*
*/
    std::string sauverContexte() const;
};



#endif // ONGLET_H
