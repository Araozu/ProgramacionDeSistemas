#include <iostream>

int obtPosMatriz(int numCol, int numFilaActual, int numColumnaActual) {
    return numCol * numFilaActual + numColumnaActual;
}

void imprimirMatriz(int* matriz, int numFilas, int numCol) {
    for (int i = 0; i < numFilas; i++) {
        for (int j = 0; j < numCol; j++) {
            int posActual = obtPosMatriz(numCol, i, j);
            std::cout << matriz[posActual] << "  ";
        }
        std::cout << std::endl;
    }
}

void multiplicarMatriz(int* matriz1, int* matriz2, int* matrizRes, int numFilasM1, int numColM1,
                       int numFilasM2, int numColM2) {

    if (numColM1 != numFilasM2) return;

    for (int i = 0; i < numFilasM1; i++) {
        for (int j = 0; j < numColM2; j++) {
            int posMatrizResultado = obtPosMatriz(numColM2, i, j);

            int valor = 0;
            for (int pos = 0; pos < numColM1; pos++) {
                int posM1 = obtPosMatriz(numColM1, i, pos);
                int posM2 = obtPosMatriz(numColM2, pos, j);
                valor += matriz1[posM1] * matriz2[posM2];
            }

            matrizRes[posMatrizResultado] = valor;
        }
    }

}


int main() {

    int matriz1[6] = {
            2, 3, 4,
            1, 0, 0
    };

    int matriz2[6] = {
            0, 1000,
            1, 100,
            0, 10
    };

    int matrizRes[4] = {
            -1, -1,
            -1, -1
    };

    imprimirMatriz(matrizRes, 2, 2);
    multiplicarMatriz(matriz1, matriz2, matrizRes, 2, 3, 3, 2);
    imprimirMatriz(matrizRes, 2, 2);

    return 0;
}
