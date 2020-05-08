#include <iostream>

#include "Lista.hpp"
#include "igracka.hpp"
#include "plisanaigracka.hpp"
#include "autic.hpp"
#include "igraonica.hpp"

using namespace std;


int main()
{
    ///svi konstruktori
    PlisanaIgracka P;
    PlisanaIgracka P1("Dogo","2-8",Kuca);
    PlisanaIgracka P2(P);
    P.ispisi();
    P1.ispisi();
    P2.ispisi();

    Autic A;
    Autic A1("Insert(ne znam nazive autica)","5-10",true);
    Autic A2(A);
    A.ispisi();
    A1.ispisi();
    A2.ispisi();

    Igracka *igracka1 = &P1;
    Igracka *igracka2 = &A1;

    Igraonica igraonicica;
    igraonicica.dodajIgracku(igracka1);
    igraonicica.dodajIgracku(igracka2);
    igraonicica.ispisIgracke();

    igraonicica.baciIgracku(1);
    igraonicica.ispisIgracke();

    cout<<"Trazenje igracke"<<endl;
    if(igraonicica.nadjiIgracku("Dogo")==1)
    {
        cout<<endl;
        cout<<"Nasli smo igracku!!"<<endl;
    }else
        cout<<endl;
        cout<<"Nismo nasli igracku:("<<endl;
    return 0;
}
