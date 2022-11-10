Algoritmo Cilindro01
	//Declaraci�n de variables.
	Definir AL, AT, Ab, r, h Como Real
	Definir NumeroPI Como Real
	NumeroPI = 3.1416
	
	//AreaLateral
	//Datos de entrada.
	Escribir "Bienvenido (a) te ayudare a calcular �rea lateral, �rea total y volumen de un cilindro."
	Escribir "�rea lateral."
	Escribir "Ingrese el valor de radio (r)." Sin Saltar
	Leer r
	Escribir "Ingrese el valor de altura (h)." Sin Saltar
	Leer h
	//Procedimiento
	AL = 2 * NumeroPI * r * h
	//Datos salida
	Escribir "Radio = " r
	Escribir "Altura = " h
	Escribir "�rea lateral = " AL
	Escribir "************************"
	
	//AreaTotal
	//Datos de entrada.
	Escribir "�rea total."
	Escribir "Ingrese el valor de �rea lateral (AL)." Sin Saltar
	Leer AL
	Escribir "Ingrese el valor de radio (r)." Sin Saltar
	Leer r

	//Procedimiento
	Ab = (NumeroPI * r^2)
	AT = (AL + 2) * Ab
	//Datos salida
	Escribir "�rea base = " Ab
	Escribir "�rea lateral = " AL
	Escribir "�rea total = " AT
	Escribir "************************"
	
	//Volumen
	//Datos de entrada.
	Escribir "Volumen."
	Escribir "Ingrese el valor de altura (h)." Sin Saltar
	Leer h
	Escribir "Ingrese el valor de radio (r)." Sin Saltar
	Leer r
	//Procedimiento
	Ab = Pi * r^2
	V = Ab * h
	//Datos salida
	Escribir "Altura = " h
	Escribir "�rea base = " Ab
	Escribir "Volumen = " V
	Escribir "************************"
	
	Escribir "Fin del algoritmo."
	
	
FinAlgoritmo
