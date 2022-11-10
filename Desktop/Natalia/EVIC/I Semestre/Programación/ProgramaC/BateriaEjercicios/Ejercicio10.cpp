

#include<iostream>
using namespace std;

int main() {
	string bachiller;
	string prueba_acceso;
	cout << "¿Tiene usted el titulo de bachiller?" << endl;
	cin >> bachiller;
	if ((bachiller=="si")) {
		cout << "Felicitaciones, usted puede acceder al grado de tecnico superior." << endl;
	} else {
		cout << "Si usted no tiene diploma de bachiller, nos puede responder la siguente pregunta: " << endl;
		cout << "¿Usted supero las pruebas de acceso?" << endl;
		cin >> prueba_acceso;
		if ((prueba_acceso=="si")) {
			cout << "Felicidades, usted puede acceder al tecnico superior." << endl;
		} else {
			cout << "Lo sentimos, usted no puede acceder al tecnico superior." << endl;
		}
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

