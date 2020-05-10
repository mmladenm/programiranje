#ifndef DATUM_HPP_INCLUDED
#define DATUM_HPP_INCLUDED

class Datum{
protected:
    int dan;
    int mesec;
    int godina;
public:
    Datum(int d, int m, int g)
    {
    dan=d;
    mesec=m;
    godina=g;
    }
    friend ostream& operator<<(ostream& izlaz, const Datum& o){

izlaz<<"Datum - ispis"<<endl;

izlaz<<"dan: "<<o.dan<<endl;

izlaz<<"mesec: "<<o.mesec<<endl;

izlaz<<"godina:"<<o.godina<<endl<<endl;

return izlaz;

}
};

#endif // DATUM_HPP_INCLUDED
