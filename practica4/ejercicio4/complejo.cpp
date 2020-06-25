//
// Created by Fernando on 29/05/2020.
//

#include "complejo.h"

void Complejo::ocupar(int torre, int piso, int departamento, int numPersonas) {
    torres[torre - 1].ocupar(piso, departamento, numPersonas);
}

void Complejo::desocupar(int torre, int piso, int departamento) {
    torres[torre - 1].desocupar(piso, departamento);
}

Torre* Complejo::getTorres() {
    return torres;
}

int Complejo::getNumPersonas() {
    int total = 0;
    for (int i = 01; i < 7; i++) {
        total += torres[i].getNumPersonas();
    }
    return total;
}

