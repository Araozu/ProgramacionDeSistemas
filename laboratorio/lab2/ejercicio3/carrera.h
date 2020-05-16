//
// Created by araozu on 5/15/20.
//

#ifndef EJERCICIO3_CARRERA_H
#define EJERCICIO3_CARRERA_H
#include "atleta.h"
#include <vector>


class Carrera {

private:
    int distancia;
    std::vector<Atleta> atletas;

public:
    Carrera(int _distancia, std::vector<Atleta> _atletas);
    Atleta* obtenerGanador();

};


#endif //EJERCICIO3_CARRERA_H
