Algoritmo Ejercicio30
	Definir X, Num, C, Vector como entero
	dimension Vector[10]
	
	Para X = 1 hasta 10 con paso 1 Hacer
		Escribir "Ingrese un numero: "
		Leer vector(X)
	FinPara
	Escribir "Ingrese el numero a buscar: "
	Leer Num
	C= 0
	Para x = 1 Hasta 10 Con Paso 1 Hacer
		si (Num = Vector(X)) Entonces
			Escribir "El numero " Num " se encuentra en la posición " X
			C = 1
		FinSi
	FinPara
	si  (C = 0) Entonces
		Escribir "El numero " num " no se encuentra "
	FinSi
	Escribir "Fin del algoritmo."
	
	
	
	
	
FinAlgoritmo
