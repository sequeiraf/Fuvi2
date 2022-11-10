
#include<iostream>
using namespace std;


int main() {
	float cantninos;
	float hijos2;
	float hijos3;
	float hijosmayor3;
	float matriculapornino;
	float montomatricula;
	float montomensualsept;
	float montosociedadpadres;
	float totalmatricula;
	float totalmatriculadescuento1;
	float totalmatriculadescuento2;
	float totalmatriculadescuento3;
	float totalpago;
	montomatricula = 300;
	montomensualsept = 150;
	montosociedadpadres = 100;
	hijos2 = 10/100;
	hijos3 = 15/100;
	hijosmayor3 = 20/100;
	cout << "Cuantos niños tiene en el colegio: " << endl;
	cin >> cantninos;
	totalmatricula = montomatricula*cantninos;
	if ((cantninos==1)) {
		totalpago = totalmatricula+montomensualsept+montosociedadpadres;
		cout << "Su total a pagar = " << totalpago << endl;
	}
	if ((cantninos==2)) {
		totalpago = (totalmatricula+montomensualsept+montosociedadpadres)-hijos2;
		cout << "Su total a pagar = " << totalpago << endl;
	}
	if ((cantninos==3)) {
		totalpago = (totalmatricula+montomensualsept+montosociedadpadres)-hijos3;
		cout << "Su total a pagar = " << totalpago << endl;
	}
	if ((cantninos>3)) {
		totalpago = (totalmatricula+montomensualsept+montosociedadpadres)-hijosmayor3;
		cout << "Su total a pagar = " << totalpago << endl;
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

