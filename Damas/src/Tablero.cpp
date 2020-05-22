#include "Tablero.h"

Tablero::Tablero()
{
}

Tablero::~Tablero()
{

}

void Tablero::dibuja()
{
	for (int i = 3; i < 19; i += 2) {

		for (int j = 3; j < 19; j += 2)
		{
			glColor3ub(40, 40, 30); //oscuro
			if ((((i - 3) + (j - 3)) / 2) % 2 == 0) {
				glColor3ub(255, 230, 165); //claro
			}
			glTranslatef(i, j, -1);
			glutSolidCube(2);
			glTranslatef(-i, -j, 1);


		}
	}
}
