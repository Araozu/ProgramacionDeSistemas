//
// Created by araozu on 5/19/20.
//

#ifndef EJERCICIO4_CARRIAGE_H
#define EJERCICIO4_CARRIAGE_H


class Carriage {

private:
    int numeroAsientos = 40;
    int asientosLlenos = 0;
    bool esPrimeraClase;


public:
    Carriage(bool _esPrimeraClase);
    void llenarAsientos();
    bool vagonLleno();

};


#endif //EJERCICIO4_CARRIAGE_H
