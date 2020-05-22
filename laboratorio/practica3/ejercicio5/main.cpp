#include <iostream>
#include <vector>
#include <cmath>
#include "generadorNumPrimos.h"


void imprimirParOImpar(const std::vector<int>& elementos) {
    for (int i: elementos) {
        if (i % 2 == 0) {
            std::cout << i << " es numero par" << std::endl;
        } else {
            std::cout << i << " es numero impar" << std::endl;
        }
    }
}

std::vector<int> obtener10NumerosDeConsola() {
    std::cout << "Ingrese 10 numeros separados con espacio: ";

    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10;
    std::cin >> i1 >> i2 >> i3 >> i4 >> i5 >> i6 >> i7 >> i8 >> i9 >> i10;

    return {i1, i2, i3, i4, i5, i6, i7, i8, i9, i10};
}

void obtenerPrimeros100NumerosPerfectos() {
    std::cout << "Los primeros 100 numeros perfectos son:" << std::endl;

    GeneradorNumPrimos generadorNumPrimos;
    for (int i = 1; i < 100;) {
        int sigNumPrimo = generadorNumPrimos.sigNumPrimo();

        int _2elevadoAPrimoMenos1 = pow(2, sigNumPrimo - 1);
        int segundaParte = _2elevadoAPrimoMenos1 * 2 - 1;

        if (generadorNumPrimos.esPrimo(segundaParte)) {
            std::cout << _2elevadoAPrimoMenos1 * segundaParte << std::endl;
            i++;
        }
    }

}

std::string revertirStr(const std::string& str) {

    std::string res;
    for (int i = str.length() - 1; i >= 0; i--) {
        res += str[i];
    }

    return res;
}


int main() {

    int opcion;
    std::cout << "Escoge una opción:\n"
              << "1. Determinar de 10 enteros cuales son pares o no\n"
              << "2. Hallar los primeros 100 numeros perfectos\n"
              << "3. Invertir un número de 4 dígitos\n"
              << ": ";

    std::cin >> opcion;

    switch (opcion) {
        case 1: {
            std::vector<int> numeros = obtener10NumerosDeConsola();
            imprimirParOImpar(numeros);
            break;
        }
        case 2: {
            obtenerPrimeros100NumerosPerfectos();
            break;
        }
        case 3: {

            int entrada;
            std::cout << "Ingresa un numero de 4 digitos: ";
            std::cin >> entrada;

            std::cout << "El resultado es: " << revertirStr(std::to_string(entrada)) << std::endl;

            break;
        }
        default: {
            std::cout << "Opcion invalida." << std::endl;
            break;
        }
    }

    return 0;
}

