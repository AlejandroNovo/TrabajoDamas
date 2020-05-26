#include "Tablero.h"



Tablero::Tablero()
{
	numero = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++) {
			lista[j] = 0; //Por ahora los 100 valores del puntero no apuntan a nada
		}
		lista[i] = 0;

	}
}

Tablero::~Tablero()
{

}

void Tablero::dibuja()
{
	for (int i = 0; i < 8; i ++) {

		for (int j = 0; j < 8; j++)
		{
			glColor3ub(255, 230, 165); //claro
			if((i + j) % 2 == 0) {
				glColor3ub(70, 70, 60); //oscuro 
			}
			glTranslatef(i, j, -0.5);
			casilla.Dibuja();
			//glutSolidCube(1);
			glTranslatef(-i, -j, 0.5);


		}
	}
}
