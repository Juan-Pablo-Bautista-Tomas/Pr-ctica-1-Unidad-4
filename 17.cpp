#include <iostream>
using namespace std;

int main() {
    int x, y, sum, numeros[11][10];

    for (y = 0; y < 10; y++) {
        sum = 0;
        for (x = 0; x < 10; x++) {
            numeros[x][y] = (x * 10) + 1 + y;
            sum = sum + numeros[x][y];
        }
        numeros[10][y] = sum;
    }

    for (x = 0; x < 11; x++) {
        for (y = 0; y < 10; y++) {
            cout << numeros[x][y] << " ";
        }
        cout << endl;
    }

    system("PAUSE");
    return 0;
}
