#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    int dado1, dado2, suma, tiradaUsuario;
    srand(time(nullptr));

    std::cout << "Presiona ENTER para lanzar los dados." << std::endl;
    std::cin.ignore();

    dado1 = (rand() % 6) + 1;
    dado2 = (rand() % 6) + 1;
    suma = dado1 + dado2;

    std::cout << "La tirada fue " << dado1 << " y " << dado2 << ", sumando " << suma << std::endl;

    if (suma == 7 || suma == 11) {
        std::cout << "¡Ganaste!" << std::endl;
        return 0;
    }

    if (suma == 2 || suma == 3 || suma == 12) {
        std::cout << "Perdiste." << std::endl;
        return 0;
    }

    tiradaUsuario = suma;
    std::cout << "Tu \"punto\" es " << tiradaUsuario << std::endl;

    do {
        std::cout << "Presiona ENTER para lanzar los dados." << std::endl;
        std::cin.ignore();

        dado1 = (rand() % 6) + 1;
        dado2 = (rand() % 6) + 1;
        suma = dado1 + dado2;

        std::cout << "La tirada fue " << dado1 << " y " << dado2 << ", sumando " << suma << std::endl;

        if (suma == tiradaUsuario) {
            std::cout << "¡Ganaste!" << std::endl;
            return 0;
        }

    } while (suma != 7);

    std::cout << "Perdiste.";

    return 0;
}
