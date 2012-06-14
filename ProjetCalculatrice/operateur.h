#ifndef OPERATEUR_H
#define OPERATEUR_H

//#include <typeinfo>
#include "data.h"
#include "pile.h"

using namespace Nombre;

namespace Operateur {

class OperateurStrategy : public Data {
public:
    //virtual Data calcul(Pile<Data>& p)=0;
};

class Plus : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Moins : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Div : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Mult : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Pow : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Mod : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Sign : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Sin : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Cos : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Tan : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Sinh : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Cosh : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Tanh : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Ln : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Log : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Inv : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Sqrt : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Sqr : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Cube : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

class Fact : public OperateurStrategy {
    //Data calcul(Pile<Data>& p);
};

}
#endif // OPERATEUR_H
