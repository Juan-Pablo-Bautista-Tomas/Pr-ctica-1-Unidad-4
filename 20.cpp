
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int indice;
    char frase[50];

    cout << "Introduzca una frase: ";
    cin.getline(frase, 50);

    indice = strlen(frase);

    cout << "La frase al reves es: \n\n";
    
    for (int x = indice - 1; x >= 0; x--) {
        cout << frase[x];
    }

    cout << "\n\n";

    system("PAUSE");
    return 0;
}
