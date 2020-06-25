#include <iostream>

double Suma(double x, double y);
double Producto(double x, double y);


int main() {
    double a, b;
    int c;

    std::cout << "Escribe un numero" << std::endl;
    std::cin >> a;

    std::cout << "Escribe otro numero" << std::endl;
    std::cin >> b;

    std::cout << "Que operacion deseas hacer, 1(suma), 2(producto)" << std::endl;
    std::cin >> c;

    if (c == 1) {
        std::cout << "El resultado de la suma es: " << Suma(a, b) << std::endl;
    } else {
        std::cout << "El resultado del producto es: " << Producto(a, b) << std::endl;
    }

    return 0;
}

double Suma(double x, double y) {
    return x + y;
}

double Producto(double x, double y) {
    return x * y;
}
