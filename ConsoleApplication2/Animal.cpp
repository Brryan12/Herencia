#include "Animal.h"

Animal::Animal(std::string nombre, std::string especie, std::string codigo, double peso) : especie(especie), nombre(nombre), codigo(codigo), peso(peso)
{
}


Animal::~Animal()
{
}

std::string Animal::getNombre()
{
    return nombre;
}

std::string Animal::getEspecie()
{
    return especie;
}

std::string Animal::getCodigo()
{
    return codigo;
}

double Animal::getPeso()
{
    return peso;
}

void Animal::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

void Animal::setEspecie(std::string especie)
{
    this->especie = especie;
}

void Animal::setCodigo(std::string codigo)
{
    this->codigo = codigo;
}

void Animal::setPeso(double peso)
{
    this->peso = peso;
}

std::string Animal::toString()
{
    std::stringstream s;
    s << "Nombre: " << nombre << std::endl << "Especie: " << especie << std::endl<<"Codigo: "<<codigo<<std::endl<<"Peso: "<<peso<<"kg"<<std::endl;
    return s.str();
}
