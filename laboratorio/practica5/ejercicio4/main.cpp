#include <iostream>
#include "Persona.h"

int imprimirMenuYObtenerRespuesta() {

    std::cout << std::endl
              << "Escoge una opcion:" << std::endl
              << "1. Mostrar todos los nombres" << std::endl
              << "2. Mostrar las personas de una cierta edad" << std::endl
              << "3. Mostrar las personas cuyo nombre inicia con una letra" << std::endl
              << "4. Salir" << std::endl
              << "Escoge una opcion:";

    int res;
    std::cin >> res;

    return res;
}

int insertarPersonas(int numPersonas, Persona* personas) {

    while (numPersonas < 50) {

        std::string nombre;
        std::cout << "Ingresa el nombre (vacio para terminar):";
        std::cin.ignore();
        getline(std::cin, nombre);
        if (nombre.empty()) {
            std::cout << std::endl;
            break;
        }

        personas[numPersonas].nombre = nombre;
        std::cout << "Ingresa la direccion:";
        getline(std::cin >> std::ws, personas[numPersonas].direccion);
        std::cout << "Ingresa el telefono:";
        std::cin >> personas[numPersonas].telefono;
        std::cout << "Ingresa la edad:";
        std::cin >> personas[numPersonas].edad;

        std::cout << std::endl << "Persona ingresada." << std::endl << std::endl;

        numPersonas++;
    }

    return numPersonas;
}

void mostrarTodosLosNombres(int numPersonas, Persona* personas) {
    for (int i = 0; i < numPersonas; i++) {
        std::cout << personas[i].nombre << std::endl;
    }
}

void imprimirPersona(Persona p) {
    std::cout << "Nombre: " << p.nombre
              << ", direccion: " << p.direccion
              << ", telefono: " << p.telefono
              << ", edad: " << p.edad << std::endl;
}

void mostrarPersonasDeCiertaEdad(int numPersonas, Persona* personas) {
    int edad;
    std::cout << "Ingresa la edad:";
    std::cin >> edad;

    for (int i = 0; i < numPersonas; i++) {
        Persona p = personas[i];
        if (p.edad == edad) {
            imprimirPersona(p);
        }
    }

}

void mostrarPersonasConInicial(int numPersonas, Persona* personas) {
    char inicial;
    std::cout << "Ingresa la edad:";
    std::cin >> inicial;

    for (int i = 0; i < numPersonas; i++) {
        Persona p = personas[i];
        if (p.nombre[0] == inicial) {
            imprimirPersona(p);
        }
    }

}

int main() {

    int numPersonas = 0;
    Persona* personas = new Persona[50];

    numPersonas = insertarPersonas(numPersonas, personas);

    int opcion;
    do {
        opcion = imprimirMenuYObtenerRespuesta();

        switch (opcion) {
            case 1: {
                mostrarTodosLosNombres(numPersonas, personas);
                break;
            }
            case 2: {
                mostrarPersonasDeCiertaEdad(numPersonas, personas);
                break;
            }
            case 3: {
                mostrarPersonasConInicial(numPersonas, personas);
                break;
            }
            case 4: {
                break;
            }
            default: {
                std::cout << "Opcion invalida." << std::endl;
                break;
            }
        }

    } while (opcion != 4);

    return 0;
}
