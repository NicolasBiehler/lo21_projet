#ifndef DATAGESTION_H
#define DATAGESTION_H

#include <stack>
#include <string>
#include "data.h"

class DataGestion {
private:
    stack<string> pileReception;
    stack<Data> pileExecution;
public:
    DataGestion(stack<string> s) : pileReception(s) {}
    stack<Data> parse(string expression); // dans cette fonction : la factory
    stack<Data> calcul(); // appelle différente fonction suivant le contenu
};

#endif // DATAGESTION_H
