Algoritmo Ejercicio28
	Definir Num, Pares, Impares,SumaImpares, MediaImpares Como Real
	
	para x = 1 Hasta 10 Hacer 
		Escribir "Ingrese los numeros: " 
		Leer Num
		Si (N mod 2 = 0) Entonces
			SumaPares = SumaPares + Num
			Pares = Pares + 1
		SiNo
			SumaImpares = SumaImpares + Num
			Impares = Impares + 1
		FinSi
	FinPara
	MediaPares = SumaPares / Pares
	MediaImpares = SumaImpares / Impares
	Escribir "Los numeros pares son: " Pares 
	Escribir "Los numeros impares son:" Impares
	Escribir "La media de pares es: " MediaPares
	Escribir "La media de impares es: " MediaImpares
	Escribir "Fin del algoritmo."
	
FinAlgoritmo
