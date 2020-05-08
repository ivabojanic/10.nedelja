#ifndef AUTIC_HPP_INCLUDED
#define AUTIC_HPP_INCLUDED

class Autic : public Igracka
{
private:
    bool naStruju;
public:
    Autic(){naziv = "Formula"; opsegGodina = "5-9"; naStruju = true;}
    Autic(DinString n, DinString o, bool s){naziv = n; opsegGodina = o; naStruju = s;}
    Autic(const Autic &a){naziv = a.naziv; opsegGodina = a.opsegGodina; naStruju = a.naStruju;}

    string getStruja()
    {
        switch(naStruju)
        {
        case 1:
            return "Na struju";
            break;
        case 0:
            return "Nije na struju";
            break;
        default:
            return "Nema podataka o struji";
            break;
        }
    }

    void ispisi()
    {
        cout<<"Naziv: "<<getNaziv()<<endl;
        cout<<"Struja: "<<getStruja()<<endl;
        cout<<"Opseg godina: "<<getOpseg()<<endl;
    }
};

#endif // AUTIC_HPP_INCLUDED
