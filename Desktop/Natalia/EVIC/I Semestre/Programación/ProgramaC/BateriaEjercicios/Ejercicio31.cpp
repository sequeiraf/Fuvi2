

#include<iostream>
using namespace std;

int main() {
	float divisor;
	float num;
	float num1;
	cout << "Ingrese un numero: " << endl;
	cin >> num1;
	divisor = 1;
	while ((divisor!=num1)) {
		if ((num / divisor==0)) {
			cout << "El " << divisor << " es divisor de " << num1 << endl;
		}
		num1 = num1+1;
	}
	return 0;
}

