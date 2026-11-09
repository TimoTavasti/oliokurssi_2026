#include <iostream>
#include "henkilo.h"
#include "opiskelija.h"
using namespace std;

int main()
{
    Henkilo objH("Ville Virta",45);
    Opiskelija obj0p;
    obj0p.setNimi("Alli Meri");
    obj0p.setIka(22);
    obj0p.setOpiskelijanumero("T501");

    objH.tulostaTiedot();
    obj0p.tulostaTiedot();

    Opiskelija obj0p2("Aimo Joki",33,"A777");
    obj0p2.tulostaTiedot();
    return 0;
}
