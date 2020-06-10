#include <iostream>
#include "Jugador.h"

int imprimirMenuYObtenerRespuesta() {

    std::cout << std::endl
              << "Escoge una opcion:" << std::endl
              << "1. Mostrar los nombres" << std::endl
              << "2. Mostrar las alturas" << std::endl
              << "3. Mostrar las edades" << std::endl
              << "4. Salir" << std::endl
              << "Escoge una opcion:";

    int res;
    std::cin >> res;

    return res;
}

int insertarJugadores(int numJugadores, Jugador* jugadores) {

    while (numJugadores < 5) {

        std::string nombre;
        std::cout << "Ingresa el nombre:";
        std::cin.ignore();
        getline(std::cin, nombre);
        jugadores[numJugadores].nombre = nombre;
        std::cout << "Ingresa la altura:";
        std::cin >> jugadores[numJugadores].altura;
        std::cout << "Ingresa la edad:";
        std::cin >> jugadores[numJugadores].edad;

        std::cout << std::endl << "Jugador ingresado." << std::endl << std::endl;

        numJugadores++;
    }

    return numJugadores;
}

void mostrarTodosLosNombres(int numPersonas, Jugador* jugadores) {
    for (int i = 0; i < numPersonas; i++) {
        std::cout << jugadores[i].nombre << std::endl;
    }
}

void mostrarTodasLasAlturas(int numPersonas, Jugador* jugadores) {
    for (int i = 0; i < numPersonas; i++) {
        std::cout << jugadores[i].altura << std::endl;
    }
}

void mostrarTodasLasEdades(int numPersonas, Jugador* jugadores) {
    for (int i = 0; i < numPersonas; i++) {
        std::cout << jugadores[i].edad << std::endl;
    }
}

int main() {

    int numPersonas = 0;
    Jugador* personas = new Jugador[50];

    numPersonas = insertarJugadores(numPersonas, personas);

    int opcion;
    do {
        opcion = imprimirMenuYObtenerRespuesta();

        switch (opcion) {
            case 1: {
                mostrarTodosLosNombres(numPersonas, personas);
                break;
            }
            case 2: {
                mostrarTodasLasAlturas(numPersonas, personas);
                break;
            }
            case 3: {
                mostrarTodasLasEdades(numPersonas, personas);
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
