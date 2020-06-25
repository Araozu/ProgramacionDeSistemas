//
// Created by araozu on 5/13/20.
//

#include "atleta.h"

Atleta::Atleta(std::string _nombre, int _numero, std::string _nacionalidad, double _tiempo) {
    nombre = _nombre;
    numero = _numero;
    nacionalidad = _nacionalidad;
    tiempo = _tiempo;
}

double Atleta::getTiempo() const {
    return tiempo;
}

std::string Atleta::getNombre() const {
    return nombre;
}
