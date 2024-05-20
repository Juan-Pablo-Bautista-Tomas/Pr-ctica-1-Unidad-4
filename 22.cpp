#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    char frase[50];

    cout << "Introduzca una frase: ";
    cin.getline(frase, 50);

    for (int x = 0; x < 50; x++) {
        if (frase[x] >= 65 && frase[x] <= 90) {
            sum++;
        }
    }

    cout << "\n\nEn la frase hay " << sum << " mayusculas\n\n";

    system("PAUSE");
    return 0;
}
