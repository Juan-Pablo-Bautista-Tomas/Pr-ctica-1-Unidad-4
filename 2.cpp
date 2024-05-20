#include <iostream>
using namespace std;

int main()
{
	int x, tabla[100];
	
	for (x = 1; x <= 100; x++){
		tabla[x] = x;
	}
	
	for (x = 100; x >= 1; x--){
		cout << tabla[x] << endl;
	}
	
	system("PAUSE");
	return 0;
}
