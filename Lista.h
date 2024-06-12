#pragma once

#include "Elemento.h"

class Lista
{
public:
	Lista();
	Elemento* GetPrimer();
	void Agregar(Elemento* elemento);

private:
	Elemento* _primer;
	Elemento* _ultimo;
};
