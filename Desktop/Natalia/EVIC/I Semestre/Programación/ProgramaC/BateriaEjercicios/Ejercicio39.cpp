

#include<iostream>
using namespace std;

int main() {
	float salario;
	cout << "Sueldo menor a C$200,000 (1)" << endl;
	cout << "Sueldo entre C$200,000 y C$500,000 (2)" << endl;
	cout << "Sueldo entre C$500,000 y C$1,000,000 (3)" << endl;
	cout << "Escoja un numero(1, 2, 3) dependiendo de su salario." << endl;
	cin >> salario;
	if ((salario==1)) {
		cout << "Lo sentimos, no le podemos ofrecer un credito. " << endl;
	}
	if ((salario==2)) {
		cout << "Usted puede acceder a un credito de C$500,000 cordobas. " << endl;
	}
	if ((salario==3)) {
		cout << "Usted puede acceder a un credito de C$2,000,000 cordobas " << endl;
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

