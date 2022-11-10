Algoritmo TroncoDeCono
	//Declaraci�n de variables.
	Definir AL, h, AT, Ab, AB, r, Rm, V, PB, Pb, Ap, g Como Real
	Definir NumeroPI Como Real
	NumeroPI = 3.1416
	
	//AreaLateral
	//Datos de entrada.
	Escribir "Bienvenido (a) te ayudare a calcular �rea lateral, �rea total y volumen de un tronco de cono."
	Escribir "�rea lateral."
	Escribir "Ingrese el valor de la altura (h)." Sin Saltar
	Leer h
	Escribir "Ingrese el valor del radio mayor (Rm)." Sin Saltar
	Leer Rm
	Escribir "Ingrese el valor radio (r)." Sin Saltar
	Leer r
	//Procedimiento
	g = raiz(h + r)
	AL = NumeroPI * g * (Rm+r)
	//Datos salida
	Escribir "Generatriz = " g
	Escribir "�rea lateral = " 
	Escribir "************************"
	
	//AreaTotal
	//Datos de entrada.
	Escribir "�rea total."
	Escribir "Ingrese el valor de �rea lateral (AL)." Sin Saltar
	Leer AL
	Escribir "Ingrese el valor de �rea base mayor (AB)." Sin Saltar
	Leer AB
	Escribir "Ingrese el valor de �rea base menor (Ab)." Sin Saltar
	Leer Ab
	//Procedimiento
	AT = AL + AB + Ab
	//Datos salida
	Escribir "Generatriz = " g
	Escribir "�rea lateral = " AL
	Escribir "************************"
	
	//Volumen
	//Datos de entrada.
	Escribir "Volumen."
	Escribir "Ingrese el valor de altura (h)." Sin Saltar
	Leer h
	Escribir "Ingrese el valor de radio mayor (Rm)" Sin Saltar
	Leer Rm
	Escribir "Ingrese el valor de radio (r)." Sin Saltar
	Leer r
	//Procedimiento 
	V = (1/3) * (NumeroPI * h) * (Rm^2 + r^2 + (Rm * r))
	//Datos salida 
	Escribir "Volumen= " V 
	Escribir "************************"
	
	Escribir "Fin del algoritmo."
FinAlgoritmo
