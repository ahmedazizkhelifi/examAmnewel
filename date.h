class Date{
    private:
        int jour;
        int mois;
        int annee;
    public:
        Date(int j=0, int m=0 ,int a=0){jour = j; mois= m;annee = a;}
        int getJour(){return jour;}
        int getMois(){return mois;}
        int getAnnee(){return annee;}

        void setJour(int j){jour = j;}
        void setMois(int m){mois = m;}
        void setAnnee(int a){annee = a;}
        void saisirDate(){
            int j,m,a;
            cout << "\nJour: ";
            cin >> j;
            cout << "Mois: ";
            cin >> m;
            cout << "Annee: ";
            cin >> a;
        } ;
};

