Algoritmo Ejercicio25
	Definir Temperatura, Celsius, Fahrenheit Como Real
	
	Escribir "A qué unidad de temperatura desea convertir (Presione 1 si de Fahrenheit = Celsius o presione 2 si de Celsius = Fahrenheit): "
	Leer Temperatura
	
	Si (Temperatura = 1 ) Entonces
		Escribir "Ingrese la cantidad de Fahrenheit: "
		Leer Fahrenheit
		Celsius = (Fahrenheit - 32) / 1.8
		Escribir "De grados Fahrenheit a Celsius: " Celsius
	FinSi
	Si (Temperatura = 2) Entonces
		Escribir "Ingrese la cantidad de Celsius: "
		Leer Celsius
		Fahrenheit = (Celsius * 1.8) + 32
		Escribir "De grados Celsius a Fahrenheit: " Fahrenheit
		Escribir "Fin del algoritmo."
	FinSi
	
	
FinAlgoritmo
