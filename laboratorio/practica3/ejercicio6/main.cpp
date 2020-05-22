#include <iostream>
#include <vector>

using namespace std;

vector<int> eliminarDeArrYDevolver(const vector<int>& elementos, int numAEliminar) {
    vector<int> nuevoArr;

    for (int numActual : elementos) {
        if (numActual != numAEliminar) {
            nuevoArr.push_back(numActual);
        }
    }

    return nuevoArr;
}


vector<string> obtenerPermutacion(const vector<int>& elementos) {

    if (elementos.size() == 1) {
        return { to_string(elementos[0]) };
    }

    vector<string> resultado;
    for (int i = 0; i < elementos.size(); i ++) {

        int charActual = elementos[i];
        vector<int> elementosRestantes = eliminarDeArrYDevolver(elementos, charActual);

        vector<string> resultadoIteracion = obtenerPermutacion(elementosRestantes);
        for (const string& s: resultadoIteracion) {

            string strAAgregar = to_string(charActual) + s;
            resultado.push_back(strAAgregar);

        }

    }

    return resultado;
}


void imprimirVectorString(const vector<string>& elementos) {
    for (const string& s: elementos) {
        cout << s << endl;
    }
}


vector<int> obtenerVectorHasta(int maximo) {
    vector<int> resultado;
    for (int i = 1; i <= maximo; i++) {
        resultado.push_back(i);
    }
    return resultado;
}


int main() {

    int numMaximo;
    cout << "Ingrese hasta qué numero hallar permutaciones: ";
    cin >> numMaximo;

    vector<int> elems = obtenerVectorHasta(numMaximo);
    vector<string> resultado = obtenerPermutacion(elems);

    imprimirVectorString(resultado);

    return 0;
}
