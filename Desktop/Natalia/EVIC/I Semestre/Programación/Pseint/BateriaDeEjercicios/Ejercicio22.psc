Algoritmo Ejercicio22
	Definir A�o Como Entero
	
	Escribir "Introduzca un a�o: "
	Leer A�o
	Si (A�o MOD 4 = 0 y A�o MOD 100 <> 0) Entonces
		Escribir "El a�o que usted ingreso " A�o " es bisiesto."
	Sino
		Si (A�o MOD 400 = 0 y A�o MOD 100 = 0) Entonces
			Escribir "El a�o que usted ingreso " a�o " es bisiesto."
		Sino
			Escribir "El a�o que usted ingreso " a�o " no es bisiesto."
		FinSi
	FinSi
	Escribir "Fin del algoritmo."
	
	
FinAlgoritmo
