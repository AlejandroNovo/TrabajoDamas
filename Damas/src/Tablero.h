#pragma once
#define TAMANO 8

#include "Casilla.h"





class Tablero
{
	Casilla matriz_casilla[TAMANO][TAMANO];
	
	


public:
	Tablero();
	virtual ~Tablero();

	void dibuja();
	void inicializa();

};

