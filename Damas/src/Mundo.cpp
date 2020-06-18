//#include "glut.h"

#include "Mundo.h"
#include <math.h>
#include<iostream>

using namespace std;


void Mundo::Dibuja()
{
	   

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
	tablero.inicializa();

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
	RatonPulsado = false;
	turno = 0;

}

//void Mundo::Tecla(unsigned char key)
//{
//
//	if (key == 'd') {
//
//		fichasBlancas[0]->mueveDerecha();
//
//
//	}
//}

void Mundo:: MouseButton(int x, int y, bool down) {
	if (down) {
		tablerogl.MouseButton(x, y, down);
		x_elegida = tablerogl.Getx_elegida();
		y_elegida = tablerogl.Gety_elegida();

	

	    //fichasBlancas.ComprobaryMover(x_elegida, y_elegida);
		//fichasNegras.ComprobaryMover(x_elegida, y_elegida);
		

		//cout << " Ha pulsado las coordenadas  x:" << x_elegida << "y:" << y_elegida << endl;
	

		RatonPulsado = true;
		
	}

}

void Mundo::Jugar() {
	/*
	turno 0: los blancos eligen ficha
	turno1: los blancos eligen casilla +mobimiento de la ficha a la casilla elegida
	turno 2: los negros ficha
	turno3: los negros casilla
	*/

	
	//cout << "jugando" << turno << endl;

	switch (turno) {

	case 0:
	{
		ficha_elegida = 50;

		if (RatonPulsado) {

			ficha_elegida = fichasBlancas.ElegirFicha(x_elegida, y_elegida);  //comprobamos si elgije la ficha correcta
			
			RatonPulsado = false;
			if (ficha_elegida != 50) {
				fichasBlancas[ficha_elegida]->setColor(255, 0, 0);
				turno = 1;
			    
			}
		}


		break;
	}
	case 1:
	{
		Vector2D posicion_ficha_elegida = fichasBlancas[ficha_elegida]->GetPos();
		if (RatonPulsado) {

			//tendrás que pasarle si es blanca o negra (o hacer 2 métodos distintos)
			//tendrás que pasarle la posición de ficha 
			if ((tablero.compruebaTablero(x_elegida, y_elegida) == true) 
				&& (tablero.compruebaBlancaPoisicion(x_elegida,y_elegida, posicion_ficha_elegida.x, posicion_ficha_elegida.y)) )
			{     //comprobamos si la casilla es correcta para una ficha blanca
				cout << " Casilla correcta :)" << endl;
				fichasBlancas[ficha_elegida]->setColor(255, 255, 255);
				fichasBlancas[ficha_elegida]->mueve(x_elegida, y_elegida);     // mueve ficha  

				turno = 2;

			}
			else {
				cout << " Casilla incorecta :(" << endl;
			}
			RatonPulsado = false;
		}
		break;
	}

	case 2:
	{

		ficha_elegida = 50;

		if (RatonPulsado) {

			ficha_elegida = fichasNegras.ElegirFicha(x_elegida, y_elegida);   //comprobamos si elgije la ficha correcta
			
			RatonPulsado = false;
			if (ficha_elegida != 50) {

				fichasNegras[ficha_elegida]->setColor(255, 0, 0);
				turno = 3;
				
			}
		}


		break;
	}
	case 3:
	{
		Vector2D posicion_ficha_elegida = fichasNegras[ficha_elegida]->GetPos();
	if (RatonPulsado) {

		if ((tablero.compruebaTablero(x_elegida, y_elegida) == true)
			&& (tablero.compruebaNegraPoisicion(x_elegida, y_elegida, posicion_ficha_elegida.x, posicion_ficha_elegida.y)))
		{     //comprobamos si la casilla es correcta para una ficha negra
			cout << " Casilla correcta :)" << endl;
			fichasNegras[ficha_elegida]->setColor(25, 25, 25);
			fichasNegras[ficha_elegida]->mueve(x_elegida, y_elegida);     // mueve ficha  

			turno = 0;

		}
		else {
			cout << " Casilla incorecta :(" << endl;
		}
		RatonPulsado = false;
	}
	break; 
	}


	}
}

