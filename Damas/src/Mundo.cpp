#include "Mundo.h"
#include "glut.h"
#include <math.h>


void Mundo::Dibuja()
{
	gluLookAt(10, -30, 30,  // posicion del ojo 10 10 40 
			10, 10, 0,      // hacia que punto mira  (0,0,0) 10 10 0
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	//aqui es donde hay que poner el codigo de dibujo
	//dibujo del suelo

	//caja.dibuja();
	fichasBlancas.dibuja();
	fichasNegras.dibuja();
	tablero.dibuja();

}

void Mundo::Mueve()
{
	//
}

void Mundo::Inicializa()
{
	
	Ficha* aux1 = new Ficha(0.75f, 0,0,0,255,0);
	fichasBlancas.agregar(aux1);

	Ficha* aux2 = new Ficha(0.75f, 20, 20,0,255,0);
	fichasBlancas.agregar(aux2);


	for (int i = 0; i < 4; i++) {
		Ficha* aux1 = new Ficha(0.75f, (i*3)+3+i, 3,255,255,255);
		Ficha* aux2 = new Ficha(0.75f, (i * 3) + 5 + i, 5, 255, 255, 255);
		Ficha* aux3 = new Ficha(0.75f, (i * 3) + 3 + i, 7, 255, 255, 255);
		fichasBlancas.agregar(aux1);
		fichasBlancas.agregar(aux2);
		fichasBlancas.agregar(aux3);
	
	}

	for (int i = 0; i < 4; i++) {
		Ficha* aux1 = new Ficha(0.75f, (i * 3) + 3 + i, 15, 10, 10, 10); // (float rad, float x, float y,  char r, char v, char a)
		Ficha* aux2 = new Ficha(0.75f, (i * 3) + 5 + i, 13, 10, 10, 10); 
		Ficha* aux3 = new Ficha(0.75f, (i * 3) + 5 + i, 17, 10, 10,10);
		fichasNegras.agregar(aux1);
		fichasNegras.agregar(aux2);
		fichasNegras.agregar(aux3);

	}

}

void Mundo::Tecla(unsigned char key)
{

}
