#ifndef MCovid19Local_H
#define MCovid19Local_H
#include "Malade.h"
class MCovid19Local : public Malade{
    private:
        string region;
        int nbPersonneContacte;
    public:
        MCovid19Local(string,string,string,bool,string, int);
        string getRegion();
        friend ostream& operator << (ostream&, MCovid19Local&);
        friend istream& operator >> (istream&, MCovid19Local&);
        //string getNomAssurance(){return "";}
};
#endif