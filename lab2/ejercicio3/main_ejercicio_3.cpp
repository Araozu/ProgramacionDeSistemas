//
// Created by araozu on 5/13/20.
//

#include "atleta.h"
#include "carrera.h"

int main() {

    Atleta atleta1("Juan Perez", 1, "Peruano", 19.05);
    Atleta atleta2("Usain Bolt", 8, "Jamaiquino", 19.005);
    Atleta atleta3("Jorge", 10, "Uruguayo", 19.025);

    std::vector<Atleta> atletas = { atleta1, atleta2, atleta3 };

    Carrera carrera1(2000, atletas);

    Atleta* atletaGanador = carrera1.obtenerGanador();

    if (atletaGanador != nullptr) {
        Atleta atleta = *atletaGanador;
        std::cout << "El ganador es " << atleta.getNombre() << " con un tiempo de "
            << atleta.getTiempo() << std::endl;
    } else {
        std::cout << "La carrera no tiene participantes." << std::endl;
    }

    return 0;
}
