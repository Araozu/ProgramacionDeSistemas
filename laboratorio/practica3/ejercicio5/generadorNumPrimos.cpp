//
// Created by araozu on 5/22/20.
//

#include "generadorNumPrimos.h"

int GeneradorNumPrimos::sigNumPrimo() {

    int j;
    for (int i = numActual + 1;; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (i == j || i == 1) {
            numActual = i;
            return i;
        }
    }

}

bool GeneradorNumPrimos::esPrimo(int num) {
    int i;
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return num == i;
}
