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
	bool compruebaTablero(int x, int y);
	bool compruebaBlancaPoisicion(int x, int y, float pos_x, float pos_y);
	bool compruebaNegraPoisicion (int x, int y, float pos_x, float pos_y);

};

