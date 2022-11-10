Algoritmo Ejercicio13
	Definir N, X, Cont Como Entero
	
	Escribir "Para conocer la suma de los primeros N numeros pares, ingrese cualquier numero: "
	Leer N
	
	Cont = 1
	X = 1
	Mientras (Cont <= N ) Hacer
		Si (X MOD 2 = 0) Entonces
			suma = suma + X
			Escribir X
			Cont = Cont + 1
		FinSi
		X = X + 1
	FinMientras
	Escribir "La suma de los primeros numeros pares es = " Suma
	Escribir "Fin del algoritmo."
FinAlgoritmo
