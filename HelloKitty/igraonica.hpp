#ifndef IGRAONICA_HPP_INCLUDED
#define IGRAONICA_HPP_INCLUDED

#include "Lista.hpp"

class Igraonica
{
private:
    List<Igracka*> igracke;
public:
    bool dodajIgracku(Igracka* i)
    {
        if(igracke.add(igracke.size()+1,i))
        {
            return true;
        }else
            return false;
    }
    bool baciIgracku(int baci)
    {
       if(igracke.remove(baci))
       {
           return true;
       }else
            return false;
    }
    bool nadjiIgracku(DinString ime)
    {
        bool prom = false;
        Igracka* igracka;
        int i;
        for(i = 1;i <= igracke.size();i++)
        {
            igracke.read(i,igracka);
            if(igracka->getNaziv() == ime)
            {
                prom = true;
            }
        }
        return prom;
    }
    void ispisIgracke()const
    {
        cout<<endl;
        cout<<"Broj igracaka u igraonici: "<<igracke.size()<<endl;
        Igracka* igra;
        int i;
        for(i = 1; i <= igracke.size(); i++)
        {
            igracke.read(i,igra);
            igra->ispisi();
        }
    }
};


#endif // IGRAONICA_HPP_INCLUDED
