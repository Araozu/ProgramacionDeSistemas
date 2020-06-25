#include <iostream>
#include <fstream>

void imprimirArchivo(const std::string& dirArchivo) {

    std::ifstream archivo;
    archivo.open(dirArchivo);

    if (!archivo.is_open()) {
        std::cout << "Error al abrir el archivo " << dirArchivo << " para lectura.";
        return;
    }

    std::string linea;
    while (!archivo.eof()) {
        for (int i = 0; i < 25 && !archivo.eof(); i++) {

            std::getline(archivo, linea);
            std::cout << linea << std::endl;

        }
        std::cout << "Presiona enter para continuar...";
        std::cin.ignore();
    }

    archivo.close();
}

int main() {

    std::string dirArchivo;
    std::cout << "Ingresa la direccion del archivo:";
    std::getline(std::cin, dirArchivo);

    imprimirArchivo(dirArchivo);
    return 0;
}
