#include "onglet.h"

Onglet::Onglet() : QTabWidget()
{
    this->degre=true;
    this->complexe=false;
    this->type=Integer;
}

Onglet::~Onglet(){
    delete gestion;
}

std::string Onglet::saveContexte() const {
    std::stringstream s;
    int i=0;
    s << "<paffichage>";
    for(i=0 ; i<this->gestion->getAffichage().size() ; i++) {
        s << "<data>";
        s << this->gestion->getAffichage().pop();
        s << "</data>";
    }
    s << "</paffichage>";

    s << "<pstockage>";
    for(i=0 ; i<this->gestion->getStockage().size() ; i++) {
        s << "<data>";
        s << this->gestion->getStockage().pop()->toString().toStdString();
        s << "</data>";
    }
    s << "</pstockage>";

    s << "<pretablir>";
    for(i=0 ; i<this->gestion->getRetablir().size() ; i++) {
        s << "<data>";
        s << this->gestion->getRetablir().pop()->toString().toStdString();
        s << "</data>";
    }
    s << "</pretablir>";

    if(degre)
        s << "<degre>O</degre>";
    else
        s << "<degre>N</degre>";

    if(complexe)
        s << "<complexe>O</complexe>";
    else
        s << "<complexe>N</complexe>";

    switch(type) {
    case Integer:
        s << "<type>integer</type>";
        break;
    case Real :
        s << "<type>real</type>";
        break;
    case Ratio:
        s << "<type>ratio</type>";
        break;
    }

    return s.str();
}
