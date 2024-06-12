#include "Elemento.h"


std::string Elemento::GetNombre()
{
	return _nombre;
}

Elemento::Elemento(std::string nombre):_nombre(nombre), _siguiente(nullptr)
{
}

void Elemento::SetSiguiente(Elemento* siguiente)
{
	_siguiente = siguiente;
}

Elemento* Elemento::GetSiguiente()
{
	return _siguiente;
}
