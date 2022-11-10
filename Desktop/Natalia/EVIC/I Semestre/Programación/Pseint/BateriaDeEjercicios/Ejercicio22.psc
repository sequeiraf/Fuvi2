Algoritmo Ejercicio22
	Definir Año Como Entero
	
	Escribir "Introduzca un año: "
	Leer Año
	Si (Año MOD 4 = 0 y Año MOD 100 <> 0) Entonces
		Escribir "El año que usted ingreso " Año " es bisiesto."
	Sino
		Si (Año MOD 400 = 0 y Año MOD 100 = 0) Entonces
			Escribir "El año que usted ingreso " año " es bisiesto."
		Sino
			Escribir "El año que usted ingreso " año " no es bisiesto."
		FinSi
	FinSi
	Escribir "Fin del algoritmo."
	
	
FinAlgoritmo
