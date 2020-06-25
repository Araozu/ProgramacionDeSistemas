#include <iostream>

int AreaCuadrilateros(double lado_a, double lado_b);
int AreaTriangulos(double lado_a, double altura_b);

int main() {

    double a, b;
    int figura;

    std::cout << "Que figura quiere analizar, Cuadrado (1), Rectangulo (2), Triangulo(3):" << std::endl;
    std::cin >> figura;

    switch (figura) {
        case 1: {
            std::cout << "Introduzca el valor del lado" << std::endl;
            std::cin >> a;

            int resultado = AreaCuadrilateros(a, a);
            if (!resultado) {
                std::cout << "Ojo el area es negativa" << std::endl;
            } else {
                std::cout << "El resultado es " << resultado << std::endl;
            }

            break;
        }
        case 2: {
            std::cout << "Introduzca el valor del lado a:" << std::endl;
            std::cin >> a;
            std::cout << "Introduzca el valor del lado b:" << std::endl;
            std::cin >> b;

            int resultado = AreaCuadrilateros(a, b);
            if (!resultado) {
                std::cout << "Ojo el area es negativa" << std::endl;
            } else {
                std::cout << "El resultado es " << resultado << std::endl;
            }

            break;
        }
        case 3: {
            std::cout << "Introduzca la base:" << std::endl;
            std::cin >> a;
            std::cout << "Introduzca la altura:" << std::endl;
            std::cin >> b;

            int resultado = AreaTriangulos(a, b);
            if (!resultado) {
                std::cout << "Ojo el area es negativa" << std::endl;
            } else {
                std::cout << "El resultado es " << resultado << std::endl;
            }

            break;
        }
        default: {
            std::cout << "Figura equivocada." << std::endl;
            break;
        }
    }

    return 0;
}

int AreaCuadrilateros(double lado_a, double lado_b) {
    return lado_a * lado_b;
}

int AreaTriangulos(double lado_a, double altura_b) {
    return (lado_a * altura_b) / 2;
}
