
#include<iostream>
using namespace std;


int main() {
	int montohorasextras;
	int montohorastrabajadas;
	int montoporhora;
	int montosalarioextra;
	int montosalarioneto;
	int montosalarionetoextra;
	int montototal;
	string nombre;
	float salarionetoextra;
	float total;
	float x;
	cout << "Ingrese su nombre completo: ";
	cin >> nombre;
	cout << "Ingrese cuanto gana por hora: ";
	cin >> montoporhora;
	x = 1;
	while (x<=5) {
		cout << "Ingrese las horas trabajadas en el día " << x << endl;
		cin >> montohorastrabajadas;
		montototal = montototal+montohorastrabajadas;
		x = x+1;
	}
	if ((total>=48)) {
		cout << "Usted ha trabajado más horas de las establecidas" << endl;
		montohorasextras = montototal-48;
		montosalarioextra = ((35*100)/montoporhora)*montohorasextras;
		salarionetoextra = 48*montoporhora+montosalarioextra;
		cout << "El colaborador de nombre: " << nombre << endl;
		cout << "La cantidad de horas extras trabajadas es de: " << montohorasextras << endl;
		cout << "Su salario por las horas extras es de: " << montosalarioextra << endl;
		cout << "Su salario Neto es de: " << montosalarionetoextra << endl;
	} else {
		montosalarioneto = montototal*montoporhora;
		cout << "El colaborador de nombre: " << nombre << endl;
		cout << "Su salario Neto es de: " << montosalarioneto << endl;
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

