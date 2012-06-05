#ifndef OPERATEUR_H
#define OPERATEUR_H

#include "data.h"

namespace Operateur {

class Operateur : public Data {
public:
    virtual Data plus()=0;
    virtual Data moins()=0;
    virtual Data div()=0;
    virtual Data mult()=0;
    virtual Data pow()=0;
    virtual Data mod()=0;
    virtual Data sign()=0;
    virtual Data sin()=0;
    virtual Data sinh()=0;
    virtual Data cos()=0;
    virtual Data cosh()=0;
    virtual Data tan()=0;
    virtual Data tanh()=0;
    virtual Data ln()=0;
    virtual Data log()=0;
    virtual Data inv()=0;
    virtual Data sqrt()=0;
    virtual Data sqr()=0;
    virtual Data cube()=0;
    virtual Data fact()=0;

};

class EntierOperateur : public Operateur {

};

class ReelOperateur : public Operateur {

};

class RationnelOperateur : public Operateur {

};

class ComplexeOperateur : public Operateur {

};

#endif // OPERATEUR_H
