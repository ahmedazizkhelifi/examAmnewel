/* #ifndef MCovid19Local_H
#define MCovid19Local_H
#include "Malade.h"
class MCovid19Local : Malade{
    private:
        string region;
        int nbPersonneContacte;
    public:
        MCovid19Local(string, int);
        string getRegion();
        friend ostream& operator << (ostream&, MCovid19Local&);
        friend istream& operator >> (istream&, MCovid19Local&);

};
#endif */

#include <iostream>
#include "MCovid19Local.h"
using namespace std;

MCovid19Local::MCovid19Local(string _cin, string _nom, string _prenom,bool _etat, string _region, int _nbPersonneContacte) : Malade(_cin,_nom,_prenom,_etat)
{
    region = _region;
    nbPersonneContacte = _nbPersonneContacte;
}
string MCovid19Local::getRegion(){
    return region;
}

ostream& operator<< (ostream& out, MCovid19Local& MLocal){
    Malade M = static_cast<Malade>(MLocal);
    out << M << "\nRegion: " << MLocal.region << "\nNombre de personne contacte: " << MLocal.nbPersonneContacte;
    return out;
}

istream& operator>> (istream& in, MCovid19Local& MLocal){
    Malade M = static_cast<Malade>(MLocal);
    in >> M;
    //MLocal = M;
    cout << "Region: ";
    in >> MLocal.region;
    cout << "Nombre de personne contacte: ";
    in >> MLocal.nbPersonneContacte;
    return in;
}

/* 
istream& operator>>(istream& in,Malade& M){
    cout << "Cin: ";
    in >> M.cin;

    cout << "Nom: ";
    in >> M.nom;

    cout << "Prenom: ";
    in >> M.prenom;
    return in;
} 

 */