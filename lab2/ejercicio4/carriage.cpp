//
// Created by araozu on 5/19/20.
//

#include "carriage.h"
#include <cstdlib>
#include <ctime>
#include <iostream>


Carriage::Carriage(bool _esPrimeraClase) {
    esPrimeraClase = _esPrimeraClase;
}


void Carriage::llenarAsientos() {

    const int probabilidad = esPrimeraClase? 10 : 40;
    srand(time(nullptr));

    if (asientosLlenos == numeroAsientos) {
        std::cout << "El vagon ya está lleno." << std::endl;
        return;
    }

    int numAsientosLlenosInicial = asientosLlenos;
    for (int i = 0; i < numeroAsientos - asientosLlenos; i++) {

        if (rand() % 100 < probabilidad) {
            asientosLlenos++;
        }

    }

    std::cout << "Se llenaron " << asientosLlenos - numAsientosLlenosInicial << " asientos." << std::endl;

}


bool Carriage::vagonLleno() {
    return asientosLlenos == numeroAsientos;
}



