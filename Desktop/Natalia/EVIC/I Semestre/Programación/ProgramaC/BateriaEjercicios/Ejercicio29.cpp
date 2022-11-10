

#include<iostream>
using namespace std;

int main() {
	float primernum;
	float segundonum;
	float sumaprimerosnum;
	float tercernum;
	cout << "Ingrese el valor del primer numero: " << endl;
	cin >> primernum;
	cout << "Ingrese el valor del segundo numero: " << endl;
	cin >> segundonum;
	cout << "Ingrese el valor del tercer numero: " << endl;
	cin >> tercernum;
	if ((primernum+segundonum==tercernum)) {
		cout << "Iguales" << endl;
		if ((segundonum+tercernum==primernum)) {
			cout << "Iguales" << endl;
			if ((primernum+tercernum==segundonum)) {
				cout << "Iguales" << endl;
			}
		}
	} else {
		cout << "Distintos" << endl;
	}
	return 0;
}

