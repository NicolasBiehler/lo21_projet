#include "operateur.h"

using namespace std;

// on part du principe que l'operateur a ete depile
/*Data Operateur::Plus::calcul(Pile<Data>& p) {
    Data * res;
    //Data * op1 = p.pop();
    //Data * op2 = p.pop();

    switch(typeid(op1).name()) {
        case typeid(Entier).name() : // erf
            if(typeid(op2).name() == "Nombre::Entier") {
                res = op1.valeur + op2.valeur;
            }
            else if(typeid(op2).name() == "Nombre::Reel") {
                res = op1.toReel() + op2.valeur;
            }
            else if(typeid(op2).name() == "Nombre::Rationnel") {
                res = Plus::calcul(op1.toRationnel(), op2);
            }
            else if(typeid(op2).name() == "Nombre::Complexe") {
                // on ne peut pas. Why ?
            }
            else {
                // ERREUR
            }
            break;
        case "Nombre::Reel" :
            break;
        case "Nombre::Rationnel" :
            break;
        case "Nombre::Complexe" :
            break;
        default :
            break;
    }

    return res;
}*/
