Algoritmo Ejercicio29
	Definir PrimerNum, SegundoNum, TercerNum, SumaPrimerosNum Como Real
	
	Escribir "Ingrese el valor del primer numero: "
	Leer PrimerNum
	Escribir "Ingrese el valor del segundo numero: "
	Leer SegundoNum
	Escribir "Ingrese el valor del tercer numero: "
	Leer TercerNum
	
	Si(PrimerNUm + SegundoNum = TercerNum) Entonces
		Escribir "Iguales"
		Si (SegundoNum + TercerNum = PrimerNum) Entonces
			Escribir "Iguales"
			Si (PrimerNum + TercerNum = SegundoNum) Entonces
				Escribir "Iguales"
				
				
			FinSi
		FinSi
	SiNo
		Escribir "Distintos"
	FinSi
	
	
	
FinAlgoritmo
