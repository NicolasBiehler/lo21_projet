#include "operateur.h"

// on part du principe que l'operateur a ete depile
Data Plus::calcul(Pile<Data>& p) {
    Data res;
    Data op1 = p.pop();
    Data op2 = p.pop();

    if(op1 == Nombre::Entier) { // moarf
        if(op2 == Nombre::Entier) {
            res = op1.valeur + op2.valeur;
        }
        else if(op2 == Nombre::Reel) {
            res = op1.toReel() + op2.valeur;
        }
        else if(op2 == Nombre::Rationnel) {
            res = Plus::calcul(op1.toRationnel(), op2); // erf
        }
        else if(op2 == Nombre::Complexe) {
            // on ne peut pas. Why ?
        }
        else {
            // ERREUR
        }
    }
    else if(op1 == Nombre::Rationnel) {

    }
    else if(op1 == Nombre::Reel) {

    }
    else if(op1 == Nombre::Complexe) {

    }
    else {
        // ERREUR
    }


    return res;
}
