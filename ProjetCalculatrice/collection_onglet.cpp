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

void Collection_Onglet::saveContexte() {
    std::ofstream fsave("./save.dat");
    if(!fsave) {
        throw CalculException("Ouverture fichier impossible, sauvegarde non assuree");
    }
    Onglet *o;
    for(int i=0; i<Collection_Onglet::GetInstance().size(); ++i) {
        o = Collection_Onglet::GetInstance().at(i);
        fsave << "<onglet>";
        fsave << o->saveContexte();
        fsave << "</onglet>";
    }
    delete o;
    fsave.close();
}

void Collection_Onglet::chargerContexte() {
    std::ifstream fread("./save.dat");
    if(!fread){
        throw CalculException("Lecture fichier impossible, chargement impossible");
    }
    fread.close();
}
