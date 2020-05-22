#include "Caja.h"
#include "Ficha.h"
#include "ListaFichas.h"
#include "Tablero.h"

class Mundo
{
public: 
	void Tecla(unsigned char key);
	void Inicializa();
	//void RotarOjo();
	void Mueve();
	void Dibuja();

	Caja caja;
	ListaFichas fichasBlancas;
	ListaFichas fichasNegras;
	Tablero tablero;


	/*float x_ojo;
	float y_ojo;
	float z_ojo;*/
};