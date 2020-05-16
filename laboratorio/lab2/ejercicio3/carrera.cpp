//
// Created by araozu on 5/15/20.
//

#include "carrera.h"

Carrera::Carrera(int _distancia, unsigned int _numAtletas, Atleta _atletas[]) {

    distancia = _distancia;
    numAtletas = _numAtletas;
    atletas = _atletas;

}


Atleta* Carrera::obtenerGanador() {

    if (numAtletas == 0) {
        return nullptr;
    }

    Atleta atletaGanador = atletas[0];
    unsigned int i = 1;

    for (; i < numAtletas; i++) {

        Atleta atletaActual = atletas[i];
        if (atletaActual.getTiempo() < atletaGanador.getTiempo()) {
            atletaGanador = atletaActual;
        }

    }

    return &atletas[i];

}
