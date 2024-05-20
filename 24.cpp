#include <iostream>
#include <cstring>
using namespace std;

struct producto {
    char nombre[50];
    float precio;
    int cantidad;
};

int main() {
    struct producto prod, productos[10];

    int x, opcion = 1;

    for (x = 0; x < 10; x++) {
        strcpy(productos[x].nombre, "X");
        productos[x].precio = 0;
        productos[x].cantidad = 0;
    }

    while ((opcion == 1 || opcion == 2 || opcion == 3) && (opcion != 4)) {
        cout << "1- Alta de producto" << endl;
        cout << "2- Buscar por nombre" << endl;
        cout << "3- Modificar stock y precio" << endl;
        cout << "4- Salir" << endl;
        cout << "Introduzca una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Introduzca un nombre: ";
            cin.ignore();
            cin.getline(prod.nombre, 50);
            cout << "Introduzca un precio: ";
            cin >> prod.precio;
            cout << "Introduzca un stock: ";
            cin >> prod.cantidad;

            for (x = 9; x >= 0; x--) {
                if (x != 0) {
                    strcpy(productos[x].nombre, productos[x - 1].nombre);
                    productos[x].precio = productos[x - 1].precio;
                    productos[x].cantidad = productos[x - 1].cantidad;
                } else {
                    strcpy(productos[x].nombre, prod.nombre);
                    productos[x].precio = prod.precio;
                    productos[x].cantidad = prod.cantidad;
                }
            }
            cout << "\nProducto creado.\n\n";
        } else if (opcion == 2) {
            cout << "Introduzca un nombre: ";
            cin.ignore();
            cin.getline(prod.nombre, 50);
            for (x = 0; x < 10; x++) {
                if (strcmp(productos[x].nombre, prod.nombre) == 0) {
                    cout << "\nNombre: " << productos[x].nombre << endl;
                    cout << "Precio: " << productos[x].precio << endl;
                    cout << "Cantidad en Stock: " << productos[x].cantidad << endl;
                }
            }
            cout << "\n\n";
        } else if (opcion == 3) {
            cout << "Introduzca un nombre: ";
            cin.ignore();
            cin.getline(prod.nombre, 50);
            for (x = 0; x < 10; x++) {
                if (strcmp(productos[x].nombre, prod.nombre) == 0) {
                    cout << "Introduzca un precio: ";
                    cin >> productos[x].precio;
                    cout << "Introduzca un stock: ";
                    cin >> productos[x].cantidad;
                    cout << "\nProducto modificado.";
                }
            }
            cout << "\n\n";
        }
    }

    system("PAUSE");
    return 0;
}
