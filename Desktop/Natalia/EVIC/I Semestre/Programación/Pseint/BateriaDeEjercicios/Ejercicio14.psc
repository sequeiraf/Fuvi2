Algoritmo Ejercicio14
	Definir Num, Cont, Result Como Entero
	
	Escribir "Para finalizar este algoritmo, solo ingrese un -1."
	Cont = 0
	Result = 0
	
	Mientras (Num > -1 ) Hacer
		Escribir "Ingrese el valor numerico: "
		Leer Num
		Si ( Num <> -1) Entonces
			Result = Result + Num
			Cont = Result / Num
		FinSi
	Fin Mientras
	Escribir "La media aritmetica de los numeros es : " Cont
	Escribir "Fin del algoritmo."
	
	
FinAlgoritmo
