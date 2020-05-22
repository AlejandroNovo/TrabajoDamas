#pragma once
#include "Vector2D.h"
#include "Pared.h"

class Caja
{
private:
	Pared suelo; 
	Pared techo;
	Pared pared_izq;
	Pared pared_dcha;

public:
	Caja();
	virtual ~Caja();

	void dibuja();
};

