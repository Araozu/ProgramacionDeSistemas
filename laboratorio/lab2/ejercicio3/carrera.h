//
// Created by araozu on 5/15/20.
//

#ifndef EJERCICIO3_CARRERA_H
#define EJERCICIO3_CARRERA_H
#include "atleta.h"


class Carrera {

private:
    int distancia;
    unsigned int numAtletas;
    Atleta* atletas;

public:
    Carrera(int _distancia, unsigned int _numAtletas, Atleta _atletas[]);
    Atleta* obtenerGanador();


};


#endif //EJERCICIO3_CARRERA_H
