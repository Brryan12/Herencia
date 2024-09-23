#include "Caballo.h"

Caballo::Caballo(double velocidad, std::string nombre, std::string especie, std::string codigo, double peso) : Animal(nombre, especie, codigo, peso), velocidad(velocidad)
{
}

Caballo::~Caballo()
{
}

double Caballo::getVelocidad()
{
    return velocidad;
}

void Caballo::setVelocidad(double velocidad)
{
    this->velocidad = velocidad;
}

std::string Caballo::toString()
{
    std::stringstream s;
    s << "---INFORMACION DEL CABALLO---" << std::endl << Animal::toString() << "Velocidad: " << velocidad <<"km/h" << std::endl;
    return s.str();
}

void Caballo::cambioAtributoDerivado()
{
    double velocidad;
    std::cout << "Ingrese la nueva velocidad del caballo: " << std::endl;
    std::cin >> velocidad;
    this->setVelocidad(velocidad);
}
