#pragma once
#include "Animal.h"
class Caballo :public Animal
{
private:
	double velocidad;
public:
	Caballo(double velocidad, std::string nombre, std::string especie, std::string codigo, double peso);
	~Caballo() override;
	double getVelocidad();
	void setVelocidad(double velocidad);
	std::string toString() override;
	void cambioAtributoDerivado() override;
};

