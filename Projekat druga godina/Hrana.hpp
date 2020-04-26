#ifndef HRANA_HPP_INCLUDED
#define HRANA_HPP_INCLUDED
enum RASE{ispodpetkila, prekopetkila, ispodjednekile, prekopetnaestkila, sve};
class HRANA{
protected:
    string ime;
    RASE zakojurasu;
    string roktrajanja;
    string glavnisastojak;
    int brojkalorija;
    int cena;
    int kilaza;

};

#endif // HRANA_HPP_INCLUDED
