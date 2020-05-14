//
// Created by araozu on 5/13/20.
//

#ifndef PS_ATLETA_H
#define PS_ATLETA_H
#include <iostream>

class Atleta {
private:
    std::string nombre;
    int numero;
    std::string nacionalidad;
    double tiempo;

public:
    Atleta(std::string _nombre, int _numero, std::string _nacionalidad, double _tiempo);
    double getTiempo() const;
    std::string getNombre() const;

};


#endif //PS_ATLETA_H
