#include <iostream>
#include "complejo.h"


void imprPromedioHabitantesPorPiso(Complejo complejo) {
    Torre* torres = complejo.getTorres();
    for (int i = 0; i < 7; i++) {
        Torre torre = torres[i];
        std::cout << "Los pisos de la torre " << i + 1 << " tienen en promedo " << torre.getNumPersonas() / 20.0
            << " habitantes." << std::endl ;
    }
}

Complejo crearComplejo() {
    Complejo complejo;

    complejo.ocupar(1, 1, 1, 5);
    complejo.ocupar(1, 2, 2, 3);
    complejo.ocupar(2, 3, 4, 8);
    complejo.ocupar(2, 4, 5, 5);
    complejo.ocupar(3, 5, 3, 3);
    complejo.ocupar(3, 6, 2, 3);
    complejo.ocupar(4, 8, 4, 4);
    complejo.ocupar(5, 10, 3, 2);
    complejo.ocupar(5, 12, 5, 1);
    complejo.ocupar(6, 13, 2, 6);
    complejo.ocupar(6, 12, 6, 10);
    complejo.ocupar(7, 15, 4, 4);
    complejo.ocupar(7, 19, 5, 9);

    return complejo;
}

int main() {
    Complejo complejo = crearComplejo();

    std::cout << "El complejo tiene un total de " << complejo.getNumPersonas() << " habitantes." << std::endl;
    imprPromedioHabitantesPorPiso(complejo);
    std::cout << "En promedio cada torre tiene " << complejo.getNumPersonas() / 7.0 << " habitantes." << std::endl;

    return 0;
}
