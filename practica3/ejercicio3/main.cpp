#include <iostream>

double sumar(double x, double y);
double restar(double x, double y);
double multiplicar(double x, double y);
double dividir(double x, double y);

int main() {

    int opcion;
    std::cout << "¿Qué operación desea realizar?\n"
              << "1. Suma\n"
              << "2. Resta\n"
              << "3. Multiplicación\n"
              << "4. División\n"
              << "Escoja una opción: ";
    std::cin >> opcion;

    if (opcion <= 0 || opcion >= 5) {
        std::cout << "Opción incorrecta." << std::endl;
        return 0;
    }

    double x, y;
    std::cout << "Ingrese el primer valor: ";
    std::cin >> x;
    std::cout << "Ingrese el segundo valor: ";
    std::cin >> y;

    double resultado;
    switch (opcion) {
        case 1: {
            resultado = sumar(x, y);
            break;
        }
        case 2: {
            resultado = restar(x, y);
            break;
        }
        case 3: {
            resultado = multiplicar(x, y);
            break;
        }
        case 4: {
            resultado = dividir(x, y);
            break;
        }
        default: {
            std::cerr << "Error. Opción imposible." << std::endl;
            resultado = 0;
        }
    }

    std::cout << "El resultado es " << resultado << std::endl;

    return 0;
}

double sumar(double x, double y) {
    return x + y;
}

double restar(double x, double y) {
    return x - y;
}

double multiplicar(double x, double y) {
    return x * y;
}

double dividir(double x, double y) {
    if (y == 0) {
        std::cout << "Error. Se intentó una división por cero. El valor de la división será cero." << std::endl;
        return 0;
    }

    return x / y;
}
