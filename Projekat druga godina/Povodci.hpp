#ifndef POVODCI_HPP_INCLUDED
#define POVODCI_HPP_INCLUDED
enum BOJE{plava=1, crvena, crna, zuta, bela, zelena};
class Povodci{
protected:
    string marka;
    double duzina;
    BOJE bojapovodca;
    string materijal;
    vector<Povodci*>povodac;
public:
    Povodci(string m, double d, BOJE b, string mt)
    {
    marka=m;
    duzina=d;
    bojapovodca=b;
    materijal=mt;
    }
    vector<Povodci*>getPovodac()const{return povodac;}
    string getMarka()
    {
        return marka;
    }
    double getDuzina()
    {
        return duzina;
    }
    BOJE getBojapovodca()
    {
        return bojapovodca;
    }
    string getMaterijal()
    {
        return materijal;
    }
    void DodajPovodacUFajl()
    {
        ofstream fajl;
        fajl.open ("Povodac.txt", ios_base::app);
        fajl << getMarka() << ";" << getDuzina() << ";" << getBojapovodca() << ";" << getMaterijal() <<endl;
        fajl.close();
    }
    friend ostream& operator<<(ostream& izlaz, const Povodci& o){

izlaz<<"Povodci - ispis"<<endl;

izlaz<<"marka: "<<o.marka<<endl;

izlaz<<"duzina: "<<o.duzina<<endl;

izlaz<<"bojapovodca: "<<o.bojapovodca<<endl;

izlaz<<"materijal: "<<o.materijal<<endl;

return izlaz;

}
void ubaciPovodac()
{
    string m;
    double d;
    string bo;
    BOJE b;
    string ma;
cout<<"Izaberite marku povodca(Nike, DogLowers, Puma, Hentaki)"<<endl;
cin>>m;
cout<<"Izaberite duzinu povodca"<<endl;
cin>>d;
cout<<"Izaberite boju povodca"<<endl;
cin>>bo;
if(bo=="plava")
{
    b=plava;
}
if(bo=="crvena")
{
    b=crvena;
}
if(bo=="crna")
{
    b=crna;
}
if(bo=="zuta")
{
    b=zuta;
}
if(bo=="bela")
{
    b=bela;
}
if(bo=="zelena")
{
    b=zelena;
}
cout<<"Izaberite materijal od koga je povodac sacinjen"<<endl;
cin>>ma;
Povodci*nova=new Povodci(m,d,b,ma);
povodac.push_back(nova);
}
};
#endif // POVODCI_HPP_INCLUDED
