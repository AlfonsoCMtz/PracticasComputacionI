//
// Created by alfon on 04/11/2020.
//

#include <iostream>
#include <array>
#include <cmath>
#include "Punto.h"



using namespace std;

void Punto2D::SetPosicion(float x, float y) {

    XI=x;
    YI=y;
}

void Punto2D::Escalar(float temp1, float temp2) {

    XI = temp1 * XI;
    YI = temp2 * YI;
}

void Punto2D::Trasladar(float temp1, float temp2) {

    XI = temp1 + XI;
    YI = temp2 + YI;
}
void Punto2D::RotarRespectoAlOrigen(float temp1) {

    float r=sqrt((XI*YI)+(YI*YI));
    float theta=atan(YI/XI);
    temp1=(temp1*3.1415926535)/180;

    XI=r*cos(theta+temp1);
    YI=r*sin(theta+temp1);

}

float Punto2D::GetX() {
    return XI;
}

float Punto2D::GetY() {
    return YI;
}

