#ifndef POVODCI_HPP_INCLUDED
#define POVODCI_HPP_INCLUDED
enum BOJE{plava=1, crvena, crna, zuta, bela, zelena};
class Povodci{
protected:
    string marka;
    double duzina;
    string ime;
    BOJE bojapovodca;
    string materijal;
    bool pol;
public:
    Povodci(string m, double d, string i, BOJE b, string mt, bool p)
    {
    marka=m;
    duzina=d;
    ime=i;
    bojapovodca=b;
    materijal=mt;
    pol=p;
    }
    string getMarka()
    {
        return marka;
    }
    double getDuzina()
    {
        return duzina;
    }
    string getIme()
    {
        return ime;
    }
    BOJE getBojapovodca()
    {
        return bojapovodca;
    }
    string getMaterijal()
    {
        return materijal;
    }
    bool getPol()
    {
        return pol;
    }

    void povodac()
    {
        if(bojapovodca==1 || bojapovodca==3 || bojapovodca==5)
        pol=true;
        else pol=false;

    }
    void DodajPovodacUFajl()
    {
        ofstream fajl;
        fajl.open ("Povodac.txt", ios_base::app);
        fajl << getMarka() << ";" << getDuzina() << ";" << getIme() << ";" << getBojapovodca() << ";" << getMaterijal() << ";" << getPol() <<endl;
        fajl.close();
    }
    friend ostream& operator<<(ostream& izlaz, const Povodci& o){

izlaz<<"Povodci - ispis"<<endl;

izlaz<<"marka: "<<o.marka<<endl;

izlaz<<"duzina: "<<o.duzina<<endl;

izlaz<<"bojapovodca: "<<o.bojapovodca<<endl;

izlaz<<"pol: "<<o.pol<<endl;

izlaz<<"materijal: "<<o.materijal<<endl;

izlaz<<"ime:"<<o.ime<<endl<<endl;

return izlaz;

}

};
#endif // POVODCI_HPP_INCLUDED ,
