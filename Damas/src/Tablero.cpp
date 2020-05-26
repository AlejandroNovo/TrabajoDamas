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