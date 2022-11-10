Algoritmo MayorMenorIgual
	Definir Numero1, Numero2 Como Real
	
	Escribir "Ingrese el valor de Numero 1: "
	Leer Numero1
	Escribir "Ingrese el valor de Numero 2: "
	Leer Numero2
	
	Si (Numero1 < Numero2) Entonces 
		Escribir "Numero1: " Numero1 " es menor que Numero2: " Numero2
	SiNo Si (Numero1 > Numero2) Entonces 
			Escribir "Numero1: " Numero1 " es menor que Numero2: " Numero2
		SiNo Si (Numero1 = Numero2) Entonces
				Escribir "Numero1: " Numero1 " es igual que Numero2: " Numero2
			SiNo
				Escribir "Fin del algoritmo."
				
			FinSi
		FinSi
		
			
	Fin Si
FinAlgoritmo
