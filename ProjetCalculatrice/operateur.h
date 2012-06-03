#ifndef OPERATEUR_H
#define OPERATEUR_H

#include "data.h"

#define PLUS "+"
#define MOINS "-"
#define MULT "*"
#define DIV "/"
#define POW "POW"
#define MOD "MOD"
#define SIGN "SIGN"
#define SIN "SIN"
#define COS "COS"
#define TAN "TAN"
#define SINH "SINH"
#define COSH "COSH"
#define TANH "TANH"
#define LN "LN"
#define LOG "LOG"
#define INV "INV"
#define SQRT "SQRT"
#define SQR "SQR"
#define CUBE "CUBE"
#define FACT "!"

namespace Operateur {

class Operateur : public Data {
public:
    Operateur(QString op);
};

class Plus : public Operateur {

};

class Moins : public Operateur {

};

class Div : public Operateur {

};

class Mult : public Operateur {

};

class Pow : public Operateur {

};

class Mod : public Operateur {

};

class Sign : public Operateur {

};

class Sin : public Operateur {

};

class Cos : public Operateur {

};

class Tan : public Operateur {

};

class Sinh : public Operateur {

};

class Cosh : public Operateur {

};

class Tanh : public Operateur {

};

class Ln : public Operateur {

};

class Log : public Operateur {

};

class Inv : public Operateur {

};

class Sqrt : public Operateur {

};
}

class Sqr : public Operateur {

};

class Cube : public Operateur {

};

class Fact : public Operateur {

};
#endif // OPERATEUR_H
