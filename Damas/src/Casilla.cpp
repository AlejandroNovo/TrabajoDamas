#include "Casilla.h"
#include"glut.h"

//#include <iostream>
//using namespace std;

//CONSTRUCTORES Y DESTRUCTORES

Casilla::Casilla(){

    lado = 1;


    
}

Casilla :: ~ Casilla() {


}



 void Casilla::Dibuja() {

     glTranslatef(Posicion_Casilla.x,Posicion_Casilla.y,-0.5);
     glColor3ub(rojo,verde,azul);
     glutSolidCube(lado);
     glTranslatef(-Posicion_Casilla.x, -Posicion_Casilla.y, 0.5);


 }

 
 void Casilla::SetColor(bool b) {
     blanco = b;
     if (b)
    {
        rojo = 255;
        verde = 230;
        azul = 165;
    }
    else
    {
        rojo = 70;
        verde = 70;
        azul = 60;

    }

 }