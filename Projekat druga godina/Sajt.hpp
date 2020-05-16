#ifndef SAJT_HPP_INCLUDED
#define SAJT_HPP_INCLUDED

class Sajt
{
private:
	string ime,link;
	vector<Oglas> oglasi;
public:
	Sajt(string ime="Test",string link="test.com")
	{
		this->ime=ime;
		this->link=link;
	}
	string getIme()const{return ime;}
	string getLink()const{return link;}
	void setIme(string ime){this->ime=ime;}
	void setLink(string link){this->link=link;}
	void dodajOglas(Oglas& o){oglasi.push_back(o);}
	void ispisiOglase()
	{
		cout << endl << "Ispis svih oglasa:" << endl;
		int brojac=1;
		for(auto i=oglasi.begin();i!=oglasi.end();i++)
		{
			cout << brojac << ") " << *i;
			brojac+=1;
		}
		cout << endl;
	}
	void obrisiOglas()
	{
		cout << endl << "Izaberite koji oglas zelite da obrisete!";
		ispisiOglase();
		cout << "Unos: ";
		int izbor;
		cin >> izbor;
		izbor--; //zato sto je ispis od 1 a brojanje u vectoru krece od 0
		oglasi.erase(oglasi.begin()+izbor);
	}
	void pretragaOglasa()
	{
		cout << endl << "Unesite rasu za pretragu: ";
		string rasa;
		getline(cin,rasa);
		int brojac=1;
		for(auto i=oglasi.begin();i!=oglasi.end();i++)
		{
			if(rasa==i->getRasa())
			{
				cout << brojac << ") " << *i;
				brojac+=1;
			}
		}
	}
};

#endif // SAJT_HPP_INCLUDED
