#ifndef PILE_H
#define PILE_H

#include <QStack>
#include <data.h>

template <typename T>
class Pile : public QStack<T*>{

public:
    Pile(){}
    ~Pile(){
        for(int i=0 ; i<this->size();i++)
            delete this->pop();
    }
    void SWAP(unsigned int x, unsigned int y); //echange les elements x & y de la pile
    T& SUM(const unsigned int x)const;   // Renvoie la Somme les x premiers elements de la pile
    T& MEAN(const unsigned int x)const;  //  Renvoie la Moyenne des x premiers elements de la pile
    void CLEAR(){ this->clear();}       // Vide la pile
    void DUP()const;   // Duplique le premier element de la pile
    void DROP(); //Libere le premier element de la pire
    Pile<T>& clone();           // Renvoie une reference vers une copie de la pile
    void addPile(T* x) {this->push(x);}  //Ajoute un element dans la pile
    int taille() {return this->size();}
    Pile<T> &pileResultat() const; // retourne les resultats seulement
};



#endif // PILE_H
