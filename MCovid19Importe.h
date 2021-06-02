#ifndef MCovid19Importe_H
#define MCovid19Importe_H
#include "Malade.h"
#include "date.h"
class MCovid19Importe : public Malade{
    private:
        string pays;
        Date dateEntree;
        string nomAssurance;

    public:
    MCovid19Importe(string,string,string,bool,string,string);
    string getNomAssurance();
    string getPays();

};
#endif