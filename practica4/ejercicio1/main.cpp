#include <iostream>

int* crearArrSigNivel(const int* arrActual, int largo) {
    int* nuevoArr = new int[largo + 1];

    nuevoArr[0] = 1;
    nuevoArr[largo] = 1;

    for (int posArrNuevo = 1, i = 0, j = 1; posArrNuevo < largo; posArrNuevo++, i++, j++) {
        nuevoArr[posArrNuevo] = arrActual[i] + arrActual[j];
    }

    return nuevoArr;
}

void imprimirArr(int* arr, int largo, int niveles) {

    std::string s(niveles - largo, ' ');
    std::cout << s;
    for (int i = 0; i < largo; i++) {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;

}

int main() {

    int niveles;
    std::cout << "Ingrese el numero de niveles: ";
    std::cin >> niveles;

    int* elementos = new int{ 1 };

    imprimirArr(elementos, 1, niveles);
    for (int i = 1; i < niveles; i++) {
        elementos = crearArrSigNivel(elementos, i);
        imprimirArr(elementos, i + 1, niveles);
    }

    return 0;
}

