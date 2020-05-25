#ifndef PAS_HPP_INCLUDED
#define PAS_HPP_INCLUDED
enum PolPsa {musko,zensko};
class Pas
{
protected:
    string rasa;
    PolPsa pol;
    Cena C;
public:
   Pas(string r, PolPsa p, double c, double k,Nacin_Placanja ncp):C(c,k,ncp)
   {
       rasa=r;
       pol=p;
   }
    Pas():C()
    {
        rasa="Tea cup boo";
        pol=musko;
    }

   string getRasa()const
   {
    return rasa;
   }

   friend ostream& operator<<(ostream& izlaz, const Pas& o){

izlaz<<"Rasa: "<<o.rasa<<" ";
if(o.pol==0)
izlaz<<"Pol: muski ";
else
izlaz<<"Pol: zenski ";

izlaz<<o.C<<" ";

return izlaz;
   }
       Cena getC(){return C;}
};
#endif // PAS_HPP_INCLUDED ,
