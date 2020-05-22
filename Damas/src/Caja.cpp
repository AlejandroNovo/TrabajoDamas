#include "Caja.h"
#include "glut.h"

///CONSTRUCTORES Y DESTRUCTORES///
Caja::Caja()
{
	suelo.setPos(0.0f, 0.0f, 20.0f, 0.0f); //(0.0f, 0.0f,20.0f, 0.0f);
	techo.setPos(20.0f, 20.0f, 0.0f, 20.0f);
	pared_izq.setPos(0.0f, 0.0f, 0.0f, 20.0f);//(2.0f, 0.0f, 2.0f, 20.0f);
	pared_dcha.setPos(20.0, 20.0f, 20.0f, 0.0f);

	suelo.setColor(84, 65, 46);
	techo.setColor(84, 65, 46);
	pared_izq.setColor(59, 47, 35);
	pared_dcha.setColor(59, 47, 35);
}
Caja::~Caja()
{
}

///OTROS///
void Caja::dibuja()
{
	suelo.dibuja();
	techo.dibuja();
	pared_izq.dibuja();
	pared_dcha.dibuja();
}