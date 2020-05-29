//
// Created by Fernando on 29/05/2020.
//

#include "torre.h"

void Torre::ocupar(int piso, int departamento, int numPersonas) {
    pisos[piso - 1].ocupar(departamento, numPersonas);
}

void Torre::desocupar(int piso, int departamento) {
    pisos[piso - 1].desocupar(departamento);
}

Piso* Torre::getPisos() {
    return pisos;
}

int Torre::getNumPersonas() {
    int total = 0;
    for (int i = 0; i < 20; i++) {
        total += pisos[i].getNumPersonas();
    }
    return total;
}

