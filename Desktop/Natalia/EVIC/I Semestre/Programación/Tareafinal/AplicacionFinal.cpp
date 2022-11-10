//Aplicacion divisor de voltaje
//Natalia Sequeira
#include<iostream>
using namespace std;

int main() {
	string letra;
	float resistencia1, resistencia2, resistencia3,  resistencia4, resistencia5;
	float totalresistencias, valorfinalvoltaje, valorinicialvoltaje;
	float voltaje1, voltaje2, voltaje3, voltaje4,  voltaje5;
	
	cout << "Bienvenid@, te ayudare a calcular el divisor de voltaje de tus circuitos." << endl;
	cout << "La cantidad maxima de resistencia es = 5 " << endl;
	cout << "********************************************************************************" << endl;
	cout << "Escoja una letra, dependiendo de la cantidad de resistencias de su circuito: " << endl;
	cout << "A : 2 resistencias" << endl;
	cout << "B : 3 resistencias" << endl;
	cout << "C : 4 resistencias" << endl;
	cout << "D : 5 resistencias" << endl;
	cout << "Ingrese la letra : " << endl;
	cin >> letra;
	
	if ((letra=="A")) {
		cout << "**********************************************" << endl;
		cout << "Ingrese el valor inicial del voltaje : " << endl;
		cin >> valorinicialvoltaje;
		cout << "Ingrese el valor de la resistencia # 1 : " << endl;
		cin >> resistencia1;
		cout << "Ingrese el valor de la resistencia # 2 : " << endl;
		cin >> resistencia2;
		if ((valorinicialvoltaje<0 && resistencia1<0 && resistencia2<0)) {
			cout << "Final del algoritmo" << endl;
		} else {
			totalresistencias = resistencia1+resistencia2;
			voltaje1 = (resistencia1/totalresistencias)*valorinicialvoltaje;
			voltaje2 = (resistencia2/totalresistencias)*valorinicialvoltaje;
			valorfinalvoltaje = voltaje1+voltaje2;
			cout << "**********************************************************" << endl;
			cout << "La suma de las resistencias = " << totalresistencias << " Ohm" << endl;
			cout << "El valor de voltaje 1 = " << voltaje1 << " V" << endl;
			cout << "El valor de voltaje 2 = " << voltaje2 << " V" << endl;
			cout << "El valor de voltaje final = " << valorfinalvoltaje << " V" << endl;
		}
	}
	
	if ((letra=="B")) {
		cout << "**********************************************" << endl;
		cout << "Ingrese el valor inicial del voltaje : " << endl;
		cin >> valorinicialvoltaje;
		cout << "Ingrese el valor de la resistencia # 1 : " << endl;
		cin >> resistencia1;
		cout << "Ingrese el valor de la resistencia # 2 : " << endl;
		cin >> resistencia2;
		cout << "Ingrese el valor de la resistencia # 3 : " << endl;
		cin >> resistencia3;
		if ((valorinicialvoltaje<0 && resistencia1<0 && resistencia2<0 && resistencia3<0)) {
			cout << "Fin del algoritmo." << endl;
		} else {
			totalresistencias = resistencia1+resistencia2+resistencia3;
			voltaje1 = (resistencia1/totalresistencias)*valorinicialvoltaje;
			voltaje2 = (resistencia2/totalresistencias)*valorinicialvoltaje;
			voltaje3 = (resistencia3/totalresistencias)*valorinicialvoltaje;
			valorfinalvoltaje = voltaje1+voltaje2+voltaje3;
			cout << "***********************************************************" << endl;
			cout << "La suma de las resistencias = " << totalresistencias << " Ohm" << endl;
			cout << "El valor de voltaje 1 = " << voltaje1 << " V" << endl;
			cout << "El valor de voltaje 2 = " << voltaje2 << " V" << endl;
			cout << "El valor de voltaje 3 = " << voltaje3 << " V" << endl;
			cout << "El valor de voltaje final = " << valorfinalvoltaje << " V" << endl;
		}
	}
	if ((letra=="C")) {
		cout << "**********************************************" << endl;
		cout << "Ingrese el valor inicial del voltaje : " << endl;
		cin >> valorinicialvoltaje;
		cout << "Ingrese el valor de la resistencia # 1 : " << endl;
		cin >> resistencia1;
		cout << "Ingrese el valor de la resistencia # 2 : " << endl;
		cin >> resistencia2;
		cout << "Ingrese el valor de la resistencia # 3 : " << endl;
		cin >> resistencia3;
		cout << "Ingrese el valor de la resistencia # 4 : " << endl;
		cin >> resistencia4;
		if ((valorinicialvoltaje<0 && resistencia1<0 && resistencia2<0 && resistencia3<0 && resistencia4<0)) {
			cout << "Fin del algoritmo." << endl;
		} else {
			totalresistencias = resistencia1+resistencia2+resistencia3+resistencia4;
			voltaje1 = (resistencia1/totalresistencias)*valorinicialvoltaje;
			voltaje2 = (resistencia2/totalresistencias)*valorinicialvoltaje;
			voltaje3 = (resistencia3/totalresistencias)*valorinicialvoltaje;
			voltaje4 = (resistencia4/totalresistencias)*valorinicialvoltaje;
			valorfinalvoltaje = voltaje1+voltaje2+voltaje3+voltaje4;
			cout << "****************************************************************" << endl;
			cout << "La suma de las resistencias = " << totalresistencias << " Ohm" << endl;
			cout << "El valor de voltaje 1 = " << voltaje1 << " V" << endl;
			cout << "El valor de voltaje 2 = " << voltaje2 << " V" << endl;
			cout << "El valor de voltaje 3 = " << voltaje3 << " V" << endl;
			cout << "El valor de voltaje 4 = " << voltaje4 << " V" << endl;
			cout << "El valor de voltaje final = " << valorfinalvoltaje << " V" << endl;
		}
	}
	if ((letra=="D")) {
		cout << "**********************************************" << endl;
		cout << "Ingrese el valor inicial del voltaje : " << endl;
		cin >> valorinicialvoltaje;
		cout << "Ingrese el valor de la resistencia # 1 : " << endl;
		cin >> resistencia1;
		cout << "Ingrese el valor de la resistencia # 2 : " << endl;
		cin >> resistencia2;
		cout << "Ingrese el valor de la resistencia # 3 : " << endl;
		cin >> resistencia3;
		cout << "Ingrese el valor de la resistencia # 4 : " << endl;
		cin >> resistencia4;
		cout << "Ingrese el valor de la resistencia # 5 : " << endl;
		cin >> resistencia5;
		if ((valorinicialvoltaje<0 && resistencia1<0 && resistencia2<0 && resistencia3<0 && resistencia4<0 && resistencia5<0)) {
			cout << "Fin del algoritmo." << endl;
		} else {
			totalresistencias = resistencia1+resistencia2+resistencia3+resistencia4+resistencia5;
			voltaje1 = (resistencia1/totalresistencias)*valorinicialvoltaje;
			voltaje2 = (resistencia2/totalresistencias)*valorinicialvoltaje;
			voltaje3 = (resistencia3/totalresistencias)*valorinicialvoltaje;
			voltaje4 = (resistencia4/totalresistencias)*valorinicialvoltaje;
			voltaje5 = (resistencia5/totalresistencias)*valorinicialvoltaje;
			valorfinalvoltaje = voltaje1+voltaje2+voltaje3+voltaje4+voltaje5;
			cout << "***************************************************************" << endl;
			cout << "La suma de las resistencias = " << totalresistencias << " Ohm" << endl;
			cout << "El valor de voltaje 1 = " << voltaje1 << " V" << endl;
			cout << "El valor de voltaje 2 = " << voltaje2 << " V" << endl;
			cout << "El valor de voltaje 3 = " << voltaje3 << " V" << endl;
			cout << "El valor de voltaje 4 = " << voltaje4 << " V" << endl;
			cout << "El valor de voltaje 5 = " << voltaje5 << " V" << endl;
			cout << "El valor de voltaje final = " << valorfinalvoltaje << " V" << endl;
		}
	}
	cout << "******************************************************************************" << endl;
	cout << "Fin del programa" << endl;
	cout << "Gracias :))))" << endl;
	return 0;
}

