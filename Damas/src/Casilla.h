#pragma once
#include "stdlib.h"
#include "glut.h"
#include "Vector2D.h"

//#include <iostream>
//using namespace std;

class Casilla {

private:

	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	int lado;
	bool blanco;
	Vector2D  Posicion_Casilla;
	
	

public:
	Casilla();
	virtual~Casilla();



	float SetLado();
	
	void Dibuja();

	void setPosicion(float x, float y) { Posicion_Casilla.x = x; Posicion_Casilla.y = y; }

	void SetColor(bool b);

	Vector2D GetPos();


};