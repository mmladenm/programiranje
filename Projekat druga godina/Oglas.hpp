#ifndef OGLAS_HPP_INCLUDED
#define OGLAS_HPP_INCLUDED
#include "Pas.hpp"
#include "Cena.hpp"

class Oglas{
protected:
    Pas pas;
    static int brojOglasa;
public:
    Oglas(string rr, PolPsa pp, double cc, double kk, bool ncPncP):pas(rr,pp,cc,kk,ncPncP){
        brojOglasa++;cout<<"Ima "<<brojOglasa<<" Oglasa"<<endl;

}

    friend ostream& operator<<(ostream& izlaz, const Oglas& o){

izlaz<<"Oglas - ispis"<<endl;

izlaz<<"pas:"<<o.pas<<endl<<endl;

return izlaz;

}
};
#endif // OGLAS_HPP_INCLUDED
