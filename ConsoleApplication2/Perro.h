#pragma once
#include "Animal.h"
class Perro :public Animal
{
private:
	std::string raza;
public:
	Perro(std::string raza, std::string nombre, std::string especie, std::string codigo, double peso);
	~Perro() override;
	std::string getRaza();
	void setRaza(std::string raza);
	std::string toString() override;
	void cambioAtributoDerivado() override;
};

