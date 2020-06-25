#include <iostream>
#include "Persona.h"

int main() {

    Persona persona;

    std::cout << "Ingresa los nombres: ";
    std::cin >> persona.nombre;
    std::cout << "Ingresa los apellidos: ";
    std::cin >> persona.apellido;
    std::cout << "Ingresa la edad: ";
    std::cin >> persona.edad;

    std::cout << "Nombre: " << persona.nombre << ", "
              << "apellidos: " << persona.apellido << ", "
              << "edad: " << persona.edad
              << std::endl;

    return 0;
}
