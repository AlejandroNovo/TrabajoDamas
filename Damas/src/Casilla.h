#pragma once
#include "Pared.h"
#include "Vector2D.h"

class Casilla
{
private:
	Pared suelo;
	Pared techo;
	Pared pared_izq;
	Pared pared_dcha;

	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;

	Vector2D posicion;
	float tamanio;

public:
	Casilla();
	Casilla(float tam, float x = 0.0f, float y = 0.0f, char r = 0, char v = 0, char a = 0);
	virtual ~Casilla();

	void dibuja();
};


