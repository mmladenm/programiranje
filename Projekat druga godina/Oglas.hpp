#ifndef OGLAS_HPP_INCLUDED
#define OGLAS_HPP_INCLUDED
class Oglas{
protected:
    Pas pas;
    static int brojOglasa;
public:
    Oglas(string rr, PolPsa pp, double cc, double kk, Nacin_Placanja ncPncP):pas(rr,pp,cc,kk,ncPncP)
    {
        brojOglasa+=1;
        cout << "Napravljen " << brojOglasa << ". oglas!" << endl;
    }
    string getRasa()const
    {
        return pas.getRasa();
    }

    friend ostream& operator<<(ostream& izlaz, const Oglas& o)
    {
        izlaz << o.pas << endl;
        return izlaz;
    }
};
#endif // OGLAS_HPP_INCLUDED
