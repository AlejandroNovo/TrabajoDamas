#pragma once

#include "Casilla.h"





class Tablero
{
	Casilla* lista[8][8];
	int numero;


public:
	Tablero();
	virtual ~Tablero();

	void dibuja();
};

