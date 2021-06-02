#ifndef hospitalisation_H
#define hospitalisation_H

#include <list>
#include "Malade.h"
#include "MCovid19Local.h"
#include "MCovid19Importe.h"
using namespace std;
class Hospitalisation{
    private:
        string nomHopital;
        int nbPlaceMax;
        list<Malade *> malades;
    public:
        Hospitalisation(string,int);
        void ajouterMalade(Malade*);
        void ajouterMalade(MCovid19Local*);
        void ajouterMalade(MCovid19Importe*);
        void afficher();
        void chercher(string);
};

#endif

