#pragma once
#include "stdlib.h"
#include "glut.h"
#include "Ficha.h"




///CONSTRUCTORES Y DESTRUCTORES///

Ficha::Ficha(float x, float y)
{
	radio = 0.35;

	posicion_ficha.x = x;
	posicion_ficha.y = y;
}

Ficha::~Ficha()
{
}





///MÉTODOS SET///
void Ficha::setPos(float x1, float y1)
{
	posicion_ficha.x = x1;
	posicion_ficha.y = y1;
}


void Ficha::setColor(unsigned r, unsigned v, unsigned a)
{
	rojo = r;
	verde = v;
	azul = a;
}
//void Ficha::setRadio(float r)
//{
//	radio = r;
//}
 
///MÉTODOS GET///
float Ficha::getRadio()
{
	return radio;
}
void Ficha::dibuja()
{
	glColor3ub(rojo, verde, azul);
	//glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	/*posicion.x = (ubicacion_tab.x * 3) + 3 + ubicacion_tab.x;
	posicion.y = (ubicacion_tab.y * 3) + 3 + ubicacion_tab.y;*/
	glTranslatef(posicion_ficha.x, posicion_ficha.y, 0.1);

	glutSolidTorus(0.1, radio, 20, 20);
	glutSolidTorus(0.1, radio*0.75, 20, 20);
	glutSolidTorus(0.1, radio*0.5, 20, 20);
	glutSolidTorus(0.1, radio*0.25, 20, 20);
	glTranslatef(-posicion_ficha.x, -posicion_ficha.y, -0.1);

	/*glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);*/
}

void Ficha::mueve(int x, int y)
{
<<<<<<< HEAD
	posicion_ficha.x = x;
	posicion_ficha.y = y;
=======
	//posicion = (posicion.x + 1, posicion.y + 1);
	/*posicion.x = posicion.x + 1;
	posicion.y = posicion.y + 1;*/
	
	setPos(posicion_ficha.x + 1, posicion_ficha.y + 1);

>>>>>>> ac39d0d5e5c5b3c0476a613f0d0d1e92f00fc1bb
	
}

Vector2D Ficha::GetPos(){


	return posicion_ficha;
}

