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

