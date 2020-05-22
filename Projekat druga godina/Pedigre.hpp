#ifndef PEDIGRE_HPP_INCLUDED
#define PEDIGRE_HPP_INCLUDED
class Pedigre
{
protected:
    bool cistokrvnost;
    Datum datumrodjenja;
    bool vakcinacija;
    bool pasos;
    bool papiri;
public:
    Pedigre(bool p = true, bool a = true , bool s = true, int d = 1, int f = 1, int g = 2020): datumrodjenja(d, f, g)
    {
        cistokrvnost=p;
        vakcinacija=a;
        pasos=s;
    }
    friend ostream& operator<<(ostream& izlaz, const Pedigre& o){

izlaz<<"Pedigre - ispis"<<endl;

izlaz<<"cistokrvnost: "<<o.cistokrvnost<<endl;

izlaz<<"datumrodjenja: "<<o.datumrodjenja<<endl;

izlaz<<"vakcinacija: "<<o.vakcinacija<<endl;

izlaz<<"pasos: "<<o.pasos<<endl;

izlaz<<"papiri:"<<o.papiri<<endl<<endl;

return izlaz;

}
};

#endif // PEDIGRE_HPP_INCLUDED ,
