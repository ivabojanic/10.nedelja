#ifndef AVIONSKAKARTA_HPP_INCLUDED
#define AVIONSKAKARTA_HPP_INCLUDED


class AvionskaKarta : public Karta
{
public:
    bool jeftinaKarta()
    {
        if(getCena()/getDuzina() < 1)
        {
            return true;
        }else
            return false;
    }

    void ispisi()
    {
        cout<<"Mesto polaska: "<<getMestoPolaska()<<endl;
        cout<<"Mesto dolaska: "<<getMestoDolaska()<<endl;
        cout<<"Duzina puta: "<<getDuzina()<<endl;
        cout<<"Cena karte: "<<getCena()<<endl;
        cout<<"ID: "<<getIndentifikator()<<endl;
        if(jeftinaKarta() == 1)
        {
            cout<<"Jeftina karta."<<endl;
        }else
            cout<<"Skupa karta."<<endl;
    }
};
#endif // AVIONSKAKARTA_HPP_INCLUDED
