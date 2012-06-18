#include "pile.h"

template<typename T>
void Pile<T>::DROP(){
    if(this->isEmpty()) {
        throw CalculException("Operation impossible, la pile est vide");
    }
    delete this->pop();
}

template<typename T>
void Pile<T>::SWAP(unsigned int x, unsigned int y){
    if(x <= (unsigned int)this->size() && y <= (unsigned int)this->size()){
        T* tmp = *this->value(x);
        replace(x,*this->value(y));
        replace(y,tmp);
    }
}

template<typename T>
void Pile<T>::DUP() const{
    if(*this->isEmpty()){
        throw CalculException("Operation impossible la pile est vide");
    }

    T * copy = *this->top().clone();
    addPile(copy);
}

template<typename T>
Pile<T>& Pile<T>::clone(){
    Pile *copy = new Pile();
    for(unsigned int i = 0 ; i < this->size() ; ++i){
        T *temp = *this->value(i)->clone();
        copy->push(*temp);
    }
    return &copy;
}

template<typename T>
T& Pile<T>::SUM(const unsigned int x) const{
    if(x==0 || x>this->size()) {
        throw CalculException("SUM impossible, mauvais x");
    }
    Pile<T>& p = this->pileResultat();
    Operation::Plus * plus = new Operation::Plus();
    T* res;
    int i =0;
    while(i<x) {
        res = plus->calcul(p);
        i++;
        i++;
        p.addPile(res);
    }
    delete p;
    delete plus;
    T& ref = *res;
    return ref;
}

template<typename T>
T& Pile<T>::MEAN(const unsigned int x) const{
    T& tmp = this->SUM(x);
    Operation::Div * div = new Operation::Div();
    Pile<T> pileTmp;
    pileTmp.addPile(tmp);
    pileTmp.addPile(new Nombre::Entier(x));
    T* res = div->calcul(pileTmp);
    delete div;
    delete pileTmp;
    T& ref = *res;
    return ref;
}

template<typename T>
Pile<T>& Pile<T>::pileResultat() const{
    Pile<T> p = this->clone();
    Pile<T> res;
    for(int i=0;i<p.size();i++) {
        if(p.at(i).isOperateur()) {
            if(p.at(i).isBinaire()) {
                p.DROP();
                p.DROP();
                p.DROP();
            }
            else { // unaire
                p.DROP();
                p.DROP();
            }
        }
        else {
            res.addPile(p.pop());
        }
    }
    delete p;
    Pile<T>& ref = res;
    return ref;
}

