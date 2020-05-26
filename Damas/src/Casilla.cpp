#include "Casilla.h"
#include"glut.h"

//CONSTRUCTORES Y DESTRUCTORES

Casilla::Casilla(bool b):blanco(b) {

    lado = 1;


    if (blanco)
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

Casilla :: ~ Casilla() {


}



 void Casilla::Dibuja() {


     glColor3ub(rojo,verde,azul);
     glutSolidCube(lado);

 }

 
