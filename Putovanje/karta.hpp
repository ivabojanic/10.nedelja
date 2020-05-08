#ifndef KARTA_HPP_INCLUDED
#define KARTA_HPP_INCLUDED
#include "dinstring.hpp"
class Karta
{
private:
    DinString mestoPolaska;
    DinString mestoDolaska;
    float duzinaPutovanja;
    float cenaKarte;
    int indentifikatorKarte;
public:
    DinString getMestoPolaska()const{return mestoPolaska;}
    DinString getMestoDolaska()const{return mestoDolaska;}
    float getDuzina()const{return duzinaPutovanja;}
    float getCena()const{return cenaKarte;}
    int getIndentifikator()const{return indentifikatorKarte;}

    Karta(){mestoPolaska = "Novi Sad";mestoDolaska = "Beograd";duzinaPutovanja = 80;cenaKarte = 500; indentifikatorKarte = 1234;}
    Karta(DinString p,DinString d, float duzina, float c, int i){mestoPolaska = p;mestoDolaska = d;duzinaPutovanja  = duzina; cenaKarte = c; indentifikatorKarte = i;}
    Karta(const Karta &k){mestoPolaska = k.mestoPolaska; mestoDolaska = k.mestoDolaska; duzinaPutovanja = k.duzinaPutovanja; cenaKarte = k.cenaKarte; indentifikatorKarte = k.indentifikatorKarte;}

    virtual bool jeftinaKarta()=0;
};

#endif // KARTA_HPP_INCLUDED
