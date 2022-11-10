Algoritmo Ejercicio31
	Definir Num1, Divisor Como Real
	
	Escribir "Ingrese un numero: "
	Leer Num1
	Divisor = 1 
	
	Mientras (Divisor <> Num1) Hacer
		Si (Num mod  Divisor = 0) Entonces
			Escribir "El " Divisor  " es divisor de " Num1
			
		FinSi
		Num1 = Num1 + 1
	FinMientras
	
FinAlgoritmo
