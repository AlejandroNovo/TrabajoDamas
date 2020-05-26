#pragma once
#include "stdlib.h"
#include "glut.h"
#include "Vector2D.h"

class Casilla {

public:

	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	int lado;
	bool blanco;
	
	


	Casilla(bool b);
	virtual~Casilla();

	Vector2D  Posicion_Casilla;

	float SetLado();
	
	void Dibuja();




};