

#include<iostream>
using namespace std;

int main() {
	int cont;
	int n;
	float suma;
	int x;
	cout << "Para conocer la suma de los primeros N numeros pares, ingrese cualquier numero: " << endl;
	cin >> n;
	cont = 1;
	x = 1;
	while ((cont<=n)) {
		if ((x%2==0)) {
			suma = suma+x;
			cout << x << endl;
			cont = cont+1;
		}
		x = x+1;
	}
	cout << "La suma de los primeros numeros pares es = " << suma << endl;
	cout << "Fin del algoritmo." << endl;
	return 0;
}

