#pragma once
#include <iostream>
#include <sstream>
class Animal
{
private:
	std::string nombre;
	std::string especie;
	std::string codigo;
	double peso;
public:
	Animal(std::string nombre, std::string especie,std::string codigo, double peso);
	virtual ~Animal();
	std::string getNombre();
	std::string getEspecie();
	std::string getCodigo();
	double getPeso();
	void setNombre(std::string nombre);
	void setEspecie(std::string especie);
	void setCodigo(std::string codigo);
	void setPeso(double peso);
	virtual std::string toString();
	void felizCumpleanos();
	void virtual cambioAtributoDerivado();
};

