#include <iostream>
#include <cstring>
using namespace std;

struct Alumno {
    char nombre[50];
    float nota;
};

int main(int argc, char *argv[])
{
    Alumno alum, alumnos[5];
    int x, opcion = 1;
    float sum = 0, cont = 0, mejor, peor;

    // Entrada de datos de los alumnos
    for (x = 0; x < 5; x++) {
        cout << "Introduzca nombre del alumno: ";
        cin.ignore(); // Para limpiar el buffer de entrada
        cin.getline(alumnos[x].nombre, 50);
        cout << "Introduzca nota: ";
        cin >> alumnos[x].nota;
    }

    // Menú de opciones
    while ((opcion >= 1 && opcion <= 6)) {
        cout << "1- Buscar un alumno\n";
        cout << "2- Modificar nota\n";
        cout << "3- Media de todas las notas\n";
        cout << "4- Media de todas las notas inferiores a 5\n";
        cout << "5- Alumno con mejores notas\n";
        cout << "6- Alumno con peores notas\n";
        cout << "7- Salir\n";
        cout << "Introduzca una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Introduzca un nombre: ";
            cin.ignore(); // Para limpiar el buffer de entrada
            cin.getline(alum.nombre, 50);
            for (x = 0; x < 5; x++) {
                if (strcmp(alumnos[x].nombre, alum.nombre) == 0) {
                    cout << "\nNombre: " << alumnos[x].nombre << endl;
                    cout << "Nota: " << alumnos[x].nota << endl;
                }
            }
            cout << "\n\n";
        }
        else if (opcion == 2) {
            cout << "Introduzca un nombre: ";
            cin.ignore(); // Para limpiar el buffer de entrada
            cin.getline(alum.nombre, 50);
            for (x = 0; x < 5; x++) {
                if (strcmp(alumnos[x].nombre, alum.nombre) == 0) {
                    cout << "Introduzca una nota: ";
                    cin >> alumnos[x].nota;
                    cout << "\nNota modificada.\n";
                }
            }
            cout << "\n\n";
        }
        else if (opcion == 3) {
            sum = 0;
            for (x = 0; x < 5; x++) {
                sum += alumnos[x].nota;
            }
            cout << "\nLa media de las notas es de: " << (sum / 5) << endl;
        }
        else if (opcion == 4) {
            sum = 0;
            cont = 0;
            for (x = 0; x < 5; x++) {
                if (alumnos[x].nota < 5) {
                    sum += alumnos[x].nota;
                    cont++;
                }
            }
            cout << "\nLa media de las notas inferiores a 5 es: " << (sum / cont) << endl;
        }
        else if (opcion == 5) {
            mejor = 0;
            for (x = 0; x < 5; x++) {
                if (alumnos[x].nota > mejor) {
                    mejor = alumnos[x].nota;
                    alum.nota = alumnos[x].nota;
                    strcpy(alum.nombre, alumnos[x].nombre);
                }
            }
            cout << "\nEl alumno con mejores notas es: " << alum.nombre << endl;
        }
        else if (opcion == 6) {
            peor = 10;
            for (x = 0; x < 5; x++) {
                if (alumnos[x].nota < peor) {
                    peor = alumnos[x].nota;
                    alum.nota = alumnos[x].nota;
                    strcpy(alum.nombre, alumnos[x].nombre);
                }
            }
            cout << "\nEl alumno con peores notas es: " << alum.nombre << endl;
        }
    }

    return 0;
}

