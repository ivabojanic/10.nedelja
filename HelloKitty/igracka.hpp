#ifndef IGRACKA_HPP_INCLUDED
#define IGRACKA_HPP_INCLUDED

#include "dinstring.hpp"

class Igracka
{
protected:
    DinString naziv;
    DinString opsegGodina;
public:
    DinString getNaziv(){return naziv;}
    DinString getOpseg(){return opsegGodina;}

    virtual void ispisi()=0;
};


#endif // IGRACKA_HPP_INCLUDED
