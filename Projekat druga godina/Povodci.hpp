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

    void povodac()
    {
        if(bojapovodca==1 || bojapovodca==3 || bojapovodca==5)
        pol=true;
        else pol=false;

    }

};
#endif // POVODCI_HPP_INCLUDED
