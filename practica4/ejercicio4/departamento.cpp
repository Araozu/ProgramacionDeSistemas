//
// Created by Fernando on 29/05/2020.
//

#include "departamento.h"

Departamento::Departamento(int _numPersonas) {
    numPersonas = _numPersonas;
}

Departamento::Departamento() {
    numPersonas = 0;
}

void Departamento::opupar(int _numPersonas) {
    numPersonas = _numPersonas;
}

void Departamento::desocupar() {
    numPersonas = 0;
}

int Departamento::getNumPersonas() const {
    return numPersonas;
}
