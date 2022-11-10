Algoritmo Ejercicio26
	Definir Num1, Producto, Resultado Como Entero
	
	Escribir "Para finalizar el algoritmo ingrese un 1: "
	Num1 = 1 
	Producto = 0 
	Resultado = 1
	Mientras (Num1 <> 0) Hacer
		Escribir "Ingrese un número cualquiera: "
		Leer Num1
		si (Num1 <> 0 ) Entonces
			Resultado = Resultado * Num1
			Producto = Resultado
		FinSi
	FinMientras
	Escribir "El producto de los numeros es: " Producto
	
FinAlgoritmo
