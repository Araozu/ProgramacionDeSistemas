//
// Created by Fernando on 06/06/2020.
//

#ifndef EJERCICIO1_METODOS_H
#define EJERCICIO1_METODOS_H
#include "tipoDatos.h"

int agregarAFichero(int numFichas, tipoDatos* fichas);
void imprimirFicheros(int numFichas, tipoDatos* fichas);
void obtTamanoEImprFicherosMasGrandes(int numFichas, tipoDatos* fichas);
void verDatosDeUnFichero(int numFichas, tipoDatos* fichas);
void busquedaParcial(int numFichas, tipoDatos* fichas);
int eliminarFichero(int numFichas, tipoDatos* fichas);

#endif //EJERCICIO1_METODOS_H
