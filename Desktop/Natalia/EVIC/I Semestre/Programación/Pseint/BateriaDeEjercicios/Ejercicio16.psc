Algoritmo Ejercicio16
	Definir Min, Max, Media, Num Como 	Real
	
	Escribir "Ingrese un numero cualquiera."
	Leer Num
	
	Min = Num
	Max = Num
	Suma = 0
	
	Mientras (num <> 0) Hacer
		Si (Num > Max) Entonces
			Max = Num
		FinSi
		Si (Num < Min) Entonces
			Min = Num
		FinSi
		Suma = Suma + Num
		Cont = Cont + 1
		Leer Num
	FinMientras
    Media = Suma /(Cont)
	
	Escribir "El numero maximo = " Max
	Escribir "El numero minimo = " Min
	Escribir "El numero media = " Media
	Escribir "Fin del algoritmo."
	
FinAlgoritmo
