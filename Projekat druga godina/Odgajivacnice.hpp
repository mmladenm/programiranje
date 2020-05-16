#ifndef ODGAJIVACNICE_HPP_INCLUDED
#define ODGAJIVACNICE_HPP_INCLUDED
class Odgajivacnice
{
protected:
    Pas pas;
    string mesto;
    string imePrezimeOdgajivaca;
    int brojTelefona;
    string imeOdgajivacnice;
    string adresa;
public:
    Odgajivacnice(string m, string iPO, int bt, string io, string a, string rr, PolPsa pp, double cc, double kk, bool ncPncP):pas(rr,pp,cc,kk,ncPncP)
    {
        mesto=m;
        imePrezimeOdgajivaca=iPO;
        brojTelefona=bt;
        imeOdgajivacnice=io;
        adresa=a;
    }
    friend ostream& operator<<(ostream& izlaz, const Odgajivacnice& o){

izlaz<<"Odgajivacnice - ispis"<<endl;

izlaz<<"mesto: "<<o.mesto<<endl;

izlaz<<"imePrezimeOdgajivaca: "<<o.imePrezimeOdgajivaca<<endl;

izlaz<<"adresa: "<<o.adresa<<endl;

izlaz<<"imeOdgajivacnice: "<<o.imeOdgajivacnice<<endl;

izlaz<<"brojTelefona:"<<o.brojTelefona<<endl<<endl;

return izlaz;

}

};
#endif // ODGAJIVACNICE_HPP_INCLUDED
