#include <iostream>
#include "Malade.h"
#include "MCovid19Local.h"
#include "MCovid19Importe.h"
#include "hospitalisation.h"



#include <vector>
using namespace std;

/* void printInt(int *x){
    cout << x;
    float y = static_cast<float>(x);
    cout << y;
} */
int main(){
    Malade M("000","az","ab",1);
    Malade M1("000","az","ab",0);
    MCovid19Local ML("cin","Tounsiii","prenoom",1,"Ariana",5);
    MCovid19Local ML1("cin","Bringa","prenoom",1,"Ariana",5);
    MCovid19Importe MI("123","roberty","prenoom",1,"France","assur");

    Hospitalisation H("sbitar",10);

    H.ajouterMalade(&M);
    H.ajouterMalade(&M1);
    H.ajouterMalade(&ML);
    H.ajouterMalade(&ML1);
    H.ajouterMalade(&MI);
    

    H.chercher("Ariana");
    cout << "\n\n\n";
    H.chercher("France");
  
   //cout << &malades[0];
/*    for (auto const &i: malades) {
        std::cout << *i << std::endl;
    } */
    //H.ajouterMalade(ML);
    
    //MCovid19Importe MI("cin","noom","prenoom",1,"pays","ass");
/*     cin >> M;
    cout << "\n\n" << M;
    cout << ML; */
/*     vector<Malade*> malades;
    Malade *MM;
    MM = new MCovid19Local(static_cast<const MCovid19Local&> (ML));
    malades.push_back(MM);
    string a;
    
    cout << *malades[0]; */
    //p=new CompteEpargne(static_cast<const CompteEpargne&>(*A.tab[i]));

    /* if (typeid(x) == typeid(float))
        y = new float(static_cast<const float&>(x)); */
    //printInt(y);

} 