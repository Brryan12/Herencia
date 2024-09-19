#include <iostream>
#include "Perro.h"
#include "Gato.h"
int main()
{
    Perro *p1=new Perro("Aleman", "Juan", "Perro","4545",45.6);
    std::cout<<p1->toString();
    std::endl(std::cout);
    Gato* g1 = new Gato(15, "Michi", "Gato", "4541", 15.6);
    std::cout<<g1->toString();

    return 0;
}

