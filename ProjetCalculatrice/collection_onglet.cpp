#include "collection_onglet.h"

Collection_Onglet* Collection_Onglet::instance=0;

Collection_Onglet& Collection_Onglet::GetInstance()
{
    if(instance==0)
        instance = new Collection_Onglet;
    return *instance;
}

void Collection_Onglet::ReleaseInstance()
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
    std::ofstream fsave("save.dat");
    if(!fsave) {
        throw CalculException("Ouverture fichier impossible, sauvegarde non assuree");
    }
    Onglet *o=0;
    fsave << "<root>";
    for(int i=0; i<Collection_Onglet::GetInstance().size(); ++i) {
        o = Collection_Onglet::GetInstance().at(i);
        fsave << "<onglet>";
        fsave << o->sauverContexte();
        fsave << "</onglet>";
    }

    fsave << "</root>";
    fsave.close();
}

void Collection_Onglet::chargerContexte() {
    QString file = "save.dat";
    QFile fread(file);
    fread.open(QFile::ReadOnly | QFile::Text);

    QDomDocument doc;
    doc.setContent(&fread, false);
    QDomElement racine = doc.documentElement();
    racine = racine.firstChildElement();
    while(!racine.isNull()) {
        if(racine.tagName()== "onglet"){
            //creation onglet
            Onglet* o = new Onglet();
            QDomElement element = racine.firstChildElement();
            while(!element.isNull()) {
                DataGestion * dg = new DataGestion();
                if(element.tagName()=="paffichage") {
                    Pile<QString> ps;
                    QDomElement data = element.firstChildElement();
                    while(!data.isNull()) {
                        Pile<QString> tmp1;
                        if(element.tagName()=="data") {
                            QString valeur = data.text();
                            tmp1.addPile(&valeur);
                        }
                        for(int i=0;i<tmp1.size();i++){
                            ps.addPile(tmp1.pop());
                        }
                    }
                    dg->setAffichage(ps);
                }
                else if(element.tagName()=="pstockage") {
                    Pile<Nombre::Data> pst;
                    QDomElement data = element.firstChildElement();
                    while(!data.isNull()) {
                        Pile<QString> tmp1;
                        if(element.tagName()=="data") {
                            QString valeur = data.text();
                            tmp1.addPile(&valeur);
                        }
                        for(int i=0;i<tmp1.size();i++){
                            pst.addPile(dg->getFactory().creer(*tmp1.pop()));
                        }
                    }
                    dg->setStockage(pst);
                }
                else if(element.tagName()=="pretablir") {
                    Pile<Nombre::Data> pr;
                    QDomElement data = element.firstChildElement();
                    while(!data.isNull()) {
                        Pile<QString> tmp1;
                        if(element.tagName()=="data") {
                            QString valeur = data.text();
                            tmp1.addPile(&valeur);
                        }
                        for(int i=0;i<tmp1.size();i++){
                            pr.addPile(dg->getFactory().creer(*tmp1.pop()));
                        }
                    }
                    dg->setStockage(pr);
                }
                else if(element.tagName()=="degre") {
                    QString d = element.text();
                    if(d=="O")
                        o->setDegre(true);
                    else
                        o->setDegre(false);
                }
                else if(element.tagName()=="complexe") {
                    QString c = element.text();
                    if(c=="O")
                        o->setComplexe(true);
                    else
                        o->setComplexe(false);
                }
                else if(element.tagName()=="type") {
                    QString t = element.text();
                    if(t=="integer")
                        o->setType(Integer);
                    else if(t=="real")
                        o->setType(Real);
                    else if(t=="ratio")
                        o->setType(Ratio);
                }
                o->setDataGestion(*dg);
                element = element.nextSiblingElement();
            }
            this->ajouterOnglet(o);
        }
        racine = racine.nextSiblingElement();
    }
    fread.close();
}

Collection_Onglet::~Collection_Onglet(){
    instance->at(0)->getDataGestion().getFactory().releaseInstance();
    saveContexte();
 }
