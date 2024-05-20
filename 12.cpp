#include <iostream>

using namespace std;

int main() {
    float sum = 0, numeros1[10];
    int i;

    for (i = 0; i < 10; i++) {
        cout << "Escriba un numero: ";
        cin >> numeros1[i];
    }

    for (i = 0; i < 10; i++) {
        sum += numeros1[i];
    }

    cout << sum / 10 << endl;

    system("PAUSE");
    return 0;
}
