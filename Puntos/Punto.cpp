//
// Created by alfon on 04/11/2020.
//

#include <iostream>
#include <array>
#include <cmath>
#include "Punto.h"



using namespace std;

void Punto2D::SetPosicion(float x, float y) {

    PX=x;
    PY=y;
}

void Punto2D::Escalar(float temp1, float temp2) {

    PX = temp1 * PX;
    PY = temp2 * PY;
}

void Punto2D::Trasladar(float temp1, float temp2) {

   PX = temp1 + PX;
    PY = temp2 + PY;
}
void Punto2D::RotarRespectoAlOrigen(float temp1) {

        float r=sqrt((PX*PY)+(PY*PY));
        float theta=atan(PY/PX);
        temp1=(temp1*3.1415926535)/180;

        PX=r*cos(theta+temp1);
        PY=r*sin(theta+temp1);




}

float Punto2D::GetX() {
    return PY;
}

float Punto2D::GetY() {
        return PX;
    }


