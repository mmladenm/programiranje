#ifndef PAS_HPP_INCLUDED
#define PAS_HPP_INCLUDED
#include "PEDIGRE.HPP"
enum PolPsa {musko,zensko};
class PAS
{
protected:
    string rasa;
    PolPsa pol;
    PEDIGRE pedigre;
public:
    PAS(string i="",  o = musko, bool p, bool a, bool s, int d, int f, int g):pedigre(p,a,s,d,f,g){
    rasa=i;PolPsa
    pol=o;
    }
#endif // PAS_HPP_INCLUDED
