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
        copy->push(temp);
    }
    return &copy;
}
