//
// Created by Fernando on 06/06/2020.
//
#include "tipoDatos.h"

int agregarAFichero(int numFichas, tipoDatos* fichas) {

    if (numFichas >= 1000) {
        std::cout << "Máximo de fichas alcanzado (1000)!" << std::endl;
        return numFichas;
    }

    std::string nombre;
    while (true) {
        std::cout << "Introduce el nombre del fichero: ";
        std::cin >> nombre;

        if (nombre.empty()) {
            std::cout << "Error. El nombre del fichero no puede estar vacio." << std::endl;
        } else {
            break;
        }
    }
    fichas[numFichas].nombreFich = nombre;

    int tamanyo;
    while (true) {
        std::cout << "Introduce el tamaño en KB: ";
        std::cin >> tamanyo;

        if (tamanyo < 0) {
            std::cout << "Error. El tamaño del fichero no puede ser negativo." << std::endl;
        } else {
            break;
        }
    }
    fichas[numFichas].tamanyo = tamanyo;

    numFichas++;  // Y tenemos una ficha más

    return numFichas;
}

void imprimirFicheros(int numFichas, tipoDatos* fichas) {
    for (int i = 0; i < numFichas; i++) {
        std::cout << "Nombre: " << fichas[i].nombreFich
                  << "; Tamaño: " << fichas[i].tamanyo
                  << "Kb" << std::endl;
    }
}

void obtTamanoEImprFicherosMasGrandes(int numFichas, tipoDatos* fichas) {
    int numeroTemporal;
    std::cout << "¿A partir de que tamaño quieres que te muestre? ";
    std::cin >> numeroTemporal;

    for (int i = 0; i < numFichas; i++) {
        if (fichas[i].tamanyo >= numeroTemporal) {
            std::cout << "Nombre: " << fichas[i].nombreFich
                      << "; Tamaño: " << fichas[i].tamanyo
                      << " Kb" << std::endl;
        }
    }

}

void verDatosDeUnFichero(int numFichas, tipoDatos* fichas) {
    std::string textoTemporal;
    std::cout << "¿De qué fichero quieres ver todos los datos?";
    std::cin >> textoTemporal;
    for (int i = 0; i < numFichas; i++) {
        if (fichas[i].nombreFich == textoTemporal) {
            std::cout << "Nombre: " << fichas[i].nombreFich
                      << "; Tamaño: " << fichas[i].tamanyo
                      << " Kb" << std::endl;
        }
    }
}

void busquedaParcial(int numFichas, tipoDatos* fichas) {
    std::string texto;
    std::cout << "Ingresa una parte del nombre a buscar:";
    std::cin >> texto;
    for (int i = 0; i < numFichas; i++) {
        if (fichas[i].nombreFich.find(texto) != std::string::npos) {
            std::cout << "Nombre: " << fichas[i].nombreFich
                      << "; Tamaño: " << fichas[i].tamanyo
                      << " Kb" << std::endl;
        }
    }
}

int eliminarFichero(int numFichas, tipoDatos* fichas) {
    int posicion;
    while (true) {
        std::cout << "Ingresa la posición a borrar:";
        std::cin >> posicion;

        if (posicion < 0 || posicion >= numFichas) {
            std::cout << "La posición indicada es invalida.";
            return numFichas;
        } else {
            break;
        }
    }

    for (int i = posicion; i < numFichas - 1; i++) {
        fichas[i] = fichas[i + 1];
    }

    return numFichas - 1;
}

void modificarFichero(int numFichas, tipoDatos* fichas) {
    int posicion;
    while (true) {
        std::cout << "Ingresa la posición a modificar:";
        std::cin >> posicion;

        if (posicion < 0 || posicion >= numFichas) {
            std::cout << "La posición indicada es invalida.";
        } else {
            break;
        }
    }

    std::string nuevoNombre;
    std::cout << "Ingresa el nuevo nombre (vacio para omitir):";
    std::cin.ignore();
    getline(std::cin, nuevoNombre);
    if (!nuevoNombre.empty()) {
        fichas[posicion].nombreFich = nuevoNombre;
    }


    std::string nuevoTamanio;
    std::cout << "Ingresa el nuevo tamaño (vacio para omitir):";
    std::cin.ignore();
    getline(std::cin, nuevoTamanio);
    if (!nuevoTamanio.empty()) {
        fichas[posicion].tamanyo = std::stoi(nuevoTamanio);
    }

}