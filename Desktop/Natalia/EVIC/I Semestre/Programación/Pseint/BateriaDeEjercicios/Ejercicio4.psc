Algoritmo ProductoSuma
	Definir Numero1, Numero2, Numero3 Como Real
	Definir Resultado Como Real
	
	Escribir "Ingrese el valor de numero 1: "
	Leer Numero1
	Escribir "Ingrese el valor de numero 2: "
	Leer Numero2
	Escribir "Ingrese el valor de numero 3: "
	Leer Numero3
	
	Si (Numero1 < 0) Entonces
	 Resultado = Numero1 * Numero2 * Numero3
	SiNo
		Resultado = Numero1 + Numero2 + Numero3
	Fin Si
	
	Escribir "El resultado es = " Resultado
	
	
	
FinAlgoritmo
