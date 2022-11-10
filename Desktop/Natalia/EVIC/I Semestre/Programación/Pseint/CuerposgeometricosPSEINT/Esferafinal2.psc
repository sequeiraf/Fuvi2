Algoritmo Esferafinal
	//Declaracion de variables
	Definir A, V, Rm, h, r Como Real
	Definir NumeroPI Como Real
	NumeroPI = 3.1416
	
	//Area
	//Datos de entrada.
	Escribir "Bienvenido (a) te ayudare a calcular área, volumen, zona esférica y casquete esférico de una esfera."
	Escribir "Área."
	Escribir "Ingrese el valor de radio (r)." Sin Saltar
	Leer r
	//Procedimiento
	A = 4 * NumeroPI * r^2
	//Datos salida
	Escribir "Área = " A
	Escribir "************************"
	
	//Volumen
	//Datos entrada.
	Escribir "Volumen."
	Escribir "Ingrese el valor del radio" Sin Saltar
	Leer r
	//Procedimiento
	V = 4/3 * (NumeroPI) * r^3
	//Datos salida
	Escribir "Volumen = " V
	Escribir "************************"
	
	//AreaZonaEsferica
	//Datos entrada.
	Escribir "Área zona esférica."
	Escribir "Ingrese el valor de radio mayor (Rm)." Sin Saltar
	Leer Rm
	Escribir "Ingrese el valor de altura (h)." Sin Saltar
	Leer h
	//Procedimiento
	A = 2 * NumeroPI * Rm * h
	//Datos salida
	Escribir "Área zona esférica = " A
	Escribir "************************"

	//VolumenZonaEsferica
	//Datos de entrada.
	Escribir "Volumen zona esférica."
	Escribir "Ingrese el valor del radio (r)." Sin Saltar
	Leer r
	Escribir "Ingrese el valor del altura (h)." Sin Saltar
	Leer h
	//Procedimiento
	V = (NumeroPI * h) * ((h^2) + (3 * r^2) + (3 * r + 2)) / 6
	//Datos salida
	Escribir "Volumen zona esférica = " V
	Escribir "************************"
	
	//AreaCasqueteEsferico
	//Datos de entrada.
	Escribir "Área casquete esférico."
	Escribir "Ingrese el valor de radio mayor (Rm)." Sin Saltar
	Leer Rm
	Escribir "Ingrese el valor de altura (h)." Sin Saltar
	Leer h
	//Procedimiento
	A = 2 * NumeroPI * Rm * h
	//Datos salida
	Escribir "Área casquete esférico = " A
	Escribir "************************"
	
	//VolumenCasqueteEsferico
	//Datos de entrada.
	Escribir "Volumen casquete esférico."
	Escribir "Ingrese el valor del radio (r)." Sin Saltar
	Leer r
	Escribir "Ingrese el valor del radio mayor (Rm)." Sin Saltar
	Leer Rm
	Escribir "Ingrese el valor del altura (h)." Sin Saltar
	Leer h
	//Procedimiento
	V = NumeroPI * h^2 *(3 * Rm-h) / 3
	//Datos salida
	Escribir "Volumen casquete esférico = " V
	
	Escribir "************************"
	
FinAlgoritmo
