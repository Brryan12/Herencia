#include <iostream>
#include "Perro.h"
#include "Gato.h"
#include "Caballo.h"
int main()
{
    //Al ser todos tipo Animal pueden ser guardadas en un mismo vector o lista
    Animal *p1=new Perro("Aleman", "Juan", "Perro","4545",45.6);
    std::cout<<p1->toString();
    std::endl(std::cout);
    Animal* g1 = new Gato(15, "Michi", "Gato", "4541", 15.6);
    std::cout<<g1->toString();
    std::endl(std::cout);
    Animal* c1 = new Caballo(12.5, "Juan", "Pura", "215", 45.6);
    std::cout << c1->toString();

    std::endl(std::cout);
    std::cout << "---CUMPLEAÑEROS---" << std::endl;
    std::endl(std::cout);
    c1->felizCumpleanos();
    g1->felizCumpleanos();
    p1->felizCumpleanos();

    Animal* vec[10];
    int cant = 3;
    for (int i = 0; i < 3; i++)
        vec[i] = nullptr;

    //ingresarlos al vector
    vec[0] = g1;
    vec[1] = c1;
    vec[2] = p1;
    system("pause");
    system("cls");
    std::cout << "Vector de animales" << std::endl;

    for (int i = 0; i < cant; i++) {
        std::cout << vec[i]->toString() << std::endl;
    }
    delete c1;
    delete g1;
    delete p1;
    return 0;
}

