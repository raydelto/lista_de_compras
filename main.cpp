#include "Lista.h"
#include <iostream>

int main()
{
	Lista lista;
	Elemento arroz("Arroz");
	Elemento habichuela("Habichuela");
	Elemento carne("Carne");
	Elemento leche("Leche");

	lista.Agregar(&arroz);
	lista.Agregar(&habichuela);
	lista.Agregar(&carne);
	lista.Agregar(&leche);

	Elemento* i = lista.GetPrimer();

	while(i != nullptr)
	{
		std::cout << i->GetNombre() << std::endl;
		i = i->GetSiguiente();
	}
}
