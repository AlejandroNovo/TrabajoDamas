#pragma once
#include "Vector2D.h"
#include "Pared.h"
#include "glut.h"

class Tablero
{
private:
	Pared suelo;
	Pared techo;
	Pared pared_izq;
	Pared pared_dcha;

public:
	Tablero();
	virtual ~Tablero();

	void dibuja();
};

