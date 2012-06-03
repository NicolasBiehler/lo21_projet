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
#define EVAL "EVAL"


class Operateur : public Data {
public:
    Operateur(QString op);
};

#endif // OPERATEUR_H
