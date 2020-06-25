#include <iostream>

void hallarPuntoSilla(const int* matriz, int numFilas, int numColumnas, int* posPuntoSilla) {

    for (int i = 0; i < numFilas; i++) {

        int posMenorValorFila = (numFilas * (i + 1)) - (numFilas - 0);
        int menorValorDeFila = matriz[posMenorValorFila];
        int numColumnaMenor = 0;

        for (int j = 1; j < numColumnas; j++) {

            int nuevaPos = (numFilas * (i + 1)) - (numFilas - j);
            int nuevoValor = matriz[nuevaPos];
            if (nuevoValor < menorValorDeFila) {
                menorValorDeFila = nuevoValor;
                posMenorValorFila = nuevaPos;
                numColumnaMenor = j;
            }
        }

        int mayorValorDeColumna = menorValorDeFila;
        for (int j = 0; j < numFilas; j++) {

            int nuevaPos = (numFilas * (j + 1)) - (numFilas - numColumnaMenor);
            int nuevoValor = matriz[nuevaPos];
            if (nuevoValor > mayorValorDeColumna) {
                mayorValorDeColumna = nuevoValor;
            }
        }

        if (mayorValorDeColumna == menorValorDeFila) {
            *posPuntoSilla = posMenorValorFila;
            return;
        }

    }

    *posPuntoSilla = -1;
}

int main() {

    int matriz[12] = {
            10, 14, 8,
            35, 22, 48,
             7, -2, 15
    };

    int puntoSilla = -1;
    hallarPuntoSilla(matriz, 3, 3, &puntoSilla);

    if (puntoSilla != -1) {
        std::cout << "El punto silla esta en la posicion " << puntoSilla
            << ", y su valor es " << matriz[puntoSilla] << "." << std::endl;
    } else {
        std::cout << "La matriz no tiene punto silla." << std::endl;
    }

    return 0;
}
