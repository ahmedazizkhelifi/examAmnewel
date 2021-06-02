#ifndef MALADE_H
#define MALADE_H
using namespace std;
class Malade{
    protected:
      string cin;
      string nom;
      string prenom;
      bool etat; // 1: grave, 0: stable
    public:
    Malade(string _cin, string _nom, string _prenom,bool _etat){cin = _cin; nom = _nom; prenom = _prenom; etat = _etat;}
    bool getEtat(){return etat;}
    friend ostream& operator << (ostream&, Malade&);
    friend istream& operator >> (istream&, Malade&);
    virtual string getRegion(){return "";}
    virtual string getPays(){return "";}

};

#endif

