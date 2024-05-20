#include <iostream>
using namespace std;

int main() {
    int x, cont, sum, i, tabla[100];
    
    i = 0;
    sum = 0;
    for (x = 1; x <= 100; x++) {
        cont = 0;
        if (x % 2 == 0) {
            tabla[i] = x;
            i++;
        }
    }
    
    for (x = 0; x < i; x++) {
        sum = sum + tabla[x];
    }
    
    cout << sum << endl;
    
    return 0;
}
