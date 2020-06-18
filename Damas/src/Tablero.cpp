#include "Tablero.h"

#include <iostream>
using namespace std;


Tablero::Tablero()
{
	
	
}

Tablero::~Tablero()
{

}

void Tablero::dibuja()
{
	
	for (int i = 0; i < TAMANO; i++)
	{
		for (int j = 0; j < TAMANO; j++) {

			matriz_casilla[i][j].Dibuja();
		}


	}
	

}

void Tablero::inicializa() {

	for (int i = 0; i < TAMANO; i++)
	{
		for (int j = 0; j < TAMANO; j++) {

			matriz_casilla[i][j].SetColor(true); //claro
			matriz_casilla[i][j].setPosicion(i, j);
			 
			if ((i + j) % 2 == 0) {

				matriz_casilla[i][j].SetColor(false); //oscuro
			}
		}


	}
	

}

bool Tablero::compruebaTablero(int x, int y) {

	Vector2D comprobacion;
	comprobacion.x = x;
	comprobacion.y = y;

	for (int i = 0; i < TAMANO; i++) {

		for (int j = 0; j < TAMANO; j++) {

			if (comprobacion == matriz_casilla[i][j].GetPos() ) {
				
				cout << "La casilla elegida es:" << i << j << endl;

				return true;
			}
		}
	}
	return false;
}

bool Tablero::compruebaBlancaPoisicion(int x, int y, float pos_x, float pos_y) {

	Vector2D ficha;
	ficha.x = pos_x;
	ficha.y = pos_y;

	Vector2D casilla;
	casilla.x = x;
	casilla.y = y;

	//cout << "casilla:" << casilla.x << casilla.y << endl;

	if (((x == (pos_x + 1)) &&( y== (pos_y+1))) || ((x == (pos_x - 1)) && (y == (pos_y + 1))))  {
		return true;
	}

	return false;

}

bool Tablero::compruebaNegraPoisicion(int x, int y, float pos_x, float pos_y) {

	Vector2D ficha;
	ficha.x = pos_x;
	ficha.y = pos_y;

	Vector2D casilla;
	casilla.x = x;
	casilla.y = y;

	

	if (((x == (pos_x - 1)) && (y == (pos_y - 1))) || ((x == (pos_x + 1)) && (y == (pos_y - 1)))) {
		return true;
	}

	return false;

}


