#ifndef PILE_H
#define PILE_H

/**
 * \file Pile.h
 * \brief Classe pile
 * \author Nicolas Biehler/Jean-Baptiste Arzounian
 *
 * Les piles, utilisant la template method, servent à garder les données du programme
 */

#include <QStack>
#include <data.h>

/*! \class Pile
   * \brief classe pile, gardant les données du programme
   *
   */
template <typename T>
class Pile : public QStack<T*>{

public:
    /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe Pile, sans argument
         *
         */
    Pile(){}
    
        /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe Pile, appelle le destructeur de chaque élément
         *
         */
    ~Pile(){
        for(int i=0 ; i<this->size();i++)
            delete this->pop();
    }
    
        /*!
         *  \brief échange les éléments x et y de la pile
         *
         *  \param x : élément de position x dans la pile
         *  \param y : élément de position y dans la pile
         *
         */
    void SWAP(unsigned int x, unsigned int y);
            /*!
         *  \brief Renvoie la Somme les x premiers elements de la pile
         *
         *  \param x : nombre d'éléments à sommer
         *
         */
    T& SUM(const unsigned int x)const;
                /*!
         *  \brief Renvoie la Moyenne des x premiers elements de la pile
         *
         *  \param x : nombre d'éléments à sommer puis à faire la moyenne
         *
         */
    T& MEAN(const unsigned int x)const;
                    /*!
         *  \brief vide la pile
         *
         *
         */
    void CLEAR(){ this->clear();}
         /*!
         *  \brief Duplique le premier element de la pile
         *
         */
    void DUP()const;
          /*!
         *  \brief libère le premier element de la pile
         *
         */    
    void DROP();
              /*!
         *  \brief Renvoie une reference vers une copie de la pile
         *
         */
    Pile<T>& clone();
               /*!
         *  \brief Ajoute un element dans la pile
         *
         *  \param x : élément à ajouter
         */   
    void addPile(T* x) {this->push(x);}
                /*!
         *  \brief retourne la taille de la pile
         *
         */      
    int taille() {return this->size();}
    
                   /*!
         *  \brief retourne les resultats seulement dans la pile de stockage
         *
         */   
    Pile<T> &pileResultat() const;
};



#endif // PILE_H
