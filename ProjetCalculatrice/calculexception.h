#ifndef CALCULEXCEPTION_H
#define CALCULEXCEPTION_H

/**
 * \file CalculException.h
 * \brief Classe de gestion des erreurs
 * \author Nicolas Biehler/Jean-Baptiste Arzounian
 *
 */

#include <string>

/*! \class CalculException
   * \brief classe gerant les exceptions du programme
   *
   */
class CalculException {
private:
    std::string erreur; /*!< Description de l'erreur */
public:
    /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe CalculException
         *
         *  \param s : description de l'erreur
         */
    CalculException(const std::string s) : erreur(s) {}

    /*!
         *  \brief retourne l'erreur
         *
         */
    const std::string getErreur() const {return erreur;}
};

#endif // CALCULEXCEPTION_H
