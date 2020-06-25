#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

//DEFINIENDO LAS VARIABLES NECESARIAS
string nombre, auxnombre, semestre, edad;
int clave = 0, auxclave = 0;
char grupo[10];
char opcionSeleccionada;
bool encontrado = false;


void altas() {
    ///Variables de la biblioteca fstream para el manejo de archivos
    ofstream escritura;
    ifstream consulta;

    do {
        // crea y escribe, si ya tiene texto une al final del archivo
        escritura.open("alumnos.txt", ios::out | ios::app);
        //solamente consulta o lee usando la variable sobre el archivo físico alumnos.txt
        consulta.open("alumnos.txt", ios::in);

        if (escritura.is_open() && consulta.is_open()) {

            bool repetido = false;

            cout << "\n";
            cout << "\tIngresa la clave del alumno:    ";
            cin >> auxclave;

            ///A continuación se aplica el tipo de lectura de archivos secuencial
            consulta >> clave;
            while (!consulta.eof()) {
                consulta >> nombre >> semestre >> grupo >> edad;
                if (auxclave == clave) {
                    cout << "\t\tYa existe la clave del alumno...\n";
                    repetido = true;
                    break;
                }
                consulta >> clave;
            }

            if (!repetido) {
                cout << "\tIngresa el nombre del alumno:   ";
                cin >> nombre;
                cout << "\tIngresa el semestre del alumno: ";
                cin >> semestre;
                cout << "\tIngresa el grupo del alumno:    ";
                cin >> grupo;
                cout << "\tIngresa la edad del alumno:     ";
                cin >> edad;
                //ESCRIBIENDO LOS DATOS CAPTURADOS POR EL USUARIO EN EL ARCHIVO
                escritura << auxclave << " " << nombre << " " << semestre << " "
                          << grupo << " " << edad << endl;
                cout << "\n\tRegistro agregado...\n";
            }

            cout << "\n\tDeseas ingresar otro alumno? (S/N): ";
            cin >> opcionSeleccionada;

        } else {
            cout << "El archivo no se pudo abrir \n";
        }

        escritura.close();
        consulta.close();

    } while (opcionSeleccionada == 'S' or opcionSeleccionada == 's');

}

void bajas() {
    ofstream aux;
    ifstream lectura;

    encontrado = false;

    aux.open("auxiliar.txt", ios::out);
    lectura.open("alumnos.txt", ios::in);

    if (aux.is_open() && lectura.is_open()) {

        cout << "\n";
        cout << "\tIngresa la clave del alumno que deseas eliminar: ";
        cin >> auxclave;

        ///De nuevo se aplica el tipo de lectura de archivos secuencial, esto quiere decir que
        /// lee campo por campo hasta llegar al final del archivo gracias a la función .eof()
        lectura >> clave;
        while (!lectura.eof()) {
            lectura >> nombre >> semestre >> grupo >> edad;
            if (auxclave == clave) {
                encontrado = true;
                cout << "\n";
                cout << "\tClave:    " << clave << endl;
                cout << "\tNombre:   " << nombre << endl;
                cout << "\tSemestre: " << semestre << endl;
                cout << "\tGrupo:    " << grupo << endl;
                cout << "\tEdad:     " << edad << endl;
                cout << "\t________________________________\n\n";
                cout << "\tRealmente deseas eliminar el registro actual (S/N)? ---> ";
                cin >> opcionSeleccionada;

                if (opcionSeleccionada == 'S' or opcionSeleccionada == 's') {
                    cout << "\n\n\t\t\tRegistro eliminado...\n\n\t\t\a";
                } else {
                    aux << clave << " " << nombre << " " << semestre << " " << grupo << " " << edad << endl;
                }

            } else {
                aux << clave << " " << nombre << " " << semestre << " " << grupo << " " << edad << endl;
            }
            lectura >> clave;
        }
    } else {
        cout << "\n\tEl archivo no se pudo abrir \n";
    }

    if (!encontrado) {
        cout << "\n\tNo se encontro ningun registro con la clave: " << auxclave << "\n\n\t\t\t";
    }

    aux.close();
    lectura.close();
    remove("alumnos.txt");
    rename("auxiliar.txt", "alumnos.txt");
}

void consultas() {
    //Lectura de archivos

    ifstream lectura;
    lectura.open("alumnos.txt", ios::out | ios::in);//CREA, ESCRIBE O LEE
    if (lectura.is_open()) {
        //LEYENDO Y MOSTRANDO CADA CAMPO DEL ARCHIVO DE FORMA SECUENCIAL
        lectura >> clave;
        while (!lectura.eof()) {
            lectura >> nombre >> semestre >> grupo >> edad;
            cout << "\n";
            cout << "\tClave:    " << clave << endl;
            cout << "\tNombre:   " << nombre << endl;
            cout << "\tSemestre: " << semestre << endl;
            cout << "\tGrupo:    " << grupo << endl;
            cout << "\tEdad:     " << edad << endl;
            lectura >> clave;
            cout << "\t________________________________\n";
        }

    } else {
        cout << "El archivo no se pudo abrir \n";
    }
    lectura.close();
}

