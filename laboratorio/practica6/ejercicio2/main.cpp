#include <iostream>
#include <fstream>

struct Tdato {
    int b;
    char s[100];
};

int main() {

    int x, n, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    double f;
    char nombre[] = "Ejercicios ficheros binarios";
    Tdato p{};
    std::ifstream f1;
    std::ofstream f2;
    f1.open("entrada.dat", std::ios::in | std::ios::binary);
    f2.open("salida.dat", std::ios::out | std::ios::binary);

    if (!f1.is_open()) {
        std::cout << "No se pudo abrir el archivo entrada.dat para lectura.";
        return 1;
    }

    if (!f2.is_open()) {
        std::cout << "No se pudo abrir el archivo salida.dat para lectura.";
        return 1;
    }


    // Escribir el dato entero x en el fichero
    f2.write(reinterpret_cast<const char*>(&x), sizeof(x));

    // Escribir el dato double f en el fichero
    f2.write(reinterpret_cast<const char*>(&f), sizeof(f));

    // Escribir los 5 primeros elementos del array a en el fichero
    f2.write(reinterpret_cast<const char*>(a), sizeof(int) * 5);

    // Escribir los 10 primeros caracteres de la cadena nombre en el fichero
    f2.write(nombre, sizeof(char) * 10);

    // Escribir el dato de tipo Tdato p en el fichero
    f2.write(reinterpret_cast<const char*>(&p), sizeof(Tdato));

    // Leer un dato entero del fichero y almacenarlo en la variable x
    f1.read(reinterpret_cast<char*>(&x), sizeof(x));

    // Leer un dato double del fichero y almacenarlo en la variable f
    f1.read(reinterpret_cast<char*>(&f), sizeof(f));

    // Leer 5 enteros y almacenarlos en el array a
    f1.read(reinterpret_cast<char*>(a), sizeof(int) * 5);

    // Leer 10 caracteres y almacenarlos en la cadena nombre
    f1.read(nombre, sizeof(char) * 10);

    // Leer un dato de tipo Tdato y almacenarlo en la variable p
    f1.read(reinterpret_cast<char*>(&p), sizeof(Tdato));

    std::cout << x << std::endl
              << f << std::endl
              << a[0] << std::endl
              << nombre << std::endl;

    return 0;
}

