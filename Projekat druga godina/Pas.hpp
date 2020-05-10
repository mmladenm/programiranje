#ifndef PAS_HPP_INCLUDED
#define PAS_HPP_INCLUDED
#include "Cena.hpp"
enum PolPsa {musko,zensko};
class Pas
{
protected:
    string rasa;
    PolPsa pol;
    Cena C;
public:
   Pas(string r, PolPsa p, double c, double k, double ncp):C(c,k,ncp)
   {
       rasa=r;
       pol=p;
   }
   friend ostream& operator<<(ostream& izlaz, const Pas& o){

izlaz<<"Pas - ispis"<<endl;

izlaz<<"rasa: "<<o.rasa<<endl;

izlaz<<"pol: "<<o.pol<<endl;

izlaz<<"cena:"<<o.C<<endl<<endl;

return izlaz;
   }
};
#endif // PAS_HPP_INCLUDED
