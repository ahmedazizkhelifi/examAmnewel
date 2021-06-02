#include <iostream>
#include "hospitalisation.h"
#include "Malade.h"
#include "MCovid19Importe.h"
#include "MCovid19Local.h"
#include <typeinfo>
using namespace std;

Hospitalisation::Hospitalisation(string _nomHopital,int _nbPlaceMax){
    nomHopital= _nomHopital;
    nbPlaceMax = _nbPlaceMax;
}

void Hospitalisation::ajouterMalade(Malade *M){
    if(malades.size() == nbPlaceMax){
        cout << "Hopital plein!";
    }else if(M->getEtat()){
        //if(typeid(*M) == typeid(Malade)){
            cout << "Maalade\n";
            malades.push_front(M);
    }else{
        cout << "\nEtat stable.";
    }
}

void Hospitalisation::ajouterMalade(MCovid19Local *ML){
    if(malades.size() == nbPlaceMax){
        cout << "Hopital plein!";
    }else if (ML->getEtat()){
        //if(typeid(*M) == typeid(Malade)){
            cout << "MCovid19Local\n";
            Malade * M;
            M = new MCovid19Local(static_cast<const MCovid19Local&> (*ML));
            malades.push_front(M);
    }else{
        cout << "\nEtat stable.";
    }
}

void Hospitalisation::ajouterMalade(MCovid19Importe *MI){
    if(malades.size() == nbPlaceMax){
        cout << "Hopital plein!";
    }else if (MI->getEtat()){
        //if(typeid(*M) == typeid(Malade)){
            cout << "MCovid19Importe\n";
            Malade * M;
            M = new MCovid19Importe(static_cast<const MCovid19Importe&> (*MI));
            malades.push_front(M);
    }else{
        cout << "\nEtat stable.";
    }
}



void Hospitalisation::afficher(){
    for (Malade * const &M: malades)
        cout << *M <<"\n";
}

void Hospitalisation::chercher(string _){
    for (Malade * const &M: malades){
        
        if (M->getRegion() == _)
            cout << "\nRegion : " << _ << "\n" << *M;
        if (M->getPays() == _)
             cout << "\nPays : " << _ << "\n" << *M;
    }
}