#include <iostream>
#include "Malade.h"
using namespace std;

istream& operator>>(istream& in,Malade& M){
    cout << "Cin: ";
    in >> M.cin;

    cout << "Nom: ";
    in >> M.nom;

    cout << "Prenom: ";
    in >> M.prenom;

    cout << "Etat [1: grave, 0: stable]: ";
    in >> M.etat;
    return in;
} 


ostream& operator<<(ostream& out,Malade& M){
    out << "Cin: " << M.cin << "\nNom: " << M.nom << "\nPrenom: " << M.prenom << "\nEtat: ";
    if (M.etat)
        out << "Grave";
    else
        out << "Stable";
    return out;
} 
