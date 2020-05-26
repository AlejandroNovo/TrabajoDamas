//#include "glut.h"

#include "Mundo.h"
#include <math.h>
#include<iostream>

using namespace std;


void Mundo::Dibuja()
{
	gluLookAt(3.5, -10, 10,  // posicion del ojo 10 10 40 
			3.5, 3.5, 0,      // hacia que punto mira  (0,0,0) 10 10 0
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
	/*Ficha* aux1 = new Ficha(0.75f, 0,0,0,255,0);
	fichasBlancas.agregar(aux1);

	Ficha* aux2 = new Ficha(0.75f, 20, 20,0,255,0);
	fichasBlancas.agregar(aux2);*/
	tablerogl.init();

	for (int i = 0; i < 4; i++) {
		
		Ficha* aux1 = new Ficha(i*2, 0);
		Ficha* aux2 = new Ficha(i*2+1,1);
		Ficha* aux3 = new Ficha(i*2, 2);
		fichasBlancas.agregar(aux1);
		fichasBlancas.agregar(aux2);
		fichasBlancas.agregar(aux3);
	
	}

	for (int i = 0; i < 4; i++) {

		Ficha* aux1 = new Ficha(i*2+1,5);
		Ficha* aux2 = new Ficha(i*2,6);
		Ficha* aux3 = new Ficha(i*2+1,7);
		fichasNegras.agregar(aux1);
		fichasNegras.agregar(aux2);
		fichasNegras.agregar(aux3);

	}

	fichasBlancas.setColor((unsigned) 255, (unsigned)255, (unsigned)255);
	fichasNegras.setColor((unsigned)25, (unsigned)25, (unsigned)25);

}

void Mundo::Tecla(unsigned char key)
{

	if (key == 'd') {

		fichasBlancas[0]->mueveDerecha();


	}
}

void Mundo:: MouseButton(int x, int y, bool down) {
	if (down) {
		tablerogl.MouseButton(x, y, down);
		x_elegida = tablerogl.Getx_elegida();
		y_elegida = tablerogl.Gety_elegida();

		cout << " Ha pulsado las coordenadas x:" << x_elegida << endl;
		cout << " Ha pulsado las coordenadas y:" << y_elegida << endl;
	}

}