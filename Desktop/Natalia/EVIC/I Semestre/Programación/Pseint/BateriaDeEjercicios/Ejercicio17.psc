Algoritmo Ejercicio17
	Definir Cont,Num, Num2, Num3 Como Real
	
	Cont = 1
	Num2 = 0
	Num3 = 0
	Para Num = 1 Hasta 100 Con Paso 1
		Si (Cont MOD 2 = 0 )
			Escribir "Multiplo de dos = " Cont
			Num2 = Num2 + 1
		FinSi
		Si (Cont MOD 3 = 0) Entonces
			Escribir "Multiplo de tres = " Cont
			Num3 = Num3 + 1
		FinSi
		Cont = Cont + 1
	FinPara
	Escribir "Fin del algoritmo."
FinAlgoritmo
