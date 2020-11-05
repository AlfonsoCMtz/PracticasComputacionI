//
// Created by alfon on 04/11/2020.
//

#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H


class Punto2D {

public:
    float PX{0}, PY{0};

    void SetPosicion(float x, float y);

    void Escalar(float temp1, float temp2);

    void Trasladar(float temp1, float temp2);

    void RotarRespectoAlOrigen(float temp1);


    float GetX();

    float GetY();


};

#endif //PUNTO_PUNTO_H
