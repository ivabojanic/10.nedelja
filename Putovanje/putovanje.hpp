#ifndef PUTOVANJE_HPP_INCLUDED
#define PUTOVANJE_HPP_INCLUDED

class Putovanje
{
private:
    DinString nazivPutovanja;
    int maksCena;
    List<AvionskaKarta> karte;
public:
    Putovanje(){nazivPutovanja = "Ekspres putovanje";maksCena = 10000;}
    Putovanje(DinString n,int maks){nazivPutovanja = n; maksCena = maks;}

    DinString getNazivPutovanja()const{return nazivPutovanja;}
    int getMaksCena()const{return maksCena;}

    bool dodajAvionskuKartu(AvionskaKarta &a)
    {

    }
    bool izbaciKartu(int id)
    {
        AvionskaKarta kartica;
        int i;
        for(i = 0;i <= karte.size();i++)
        {
            karte.read(i,kartica);
            if(kartica.getIndentifikator == id)
            {
                karte.remove(i);
                return true;
            }
            return false;
        }
    }
    void ispisPutovanja()
    {
        cout<<"Maksimalna cena puta: "<<getMaksCena()<<endl;
        cout<<"Naziv putovanja: "<<getNazivPutovanja()<<endl;
    }
};

#endif // PUTOVANJE_HPP_INCLUDED
