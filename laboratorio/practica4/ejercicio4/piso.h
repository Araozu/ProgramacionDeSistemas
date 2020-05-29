//
// Created by Fernando on 29/05/2020.
//

#ifndef EJERCICIO4_PISO_H
#define EJERCICIO4_PISO_H
#include "departamento.h"

class Piso {
private:
    Departamento departamentos[6] = {
            Departamento(0),
            Departamento(0),
            Departamento(0),
            Departamento(0),
            Departamento(0),
            Departamento(0)
    };

public:
    void ocupar(int numDepartamento, int numPersonas);
    void desocupar(int numDepartamento);
    int getNumPersonas();
    Departamento* getDepartamentos();

};


#endif //EJERCICIO4_PISO_H
