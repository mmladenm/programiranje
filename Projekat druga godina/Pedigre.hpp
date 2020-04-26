#ifndef PEDIGRE_HPP_INCLUDED
#define PEDIGRE_HPP_INCLUDED
struct Datum
{
    int mesec
    int dan
    int godina
}
class PEDIGRE
{
protected:
    bool cistokrvnost;
    Datum datumrodjenja
    bool vakcinacija;
    bool pasos;
    bool papiri;
public:
    PEDIGRE(bool p = true, bool a = true , bool s = true, int d = 1, int f = 1, int g = 2020)
    {
        cistokrvnost=p;
        vakcinacija=a;
        pasos=s;
        datumrodjenja.dan=d ;
        datumrodjenja.mesec=f;
        datumrodjenja.godina=g;
    }
};

#endif // PEDIGRE_HPP_INCLUDED
