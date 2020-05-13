//
// Created by araozu on 5/13/20.
//

#ifndef PS_TANQUE_H
#define PS_TANQUE_H


class Tanque {
private:

    double contenido;

public:

    static const int capacidad = 5000.0;
    Tanque();
    double getContenido() const;
    void agregar(double cantidad);  // no superar la capacidad
    void sacar(double cantidad);    // no sacar más de lo que hay
    void sacaMitad();

};


#endif //PS_TANQUE_H
