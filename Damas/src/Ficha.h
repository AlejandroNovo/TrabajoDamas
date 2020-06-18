#pragma once
#include "Vector2D.h"
class Ficha
{
private:
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;

	float radio;

	
	Vector2D posicion_ficha;
	Vector2D velocidad;
	Vector2D aceleracion;

public:
	Ficha();
	virtual ~Ficha();
	Ficha(float x = 0.0f, float y = 0.0f);
	

	void setPos(float x1, float y1);
	void setColor(unsigned r, unsigned v, unsigned a);
	//void setRadio(float r);
	
	//void setVel(float vx, float vy);

	float getRadio();

	void dibuja();
	
		
	
	void mueve(int x, int y);

	Vector2D GetPos();


};