#pragma once
#include "Animal.h"
class Gato: public Animal
{
private:
	int edad;
	std::string color;
public:
	Gato(int edad,std::string nombre, std::string especie, std::string codigo, double peso);
	~Gato();
	int getEdad();
	void setEdad(int edad);
	std::string toString() override;
};

