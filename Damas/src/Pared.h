#pragma once
#include "Vector2D.h"

class Pared
{
private:
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;

	Vector2D limite1; //Abajo y arriba IZDA
	Vector2D limite2;//DCHA

public:
	Pared();
	virtual ~Pared();

	void setPos(float x1, float y1, float x2, float y2);
	void setColor(unsigned char r, unsigned char v, unsigned char a);

	void dibuja();
};

