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
vector<string> splitSen(string str, char c=',')
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
vector <Povodci*> getpovodac(string nazivF)
{
    string linija;
    int i=0;
    ifstream fajl (nazivF);
    vector <Povodci*> povodci;
    vector<string> rezultat;
    string tip;
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            if(linija=="")
                break;
            if (i>0)
            {
                rezultat = splitSen(linija);
                BOJE b;
                if(rezultat[2]=="plava")
                {
                    b=plava;
                }
                if(rezultat[2]=="crvena")
                {
                    b=crvena;
                }
                if(rezultat[2]=="crna")
                {
                    b=crna;
                }
                if(rezultat[2]=="zuta")
                {
                    b=zuta;
                }
                if(rezultat[2]=="bela")
                {
                    b=bela;
                }
                if(rezultat[2]=="zelena")
                {
                    b=zelena;
                }
                tip=atoi(rezultat[5].c_str());
                if(tip=="1")
                {
                    cout<<rezultat[0];
                    /*
                    Povodci* p= new Povodci(rezultat[0],atof(rezultat[1].c_str()),b,atoi(rezultat[3].c_str()));
                    povodci.push_back(p);
                    */
                }
            }
            i++;

        }
        fajl.close();
        return povodci;
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
    if (mode=='a')
    {
        fajl.open (nazivFajla, ios_base::app);
    }
    else
    {
        fajl.open (nazivFajla);
    }

    /// pisanje vrsimo tako sto umesto cout pisemo naziv fajla
    /// koristimo operator <<
    fajl << tekst;

    /// na kraju zatvaramo fajl
    fajl.close();

}
Pas pretraziPoRasi()
{
    Pas x;
    string rasa;
    for(auto i=psi.begin(); i!=psi.end(); i++)
    {
        cout<<(*i).getRasa()<<endl;
    }
    cin>>rasa;
    for(auto i=psi.begin(); i!=psi.end(); i++)
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
    for(auto i=psi.begin(); i!=psi.end(); i++)
    {
        cout<<(*i).getC().getCena()<<endl;
    }
    cin>>cena;
    for(auto i=psi.begin(); i!=psi.end(); i++)
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


bool tobool(string const& s)
{
    if(s=="true")
        return true;
    else
        return false;

}
vector<Korisnik> citajtxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    vector<Korisnik> korisnici;
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            vector<string> rez;
            rez = splitSen(linija);
            Korisnik k(rez[0], rez[1], rez[2], tobool(rez[3]), tobool(rez[4]), atoi(rez[5].c_str()), rez[6], atoi(rez[7].c_str()));
            korisnici.push_back(k);
        }
        fajl.close();
        return korisnici;
    }

    else
        cout << "Neuspesno otvoren fajl";

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
    Pas p1("Francuski_buldog", zensko, 400, 117.57, kartica);
    Pas p2("Aljaski_malamut", musko, 500, 117.57, kes);
    psi.push_back(p1);
    psi.push_back(p2);
    Pas p3;
    char b;
    do
    {
        cout<<"Dobro dosli na sajt za prodaju pasa"<<endl;
        cout<<"Ukoliko zelite da pretrazujete pse po rasi pritisnite broj 1"<<endl;
        cout<<"Ukoliko zelite da pretrazujete pse po ceni pritisnite broj 2"<<endl;
        cout<<"Ukoliko zelite da vidite sve rase pasa su na raspolaganju, pritisnite broj 3"<<endl;
        cout<<"Ukoliko zelite da napravite novog korisnika, pritisnite broj 4"<<endl;
        cout<<"Kako bi izasli iz programa pritisnite broj 5"<<endl;
        cin>>b;
        fflush(stdin);
        string ime, sifra, mail_adresa;

        if(b=='1')
        {
            p3=pretraziPoRasi();

        }
        if(b=='2')
        {
            p3=pretraziPoCeni();
        }
        if(b=='3')
        {
            citajTxt("rase.txt");
        }
        if(b=='4')
        {
            cout<<"Unesite zeljeno ime: "<<endl;
            cin>>ime;
            cout<<"Unesite zeljenu sifru: "<<endl;
            cin>>sifra;
            cout<<"Unesite zeljenu meil adresu: "<<endl;
            cin>>mail_adresa;
            Korisnik k(ime,sifra,"5.4.2020",true,true,42346357767,mail_adresa,4);
            cout<<"Napravili ste novog korisnika!"<<endl;
            cout<<"Korisnicko ime:"<<k.getime()<<"mail adresa"<<endl<<k.getmail()<<endl;
        }
    }
    while(b!='5');

    // Ovim projektom omogucujem korisniku da pretrazuje oglase na osnovu cena i rasa pasa.
    //Povodci p("nike", 25.36, "venom", crna, "koza", true);
    //p.DodajPovodacUFajl();
    //citajTxt("Povodac.txt");
    return 0;

}
