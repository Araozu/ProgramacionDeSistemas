//
// Created by Fernando on 29/05/2020.
//

#ifndef EJERCICIO4_COMPLEJO_H
#define EJERCICIO4_COMPLEJO_H
#include "torre.h"

class Complejo {
private:
    Torre torres[7] = {
            Torre(),
            Torre(),
            Torre(),
            Torre(),
            Torre(),
            Torre(),
            Torre()
    };

public:
    void ocupar(int torre, int piso, int departamento, int numPersonas);
    void desocupar(int torre, int piso, int departamento);
    int getNumPersonas();
    Torre* getTorres();

};


#endif //EJERCICIO4_COMPLEJO_H
