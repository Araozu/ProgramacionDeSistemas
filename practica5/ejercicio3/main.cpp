#include <iostream>
#include <string>
#include "Persona.h"

int main() {

    Persona* personas = new Persona[8];

    for (int i = 0; i < 8; i++) {
        std::cout << "Ingresa el nombre:";
        std::cin >> personas[i].nombre;
        std::cout << "Ingresa el dia de nacimiento:";
        std::cin >> personas[i].diaNacimiento;
        std::cout << "Ingresa el mes de nacimiento:";
        std::cin >> personas[i].mesNacimiento;
        std::cout << "Ingresa el año de nacimiento:";
        std::cin >> personas[i].anioNacimiento;

        std::cout << std::endl << "Datos ingresados." << std::endl << std::endl;

    }

    int numMes;

    do {

        std::cout << "Ingresa el numero de un mes:";
        std::cin >> numMes;

        for (int i = 0; i < 8; i++) {
            if (personas[i].mesNacimiento == numMes) {
                std::cout << "Nombre: " << personas[i].nombre
                          << ", Fecha de nacimiento: "
                          << personas[i].diaNacimiento << "/"
                          << personas[i].mesNacimiento << "/"
                          << personas[i].anioNacimiento << std::endl;
            }
        }

    } while (numMes != 0);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
