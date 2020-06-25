//
// Created by Fernando on 29/05/2020.
//

#include "piso.h"


void Piso::ocupar(int numDepartamento, int numPersonas) {
    departamentos[numDepartamento - 1].opupar(numPersonas);
}

void Piso::desocupar(int numDepartament) {
    departamentos[numDepartament - 1].desocupar();
}

Departamento* Piso::getDepartamentos() {
    return departamentos;
}

int Piso::getNumPersonas() {
    int total = 0;
    for (int i = 0; i < 6; i++) {
        total += departamentos[i].getNumPersonas();
    }
    return total;
}


