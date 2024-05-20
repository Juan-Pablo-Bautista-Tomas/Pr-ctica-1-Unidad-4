#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    char frase[50];

    cout << "Introduzca una frase: ";
    cin.getline(frase, 50);

    for (int x = 0; x < 50; x++) {
        switch (frase[x]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                sum++;
                break;
            default:
                break;
        }
    }

    cout << "\n\nEn la frase hay " << sum << " vocales\n\n";

    system("PAUSE");
    return 0;
}