void buscar() {
    ifstream lectura;
    lectura.open("alumnos.txt", ios::out | ios::in);

    encontrado = false;

    if (lectura.is_open()) {
        cout << "\n\tIngresa la clave del alumno que deseas buscar: ";
        cin >> auxclave;
        lectura >> clave;

        while (!lectura.eof()) {
            lectura >> nombre >> semestre >> grupo >> edad;

            if (auxclave == clave) {
                cout << "\n";
                cout << "\tClave:    " << clave << endl;
                cout << "\tNombre:   " << nombre << endl;
                cout << "\tSemestre: " << semestre << endl;
                cout << "\tGrupo:    " << grupo << endl;
                cout << "\tEdad:     " << edad << endl;
                cout << "\t________________________________\n";
                encontrado = true;
                break;
            }

            // lectura adelantada
            lectura >> clave;
        }

        if (!encontrado) {
            cout << "\n\n\tNo hay registros con la clave: " << auxclave << "\n\n\t\t\t";
        }

    } else {
        cout << "\n\tAun no se pudo abrir el archivo...";
    }

    lectura.close();
}

void modificar() {
    ofstream aux;
    ifstream lectura;

    encontrado = false;

    aux.open("auxiliar.txt", ios::out);
    lectura.open("alumnos.txt", ios::in);

    if (aux.is_open() && lectura.is_open()) {

        cout << "\n";
        cout << "\tIngresa la clave del alumno que deseas modificar: ";
        cin >> auxclave;

        lectura >> clave;
        while (!lectura.eof()) {
            lectura >> nombre >> semestre >> grupo >> edad;
            if (auxclave == clave) {
                encontrado = true;
                cout << "\n";
                cout << "\tClave:    " << clave << endl;
                cout << "\tNombre:   " << nombre << endl;
                cout << "\tSemestre: " << semestre << endl;
                cout << "\tGrupo:    " << grupo << endl;
                cout << "\tEdad:     " << edad << endl;
                cout << "\t________________________________\n\n";
                cout << "\tIngresa el nuevo nombre del alumno con la clave: " << auxclave << "\n\n\t---> ";
                cin >> auxnombre;

                aux << clave << " " << auxnombre << " " << semestre << " " << grupo << " " << edad << endl;
                cout << "\n\n\t\t\tRegistro modificado...\n\t\t\a";
            } else {
                aux << clave << " " << nombre << " " << semestre << " " << grupo << " " << edad << endl;
            }
            lectura >> clave;
        }
    } else {
        cout << "\n\tEl archivo no se pudo abrir \n";
    }

    if (!encontrado) {
        cout << "\n\tNo se encontro ningun registro con la clave: " << auxclave << "\n\n\t\t\t";
    }

    aux.close();
    lectura.close();
    remove("alumnos.txt");
    rename("auxiliar.txt", "alumnos.txt");
}

int main() {
    system("color f0");
    int opc;

    do {
        system("cls");

        cout << "\n\tManejo de archivos en c++\n\n";
        cout << "\n\t1.-Altas";
        cout << "\n\t2.-Bajas";
        cout << "\n\t3.-Consultas";
        cout << "\n\t4.-Buscar un registro";
        cout << "\n\t5.-Modificaciones";
        cout << "\n\t6.-Salir";
        cout << "\n\n\tElige una opcion:  ";
        cin >> opc;
        switch (opc) {
            case 1: {
                system("cls");
                altas();
                cout << "\n\t\t";
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                bajas();
                cout << "\n\t\t";
                system("pause");
                break;
            }

            case 3: {
                system("cls");
                consultas();
                cout << "\n\t\t";
                system("pause");
                break;
            }
            case 4: {
                system("cls");
                buscar();
                cout << "\n\t\t";
                system("pause");
                break;
            }
            case 5: {
                system("cls");
                modificar();
                cout << "\n\t\t";
                system("pause");

                break;
            }
            case 6: {
                cout << "\n\n\tHa elegido salir...\n\n\t\t";
                system("pause");
                break;
            }
            default: {
                cout << "\n\n\tHa elegido una opcion inexistente...\n\n\t\t";
                system("pause");
                break;
            }
        }

    } while (opc != 6);

    system("cls");

    return 0;
}


