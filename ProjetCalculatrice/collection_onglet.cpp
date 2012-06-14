#include "collection_onglet.h"

Collection_Onglet* Collection_Onglet::instance=0;

Collection_Onglet& Collection_Onglet::GetInstance()
{
    if(instance==0)
        instance = new Collection_Onglet;
    return *instance;
}

void Collection_Onglet::LibereInstance()
{
    if (instance != 0)
        delete instance;
}

void Collection_Onglet::ajouterOnglet(Onglet * monOnglet){
    Collection_Onglet::push_back(monOnglet);
}

void Collection_Onglet::supprimerOnglet(int index){
    Collection_Onglet::GetInstance().at(index)->viderStockage();
    Collection_Onglet::GetInstance().erase(Collection_Onglet::GetInstance().begin()+index);
}
