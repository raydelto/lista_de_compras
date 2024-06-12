#pragma once
#include <string>

class Elemento
{
public:
	Elemento(std::string nombre);
	void SetSiguiente(Elemento* siguiente);
	Elemento* GetSiguiente();
	std::string GetNombre();
private:
	std::string _nombre;
	Elemento* _siguiente;
};
	
