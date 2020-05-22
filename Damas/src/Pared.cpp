#include "Pared.h"
#include "glut.h"

///CONSTRUCTORES Y DESTRUCTORES///
Pared::Pared()
{
	rojo = 255;
	verde = 255;
	azul = 255;
}

Pared::~Pared()
{
}

///MÉTODOS SET///
void Pared::setPos(float x1, float y1, float x2, float y2)
{
	limite1.x = x1;
	limite1.y = y1;
	limite2.x = x2;
	limite2.y = y2;
}
void Pared::setColor(unsigned char r, unsigned  char v, unsigned char a)
{
	rojo = r;
	verde = v;
	azul = a;
}

///OTROS///
void Pared::dibuja()
{
	glDisable(GL_LIGHTING);
	glColor3ub(rojo, verde, azul);
	glBegin(GL_POLYGON);
	glVertex3d(limite1.x, limite1.y, 0);
	glVertex3d(limite2.x, limite2.y, 0);
	glVertex3d(limite2.x, limite2.y, -2);
	glVertex3d(limite1.x, limite1.y, -2);
	glEnd();
	glEnable(GL_LIGHTING);
}



