
#include<iostream>
using namespace std;

int main() {
	string alumno;
	string nombrealumno;
	int notafinal;
	int notapractica;
	int notaproblemas;
	int notateoria;
	cout << "Introduzca el nombre del alumno: ";
	cin >> alumno;
	while ((alumno!="")) {
		cout << "Introduzca la nota practica: ";
		cin >> notapractica;
		cout << "Introduzca la nota de los problemas: " << endl;
		cin >> notaproblemas;
		cout << "Introduce la nota de teoria: " << endl;
		cin >> notateoria;
		if ((notapractica<=10 && notapractica>=0)) {
			if ((notaproblemas<=10 && notaproblemas>=0)) {
				if ((notateoria<=10 && notateoria>=0)) {
					notapractica = notapractica*0.1;
					notaproblemas = notaproblemas*0.5;
					notateoria = notateoria*0.4;
					notafinal = notapractica+notaproblemas+notafinal;
					cout << "El alumno " << nombrealumno << endl;
					cout << "El valor de la nota de practica es = " << notapractica << endl;
					cout << "El valor de la nota de problemas es = " << notaproblemas << endl;
					cout << "El valor de la nota de teoria es = " << notateoria << endl;
					cout << "El valor de la nota final es = " << notafinal << endl;
				} else {
					cout << "Ha escrito una nota incorrecta, vuelva intentarlo" << endl;
				}
			}
		}
		cout << "Introduzca el nombre de otro alumno: " << endl;
		cin >> alumno;
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

