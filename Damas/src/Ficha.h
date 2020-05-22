#pragma once
#include "Vector2D.h"
class Ficha
{
private:
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;

	float radio;

	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

public:
	Ficha();
	virtual ~Ficha();
	Ficha(float rad, float x = 0.0f, float y = 0.0f, char r=0, char v=0, char a=0);
	

	void setPos(float x1, float y1);
	void setColor(unsigned r, unsigned v, unsigned a);
	void setRadio(float r);
	
	//void setVel(float vx, float vy);

	float getRadio();

	void dibuja();
	//void mueve(float t);



};