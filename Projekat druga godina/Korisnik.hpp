#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED
class Korisnik
{
protected:
    string username;
    string password;
    string datumKreacije;
    bool aktivnost;
    bool slika;
    int brojTelefona;
    string mailAdresa;
    int rating;
public:
	Korisnik()
	{
		username="";
		password="";
		datumKreacije="";
		aktivnost=false;
		slika=false;
		brojTelefona=0;
		mailAdresa="";
		rating=0;
	}
	Korisnik(string u="",string p="",string d="",bool a=true,bool s=true,int b=0,string m="",int r=0)
	{
		username=u;
		password=p;
		datumKreacije=d;
		aktivnost=a;
		slika=s;
		brojTelefona=b;
		mailAdresa=m;
		rating=r;
	}
	Korisnik(const Korisnik &a):username(a.username), password(a.password), datumKreacije(a.datumKreacije), aktivnost(a.aktivnost), slika(a.slika), brojTelefona(a.brojTelefona), mailAdresa(a.mailAdresa), rating(a.rating){}
	string getime()const{return username;}
	string getmail()const{return mailAdresa;}
	virtual void ispisPodataka()const
	{
		cout << endl;
		cout << "username: " << username << endl;
		cout << "datum kreacije: " << datumKreacije << endl;
		if(aktivnost)
			cout << "aktivan redovno" << endl;
		else
			cout << "neaktivan" << endl;
		if(slika)
			cout << "ima sliku" << endl;
		else
			cout << "nema sliku" << endl;
		cout << "broj telefona: " << brojTelefona << endl;
		cout << "mail adresa: " << mailAdresa << endl;
		cout << "rating: " << rating << endl;
		cout << endl;
	}
};
class Admin:public Korisnik
{
protected:
	string nickname;
	bool banner;
public:
	Admin(string nickname,bool banner,string u,string p,string d,bool a,bool s,int b,string m,int r):Korisnik(u,p,d,a,s,b,m,r)
	{
		this->nickname=nickname;
		this->banner=banner;
	}
	void ispisPodataka()const
	{
		Korisnik::ispisPodataka();
		cout << "nadimak: " << nickname << endl;
		if(banner)
			cout << "ima banner" << endl;
		else
			cout << "nema banner" << endl;
		cout << endl;
	}
};

#endif // KORISNIK_HPP_INCLUDED ,
