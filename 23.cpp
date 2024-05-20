#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    char frase[50];

    cout << "Introduzca una frase: ";
    cin.getline(frase, 50);

    for (int x = 0; x < 50; x++) {
        if (frase[x] != '\0') {
            frase[x] = frase[x] + 3;
        }
    }

    cout << "\n\nLa nueva frase es:\n\n" << endl;
    cout << "\n\n" << frase << "\n\n" << endl;

    system("PAUSE");
    return 0;
}
