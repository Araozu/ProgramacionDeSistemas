#include <iostream>
#include <fstream>

void escribirFrases() {
    std::ofstream frasesEntrada;
    frasesEntrada.open("frases.txt");

    if (!frasesEntrada.is_open()) {
        std::cout << "No se pudo abrir el archivo frases.txt para escritura.";
        return;
    }

    while (true) {
        std::string frase;
        std::cout << "Ingresa una frase (vacio para terminar):";
        std::getline(std::cin, frase);
        if (frase.empty()) {
            std::cout << std::endl;
            break;
        } else {
            frasesEntrada << frase << std::endl;
        }
    }

    frasesEntrada.close();
}

void imprimirFrases() {
    std::ifstream frasesSalida;
    frasesSalida.open("frases.txt");

    if (!frasesSalida.is_open()) {
        std::cout << "No se pudo abrir el archivo frases.txt para lectura.";
    }

    while (!frasesSalida.eof()) {
        std::string frases;
        std::getline(frasesSalida, frases);
        std::cout << frases << std::endl;
    }

    frasesSalida.close();
}

int main() {

    escribirFrases();
    imprimirFrases();

    return 0;
}
