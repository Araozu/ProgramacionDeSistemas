//
// Created by araozu on 5/13/20.
//

#include "atleta.h"

int main() {

    Atleta atleta1("Juan Perez", 1, "Peruano", 19.05);
    Atleta atleta2("Usain Bolt", 8, "Jamaiquino", 19.005);

    if (atleta1.getTiempo() < atleta2.getTiempo()) {
        std::cout << "El atleta más rápido es " << atleta1.getNombre() << std::endl;
    } else {
        std::cout << "El atleta más rápido es " << atleta2.getNombre() << std::endl;
    }

    return 0;
}