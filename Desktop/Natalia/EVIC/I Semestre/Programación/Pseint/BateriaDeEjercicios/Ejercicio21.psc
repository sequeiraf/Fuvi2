Algoritmo Ejercicio21
	Definir Lado, Asterisco, Espacio Como Entero
	
	Escribir "Ingrese un numero: "
	Leer Lado
	
	Para Asterisco = 1 Hasta Lado Hacer
		Para Espacio = 1 Hasta Lado Hacer
			Si (Asterisco < Lado y Espacio < Lado) Entonces
				Escribir "* " Sin saltar
			Sino 
				Escribir "* " Sin Saltar
			FinSi
		FinPara
		Escribir " "
		Lado = Lado - 1
	FinPara
	Escribir "Fin del algoritmo."
	
	
FinAlgoritmo
