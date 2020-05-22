#include "Casilla.h"

Casilla::Casilla(float tam, float x, float y, char r, char v, char a)
{
	tamanio = tam;
	posicion.x = x;
	posicion.y = y;

	rojo = r;
	verde = v;
	azul = a;
}

Casilla::~Casilla()
{
}

//prueba
//prueba2