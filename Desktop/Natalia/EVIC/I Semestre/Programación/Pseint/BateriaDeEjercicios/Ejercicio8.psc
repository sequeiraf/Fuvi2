Algoritmo Ejercicio8
	Definir Valor1 Como Entero
	
	Escribir "Introduce un valor numerico." Sin Saltar
	Leer Valor1
	Si (Valor1 = 0) Entonces
		Escribir "El numero " Valor1 " que usted ingreso, no es par ni impar."
	Sino
		Si (Valor1 MOD 2=0) Entonces
			Escribir "El numero " Valor1 " que usted ingreso es par."
		Sino
			Escribir "El numero " Valor1 " que usted ingreso es impar."
		FinSi
	FinSi
	Escribir "Fin del algoritmo."
FinAlgoritmo
