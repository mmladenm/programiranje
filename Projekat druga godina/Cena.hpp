#ifndef CENA_HPP_INCLUDED
#define CENA_HPP_INCLUDED
enum Nacin_Placanja{kartica,kes};
class Cena
{
protected:
    double cena;
    double kurs;
    Nacin_Placanja nacinPlacanja;
public:
    Cena(double c=100, double k=117, Nacin_Placanja ncP=kes)
    {
        cena=c;
        kurs=k;
        nacinPlacanja=ncP;
    }

    void placanje()
    {
        if (nacinPlacanja==kes)
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

        if (o.nacinPlacanja==kartica)
        {
          izlaz<<"Nacin placanja: karticom";
        }
        else
        {
          izlaz<<"Nacin placanja: kesom";
        }


        return izlaz;

    }
        double getCena(){return cena;}
};

#endif // CENA_HPP_INCLUDED
