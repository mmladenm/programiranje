#ifndef ODGAJIVACNICE_HPP_INCLUDED
#define ODGAJIVACNICE_HPP_INCLUDED
#include "Pas.hpp"
#include "Cena.hpp"
class Odgajivacnice
{
protected:
    Pas pas[10];
    string mesto;
    string imePrezimeOdgajivaca;
    int brojTelefona;
    string imeOdgajivacnice;
    string adresa;
public:
    Odgajivacnice(string m, string iPO, int bt, string io, string a)
    {
        mesto=m;
        imePrezimeOdgajivaca=iPO;
        brojTelefona=bt;
        imeOdgajivacnice=io;
        adresa=a;
    }

};
#endif // ODGAJIVACNICE_HPP_INCLUDED
