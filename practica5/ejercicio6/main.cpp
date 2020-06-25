#include <iostream>
#include "metodos.h"
#include "tipoDatos.h"

void imprimirMenuOpciones() {
    std::cout << std::endl;
    std::cout << "Escoja una opcion:" << std::endl;
    std::cout << "1.- Anadir datos de un nuevo fichero" << std::endl;
    std::cout << "2.- Mostrar los nombres de todos los ficheros" << std::endl;
    std::cout << "3.- Mostrar ficheros que sean de mas de un cierto tamaño" << std::endl;
    std::cout << "4.- Ver datos de un fichero" << std::endl;
    std::cout << "5.- Busqueda de nombre parcial" << std::endl;
    std::cout << "6.- Salir" << std::endl;
    std::cout << "Escoge una opcion: ";
}

int main() {

    int numOpcion;
    int numeroFichas = 0;
    tipoDatos* fichas = new tipoDatos[1000];

    do {

        imprimirMenuOpciones();
        std::cin >> numOpcion;

        switch (numOpcion) {
            case 1: {
                numeroFichas = agregarAFichero(numeroFichas, fichas);
                break;
            }
            case 2: {
                imprimirFicheros(numeroFichas, fichas);
                break;
            }
            case 3: {
                obtTamanoEImprFicherosMasGrandes(numeroFichas, fichas);
                break;
            }
            case 4: {
                verDatosDeUnFichero(numeroFichas, fichas);
                break;
            }
            case 5: {
                busquedaParcial(numeroFichas, fichas);
                break;
            }
            case 6: {
                std::cout << "Fin del programa" << std::endl;
                break;
            }
            default: {
                std::cout << "Opción desconocida!" << std::endl;
                break;
            }
        }

    } while (numOpcion != 6);

    return 0;
}
