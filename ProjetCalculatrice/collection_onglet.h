#ifndef COLLECTION_ONGLET_H
#define COLLECTION_ONGLET_H

#include <QVector>
#include "onglet.h"

class Collection_Onglet : public QVector<Onglet *>
{
private :
    static Collection_Onglet * instance;
    Collection_Onglet(){}
    Collection_Onglet(const Collection_Onglet&){}
    ~Collection_Onglet(){}
    void operator=(const Collection_Onglet&);
public:
    static Collection_Onglet& GetInstance();
    static void LibereInstance();
    void ajouterOnglet(Onglet * monOnglet);
    int taille(){return this->count();}
    void supprimerOnglet(int index);
};

#endif // COLLECTION_ONGLET_H

