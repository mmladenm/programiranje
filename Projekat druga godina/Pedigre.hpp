#ifndef PEDIGRE_HPP_INCLUDED
#define PEDIGRE_HPP_INCLUDED
#include "Datum.hpp"
class Pedigre
{
protected:
    bool cistokrvnost;
    Datum datumrodjenja
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
};

#endif // PEDIGRE_HPP_INCLUDED
