#ifndef COLLECTION_ONGLET_H
#define COLLECTION_ONGLET_H

#include <QVector>
#include "onglet.h"
#include <fstream>
#include "calculexception.h"

class Collection_Onglet : public QVector<Onglet *>
{
private :
    int actif;
    static Collection_Onglet * instance;
    Collection_Onglet(){}
    ~Collection_Onglet(){}
    void operator=(const Collection_Onglet&);
public:
    void SetActif(const int x) {actif=x;}
    int GetActif() const {return actif;}
    static Collection_Onglet& GetInstance();
    static void LibereInstance();
    void ajouterOnglet(Onglet * monOnglet);
    int taille(){return this->count();}
    void supprimerOnglet(int index);
    void saveContexte();
    void chargerContexte();
};

#endif // COLLECTION_ONGLET_H

