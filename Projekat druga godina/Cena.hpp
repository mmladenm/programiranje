#ifndef CENA_HPP_INCLUDED
#define CENA_HPP_INCLUDED
#include "Pas.hpp"
class CENA:public PAS {
protected:
    double cena;
public:
    CENA(double z=0, string i, PolPsa o, bool p, bool a , bool s, int d, int f, int g):PAS(i, o ,p , a , s , d , f , g ){
    cena = z;}
};

#endif // CENA_HPP_INCLUDED
