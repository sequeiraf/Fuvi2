Algoritmo Conofinal
	Definir AL, Pb, h, AT, Ab, r, V, g Como Real
	Definir NumeroPI Como Real
	NumeroPI = 3.1416
	
	//AreaLateral
	//Datos de entrada.
//	Escribir "Bienvenido (a) te ayudare a calcular �rea lateral, �rea total y volumen de un cono."
	Escribir "�rea lateral."
	Escribir "Ingrese el valor de radio (r)." Sin Saltar
	Leer r
	Escribir "Ingrese el valor de altura (h)." Sin Saltar
	Leer h
	//Procedimiento
    g = raiz(h + r)
	AL = NumeroPI * r * g
	//Datos salida
	Escribir "Generatriz = " g
	Escribir "�rea lateral = " 
	Escribir "************************"
	
	//AreaTotal
	//Datos de entrada.
	Escribir "�rea total."
	Escribir "Ingrese el valor de �rea lateral (AL)." Sin Saltar
	Leer AL
	Escribir "Ingrese el valor de radio (r)." Sin Saltar
	Leer r
	//Procedimiento
	Ab = NumeroPI * r^2
	AT = AL + Ab
	//Datos salida
	Escribir "�rea base = " Ab
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
	Ab = (NumeroPI * r^2) 
	V = (Ab * h) / 3
	//Datos salida
	Escribir "�rea base = " Ab
	Escribir "Volumen = " V
	Escribir "************************"
	
	Escribir "Fin del algoritmo."
	
FinAlgoritmo
