#include <iostream>
#include "MCovid19Importe.h"
using namespace std;

MCovid19Importe::MCovid19Importe(string _cin, string _nom, string _prenom,bool _etat, string _pays, string _nomAssurance) : Malade(_cin,_nom,_prenom,_etat)
{
    pays = _pays;
    nomAssurance = _nomAssurance;
    dateEntree.saisirDate();
}
string MCovid19Importe::getNomAssurance(){
    return nomAssurance;
}

string MCovid19Importe::getPays(){
    return pays;
}