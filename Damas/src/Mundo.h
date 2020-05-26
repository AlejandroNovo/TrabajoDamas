#include "TableroGL.h"
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
	void MouseButton(int x, int y, bool down);

	
	ListaFichas fichasBlancas;
	ListaFichas fichasNegras;
	Tablero tablero;
	TableroGL tablerogl;

	int x_elegida, y_elegida;


	/*float x_ojo;
	float y_ojo;
	float z_ojo;*/
};
