#include "Gato.h"

Gato::Gato(int edad, std::string nombre, std::string especie, std::string codigo, double peso) : Animal(nombre, especie, codigo, peso), edad(edad)
{
}

Gato::~Gato()
{
}

int Gato::getEdad()
{
    return edad;
}

void Gato::setEdad(int edad)
{
    this->edad = edad;
}

std::string Gato::toString()
{
    std::stringstream s;
    //s << "Nombre: " << getNombre() << std::endl << "Especie: " << getEspecie() << std::endl << "Edad: " << edad << std::endl << "Codigo: " << getCodigo() << std::endl << "Peso: " << getPeso() << std::endl;;
    s << Animal::toString() << "Edad: " << edad << std::endl;
    return s.str();
}
