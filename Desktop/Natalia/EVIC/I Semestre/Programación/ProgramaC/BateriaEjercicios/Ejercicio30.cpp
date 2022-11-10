

#include<iostream>
using namespace std;

int main() {
	int c;
	int num;
	int vector[10];
	int x;
	for (x=1;x<=10;x++) {
		cout << "Ingrese un numero: " << endl;
		cin >> vector[x-1];
	}
	cout << "Ingrese el numero a buscar: " << endl;
	cin >> num;
	c = 0;
	for (x=1;x<=10;x++) {
		if ((num==vector[x-1])) {
			cout << "El numero " << num << " se encuentra en la posición " << x << endl;
			c = 1;
		}
	}
	if ((c==0)) {
		cout << "El numero " << num << " no se encuentra " << endl;
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

