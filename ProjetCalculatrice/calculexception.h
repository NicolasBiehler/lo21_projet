#ifndef CALCULEXCEPTION_H
#define CALCULEXCEPTION_H

#include <string>

class CalculException {
private:
    std::string erreur;
public:
    CalculException(const std::string s) : erreur(s) {}
    const std::string getErreur() const {return erreur;}
};

#endif // CALCULEXCEPTION_H
