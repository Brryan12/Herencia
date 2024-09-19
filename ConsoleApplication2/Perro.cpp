#include "Perro.h"



Perro::Perro(std::string raza, std::string nombre, std::string especie,std::string codigo, double peso) : Animal(nombre,especie,codigo,peso), raza(raza)
{
}

Perro::~Perro()
{
}

std::string Perro::getRaza()
{
    return raza;
}

void Perro::setRaza(std::string raza)
{
    this->raza = raza;
}

std::string Perro::toString()
{
    std::stringstream s;
    s <<"---INFORMACION DEL PERRO---" << std::endl << "Nombre: " << getNombre() << std::endl << "Especie: " << getEspecie() << std::endl << "Raza: " << raza << std::endl << "Codigo: " << getCodigo() << std::endl << "Peso: " << getPeso()<<"kg" << std::endl;;
    return s.str();
}
