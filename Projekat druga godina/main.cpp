#include <iostream>
#include <fstream>
using namespace std;
#include "Povodci.hpp"
#include "Oglas.hpp"
#include "Pas.hpp"
#include "Cena.hpp"
#include "Datum.hpp"
#include "Hrana.hpp"
#include "Korisnik.hpp"
#include "Odgajivacnice.hpp"
#include "Oprema.hpp"
#include "Pedigre.hpp"
#include "Popust.hpp"

int Oglas::brojOglasa;

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
    Oglas o("Zlatni retriver", musko, 100, 1.2, true);
    cout << "Projekat pokrenut, nema gresaka!" << endl;
    // Ovim projektom omogucujem koristniku da pretrazuje oglase pomocu razlicitih karakteristika.
    Povodci p("nike", 25.36, "venom", crna, "koza", true);
    p.DodajPovodacUFajl();
    citajTxt("Povodac.txt");
    return 0;


}
