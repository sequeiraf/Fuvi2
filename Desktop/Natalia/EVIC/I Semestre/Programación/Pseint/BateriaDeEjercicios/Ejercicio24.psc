Algoritmo Ejercicio24
	Definir A, B, C, RaizCua, Total1, Total2, Cont Como Real
	
	Escribir "Escriba el valor de A: "
	Leer A
	Escribir "Escribir el valor de B: "
	Leer B
	Escribir "Escribir el valor de C: "
	Leer C
	
	Cont = -b
	RaizCua = (B^2 - 4 * A * C)^0.5
	Si RaizCua <= 0 Entonces
		Escribir "La ecuacion que usted ingreso no se puede resolver."
	Sino
		Total1 = (Cont + RaizCua) / (2 * a)
		Total2 = (Cont - RaizCua) / (2 * a)
		Escribir "Total 1 = " Total1
		Escribir "Total 2 = " Total2
	FinSi
	
	Escribir "Fin del algoritmo."
FinAlgoritmo
