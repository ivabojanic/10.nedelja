#ifndef PLISANAIGRACKA_HPP_INCLUDED
#define PLISANAIGRACKA_HPP_INCLUDED

enum vrsta {Medo,Zeko,Kuca,Maca};
class PlisanaIgracka : public Igracka
{
private:
    vrsta vrstaPlisane;
public:
    PlisanaIgracka(){naziv = "Hello Kitty"; opsegGodina = "2-7"; vrstaPlisane = Maca;}
    PlisanaIgracka(DinString n, DinString o, vrsta v){naziv = n; opsegGodina = o; vrstaPlisane = v;}
    PlisanaIgracka(const PlisanaIgracka &p){naziv = p.naziv; opsegGodina = p.opsegGodina; vrstaPlisane = p.vrstaPlisane;}

    string getVrsta()
    {
        switch(vrstaPlisane)
        {
        case Medo:
            return "Medo";
            break;
        case Zeko:
            return "Zeko";
            break;
        case Kuca:
            return "Kuca";
            break;
        case Maca:
            return "Maca";
            break;
        default:
            return "Nema vrste";
            break;
        }
    }
    void ispisi()
    {
        cout<<"Naziv: "<<getNaziv()<<endl;
        cout<<"Vrsta: "<<getVrsta()<<endl;
        cout<<"Opseg godina: "<<getOpseg()<<endl;
    }

};

#endif // PLISANAIGRACKA_HPP_INCLUDED
