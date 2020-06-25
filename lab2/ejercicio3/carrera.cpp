//
// Created by araozu on 5/15/20.
//

#include "carrera.h"

Carrera::Carrera(int _distancia, std::vector<Atleta> _atletas) {

    distancia = _distancia;
    atletas = _atletas;

}


Atleta* Carrera::obtenerGanador() {

    if (atletas.empty()) {
        return nullptr;
    }

    Atleta atletaGanador = atletas[0];
    unsigned int i = 0;

    for (; i < atletas.size(); i++) {

        Atleta atletaActual = atletas[i];
        if (atletaActual.getTiempo() < atletaGanador.getTiempo()) {
            atletaGanador = atletaActual;
        }

    }

    Atleta* ptrAtleta = &atletaGanador;
    return ptrAtleta;

}
