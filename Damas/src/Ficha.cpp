#include "Ficha.h"

#include "glut.h"


///CONSTRUCTORES Y DESTRUCTORES///
Ficha::Ficha()
{
	rojo = verde = azul = 0;//blanco
	radio = 0;
}

Ficha::~Ficha()
{
}

Ficha::Ficha(float rad, float x, float y,  char r, char v, char a)
{
	radio = rad;

	posicion.x = x;
	posicion.y = y;

	rojo = r;
	verde = v;
	azul = a;
}



///MÉTODOS SET///
void Ficha::setPos(float x1, float y1)
{
	posicion.x = x1;
	posicion.y = y1;
}


void Ficha::setColor(unsigned r, unsigned v, unsigned a)
{
	rojo = r;
	verde = v;
	azul = a;
}
void Ficha::setRadio(float r)
{
	radio = r;
}
 
///MÉTODOS GET///
float Ficha::getRadio()
{
	return radio;
}
void Ficha::dibuja()
{
	glColor3ub(rojo, verde, azul);
	//glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidTorus(0.1, 0.75, 20, 20);
	glutSolidTorus(0.1, 0.65, 20, 20);
	glutSolidTorus(0.1, 0.55, 20, 20);
	glutSolidTorus(0.1, 0.45, 20, 20);
	glutSolidTorus(0.1, 0.35, 20, 20);
	glutSolidTorus(0.1, 0.25, 20, 20);
	glutSolidTorus(0.1, 0.15, 20, 20);
	glutSolidTorus(0.1, 0.05, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);

	/*glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);*/
}
