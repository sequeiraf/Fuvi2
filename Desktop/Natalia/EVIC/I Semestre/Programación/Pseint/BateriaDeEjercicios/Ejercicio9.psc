Algoritmo Ejercicio9
	Definir Valor1 Como Entero
	
	Escribir "Introduce un valor numerico." Sin Saltar
	Leer Valor1
	
	Mientras (Valor1 <= 0) Hacer
		Escribir "Ingrese un numero mayor a cero."
		Leer Valor1
	FinMientras
		Si (Valor1 MOD 2=0) Entonces
			Escribir "El numero " Valor1 " que usted ingreso es par."
		Sino
			Escribir "El numero " Valor1 " que usted ingreso es impar."
	FinSi
	
	Escribir "Fin del algoritmo."
FinAlgoritmo
