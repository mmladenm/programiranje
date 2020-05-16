#ifndef CENA_HPP_INCLUDED
#define CENA_HPP_INCLUDED
class Cena
{
protected:
    double cena;
    double kurs;
    bool nacinPlacanja;
public:
    Cena(double c, double k, bool ncP)
    {
        cena=c;
        kurs=k;
        nacinPlacanja=ncP;
    }
    void placanje()
    {
        if (nacinPlacanja==true)
        {
            cout<<"Kupac placa kesom."<<endl;
            cout<<"Kurs je: "<<kurs<<endl;
            cena=cena*kurs;
        }
        else
            cout<<"Kupac placa karticom."<<endl;
    }
    friend ostream& operator<<(ostream& izlaz, const Cena& o)
    {
        izlaz<<"Cena: "<<o.cena<<" ";

        izlaz<<"Kurs: "<<o.kurs<<" ";

        izlaz<<"Nacin placanja: "<<o.nacinPlacanja<<" ";

        return izlaz;

    }
};

#endif // CENA_HPP_INCLUDED
