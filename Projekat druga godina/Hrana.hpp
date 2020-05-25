#ifndef HRANA_HPP_INCLUDED
#define HRANA_HPP_INCLUDED
enum RASE{ispodpetkila, prekopetkila, ispodjednekile, prekopetnaestkila, sve};
class Hrana{
protected:
    string ime;
    RASE zakojurasu;
    string roktrajanja;
    string glavnisastojak;
    int brojkalorija;
    int cena;
    int kilaza;
public:
    Hrana(string i, RASE z, string rt, string gs, int bk, int c, int k)
    {
        ime=i;
        zakojurasu=z;
        roktrajanja=rt;
        glavnisastojak=gs;
        brojkalorija=bk;
        cena=c;
        kilaza=k;
    }
};

#endif // HRANA_HPP_INCLUDED
