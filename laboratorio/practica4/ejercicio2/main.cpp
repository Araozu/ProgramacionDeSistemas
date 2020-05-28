#include <iostream>
#include <cstring>

int obtenerLargoPalabra(const char* palabra) {
    int i = 0;
    while (palabra[i] != '\0') {
        i++;
    }
    return i + 1;
}

char* obtenerPalabraUsuario(int largo) {

    char* palabraUsuario = new char[largo];
    palabraUsuario[largo - 1] = '\0';

    for (int i = 0; i < largo - 1; i++) {
        palabraUsuario[i] = '_';
    }

    return palabraUsuario;
}

int main() {

    char palabra[50];
    std::cout << "Ingresa una palabra: ";
    std::cin >> palabra;

    int numCaracteres = obtenerLargoPalabra(palabra);

    char* palabraUsuario = obtenerPalabraUsuario(numCaracteres);

    char c;
    int vidas = 10;
    while (true) {

        std::cout << "Ingresa un caracter: ";
        std::cin >> c;


        bool restarVida = true;
        for (int i = 0; i < numCaracteres - 1; i++) {
            if (palabra[i] == c) {
                palabraUsuario[i] = c;
                restarVida = false;
            }
        }
        std::cout << palabraUsuario << std::endl;

        if (strcmp(palabra, palabraUsuario) == 0) {
            std::cout << "Ganaste" << std::endl;
            break;
        }

        if (restarVida) {
            vidas--;
            std::cout << "Te quedan " << vidas << " vidas." << std::endl;
        }

        if (vidas == 0) {
            std::cout << "Perdiste. La palabra era '" << palabra << "'." << std::endl;
            break;
        }
        std::cout << std::endl;
    }

    return 0;
}
