#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#include "Povodci.hpp"
#include "Cena.hpp"
#include "Pas.hpp"
#include "Oglas.hpp"
#include "Datum.hpp"
#include "Hrana.hpp"
#include "Korisnik.hpp"
#include "Odgajivacnice.hpp"
#include "Oprema.hpp"
#include "Pedigre.hpp"
#include "Popust.hpp"
#include "Sajt.hpp"

int Oglas::brojOglasa=0;

void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla.c_str());
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";

}
int main()
{
    Korisnik k;
    k.ispisPodataka();
    Admin a("mm",false,"mmladenm","nemadaznas","16.5.2020.",true,false,12345,"mm@mm.com",5);
    a.ispisPodataka();

    Sajt s;
    Oglas o("Zlatni retriver", musko, 100, 1.2, true);
    s.dodajOglas(o);
    Oglas o2("Pudla", zensko, 60, 1.0, true);
    s.dodajOglas(o2);
    s.ispisiOglase();
    s.pretragaOglasa();
    s.obrisiOglas();
    s.ispisiOglase();


    // Ovim projektom omogucujem korisniku da pretrazuje oglase pomocu razlicitih karakteristika.
    //Povodci p("nike", 25.36, "venom", crna, "koza", true);
    //p.DodajPovodacUFajl();
    //citajTxt("Povodac.txt");
    return 0;


}
