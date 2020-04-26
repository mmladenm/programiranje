#ifndef POVODCI_HPP_INCLUDED
#define POVODCI_HPP_INCLUDED
enum BOJE{plava, crvena, crna, zuta, bela, zelena};
class POVODCI{
protected:
    string marka;
    double duzina;
    string ime;
    BOJE bojapovodca;
    string materijal;
};
#endif // POVODCI_HPP_INCLUDED
