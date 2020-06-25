//
// Created by araozu on 5/13/20.
//

#include "tanque.h"
#include <iostream>


Tanque::Tanque() {
    contenido = 0;
}


double Tanque::getContenido() const {
    return contenido;
}


void Tanque::agregar(double cantidad) {
    if (cantidad + contenido <= 5000) {
        contenido += cantidad;
    } else {
        std::cout << "Error al agregar al tanque: Se excede la capacidad máxima de 5000." << std::endl;
    }
}


void Tanque::sacar(double cantidad) {
    if (cantidad <= contenido) {
        contenido -= cantidad;
    } else {
        std::cout << "Error al sacar del tanque: El tanque no tiene esa cantidad disponible." << std::endl;
    }
}


void Tanque::sacaMitad() {
    contenido /= 2;
}

