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
vector<Pas> psi;

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
void pisiTxt(string nazivFajla, string tekst, char mode='a')
{
    /// fajl je sada objekat klase ofstream
    ofstream fajl;

    /// koristimo metodu open za otvaranja fajla
    /// kao parametar prosledjujemo naziv fajla i njegovu ekstenziju
    if (mode=='a'){
        fajl.open (nazivFajla, ios_base::app);
    }else{
        fajl.open (nazivFajla);
    }

    /// pisanje vrsimo tako sto umesto cout pisemo naziv fajla
    /// koristimo operator <<
    fajl << tekst;

    /// na kraju zatvaramo fajl
    fajl.close();

}

vector<string> splitSen(string str, char c='|')
{
    string w = "";
    vector<string> v;
    for (auto rem : str)
    {
        if (rem==c)
        {
            v.push_back(w);
            w="";
        }
        else
        {
            w=w+rem;
        }
    }
    v.push_back(w);

    return v;
}
Pas pretraziPoRasi()
{
    Pas x;
    string rasa;
    for(auto i=psi.begin();i!=psi.end();i++)
    {
        cout<<(*i).getRasa()<<endl;
    }
    cin>>rasa;
    for(auto i=psi.begin();i!=psi.end();i++)
    {
        if((*i).getRasa()==rasa)
        {
            cout<<"Izabran je pas"<<endl;
            x=(*i);
            cout<<x;

        }
    }

    return x;
}
Pas pretraziPoCeni()
{
    Pas x;
    double cena;
    for(auto i=psi.begin();i!=psi.end();i++)
    {
        cout<<(*i).getC().getCena()<<endl;
    }
    cin>>cena;
    for(auto i=psi.begin();i!=psi.end();i++)
    {
        if((*i).getC().getCena()==cena)
        {
            cout<<"Izabran je pas"<<endl;
            x=(*i);
            cout<<x;

        }
    }

    return x;
}



int main()
{
  /*  Korisnik k;
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
*/
    Pas p1("Francuski buldog", zensko, 400, 117.57, kartica);
    Pas p2("Aljaski malamut", musko, 500, 117.57, kes);
    psi.push_back(p1);
    psi.push_back(p2);
    Pas p3;
    char b;
    do{
        cout<<"Dobro dosli na sajt za prodaju pasa"<<endl;
        cout<<"Ukoliko zelite da pretrazujete pse po rasi pritisnite broj 1"<<endl;
        cout<<"Ukoliko zelite da pretrazujete pse po ceni pritisnite broj 2"<<endl;
        cout<<"Kako bi izasli iz programa pritisnite broj 3"<<endl;
        cin>>b;
        if(b=='1')
        {
            p3=pretraziPoRasi();

        }
        if(b=='2')
        {
            p3=pretraziPoCeni();
        }

    }while(b!='3');

    // Ovim projektom omogucujem korisniku da pretrazuje oglase na osnovu cena i rasa pasa.
    //Povodci p("nike", 25.36, "venom", crna, "koza", true);
    //p.DodajPovodacUFajl();
    //citajTxt("Povodac.txt");
    return 0;


}
