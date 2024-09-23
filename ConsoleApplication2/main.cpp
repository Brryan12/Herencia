#include <iostream>
#include "Perro.h"
#include "Gato.h"
#include "Caballo.h"
int main()
{
    Perro *p1=new Perro("Aleman", "Juan", "Perro","4545",45.6);
    std::cout<<p1->toString();
    std::endl(std::cout);
    Gato* g1 = new Gato(15, "Michi", "Gato", "4541", 15.6);
    std::cout<<g1->toString();
    std::endl(std::cout);
    Caballo* c1 = new Caballo(12.5, "Juan", "Pura", "215", 45.6);
    std::cout << c1->toString();

    std::endl(std::cout);
    std::cout << "---CUMPLEAÑEROS---" << std::endl;
    std::endl(std::cout);
    c1->felizCumpleanos();
    g1->felizCumpleanos();
    p1->felizCumpleanos();

    delete c1;
    delete g1;
    delete p1;
    return 0;
}

