//
// Created by Fernando on 29/05/2020.
//

#ifndef EJERCICIO4_TORRE_H
#define EJERCICIO4_TORRE_H
#include "piso.h"

class Torre {

private:
    Piso pisos[20] = {
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso(),
            Piso()
    };

public:
    void ocupar(int piso, int departamento, int numPersonas);
    void desocupar(int piso, int departamento);
    int getNumPersonas();
    Piso* getPisos();

};


#endif //EJERCICIO4_TORRE_H
