#ifndef DATA_H
#define DATA_H

#include <string>
#include "calculexception.h"

namespace Nombre {

class Data
{
public:
    Data();
};

class DataReelle : Data {
    // getValue
};

class Entier : DataReelle {
private:
    int valeur;
public:
    Entier(int i) : valeur(i) {}
};

class Rationnel : DataReelle {
private:
    Entier numerateur;
    Entier denominateur;
public:
    Rationnel(int n, int d) {
        if(d!=0) {
            numerateur(n);
            denominateur(d);
        }
        else {
            throw CalculException("Denominateur de valeur 0");
        }
    }
};

class Reel : DataReelle {
private:
    Entier partie_entiere;
    Entier partie_decimale;
public:
    Reel();
};

class Complexe : Data {
private:
    DataReelle partie_reelle;
    DataReelle partie_imaginaire;
};

class Operateur : Data {
private:
    string type;
};

}
#endif // DATA_H
