#ifndef POPUST_HPP_INCLUDED
#define POPUST_HPP_INCLUDED

class Popust
{
protected:
    double procenatPopusta;
    int vremeTrajanja;
public:
    Popust(double pP=0.1, int vT=20)
    {
        procenatPopusta=pP;
        vremeTrajanja=vT;
    }
};

#endif // POPUST_HPP_INCLUDED ,
