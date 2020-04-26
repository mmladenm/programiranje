#ifndef ODGAJIVACNICE_HPP_INCLUDED
#define ODGAJIVACNICE_HPP_INCLUDED
#include "pas.hpp"
class ODGAJIVACNICE
{
protected:
    PAS pas;
    string mesto;
    string imePrezimeOdgajivaca;
    int brojTelefona;
    string imeOdgajivacnice;
    string adresa;
public:
    ODGAJIVACNICE(string i, PolPsa o, bool p, bool a, bool s, int d, int f, int g, string dada="", string nene="", int dne =0, string dane="", string neda=""): pas(i, o,p,a,s,d,f,g)
    {
        mesto=dada;
        imePrezimeOdgajivaca=nene;
        imeOdgajivacnice=dane;
        adresa=neda;
        brojTelefona=dne;
    }
};
#endif // ODGAJIVACNICE_HPP_INCLUDED
