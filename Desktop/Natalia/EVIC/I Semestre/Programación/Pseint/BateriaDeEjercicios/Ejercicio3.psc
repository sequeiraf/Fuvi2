Algoritmo MayorQueDosNumeros
	Definir Numero1, Numero2, Numero3 Como Real
	
	Escribir "Ingrese el valor de numero 1: "
	Leer Numero1
	Escribir "Ingrese el valor de numero 2: "
	Leer Numero2
	Escribir "Ingrese el valor de numero 3: "
	Leer Numero3
	
	Si (Numero1 > Numero2 Y Numero1 > Numero3) Entonces
		Escribir "El Numero 1: " Numero1 " es el mayor."
	SiNo Si (Numero2 > Numero1 y Numero2 > Numero3) Entonces
			Escribir "El Numero 2: " Numero2 " es el mayor."
		SiNo Si (Numero3 > Numero1 Y Numero3 > Numero2) Entonces
				Escribir " El Numero 3: " Numero3 " es el mayor."
			FinSi
		FinSi
	Fin Si
	
	
FinAlgoritmo
