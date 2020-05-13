//
// Created by araozu on 5/13/20.
//

#include "tanque.h"
#include <iostream>


int main() {
    Tanque t;
    t.agregar(100);

    std::cout << "El tanque tiene " << t.getContenido() << " unidades." << std::endl;

    while (t.getContenido() >= 1.0) {
        std::cout << "El tanque tiene " << t.getContenido() << " unidades." << std::endl;
        t.sacaMitad();
    }

    std::cout << "El tanque tiene " << t.getContenido() << " unidades." << std::endl;

    return 0;
}
