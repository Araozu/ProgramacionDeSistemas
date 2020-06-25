//
// Created by Fernando on 29/05/2020.
//

#ifndef EJERCICIO4_DEPARTAMENTO_H
#define EJERCICIO4_DEPARTAMENTO_H


class Departamento {
private:
    int numPersonas;

public:
    explicit Departamento(int _numPersonas);
    Departamento();
    void opupar(int _numPersonas);
    void desocupar();
    int getNumPersonas() const;

};


#endif //EJERCICIO4_DEPARTAMENTO_H
