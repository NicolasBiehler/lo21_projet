#ifndef DATA_H
#define DATA_H

#include <string>

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
};

class Reel : DataReelle {
private:
    Entier partie_entiere;
    Entier partie_decimale;
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
