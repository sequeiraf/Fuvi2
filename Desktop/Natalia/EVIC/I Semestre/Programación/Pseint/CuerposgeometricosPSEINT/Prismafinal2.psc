Algoritmo Prisma01
	//Declaraci�n de variables.
	Definir AL, Pb, h, Nl, l, P, AT, ap, V Como Real
	Definir n Como real
	n = 5
	//Area Lateral.
    //Datos entrada.
	Escribir "Bienvenido (a) te ayudare a calcular �rea lateral, �rea total y volumen de un prisma."
	Escribir "�rea lateral."
	Escribir "Ingrese el valor de arista lateral (l)." Sin Saltar
	Leer l
	Escribir "Ingrese el valor de altura (h)." Sin Saltar
	Leer h
	//Procedimiento.
	Pb = n * l 
	Al = Pb * h
	//Datos salida.
	Escribir "Per�metro base = " Pb
	Escribir "Altura = " h
	Escribir "�rea lateral = " AL
	Escribir "************************"
	
	//AreaTotal
	//Datos de entrada.
	Escribir "�rea total."
	Escribir "Ingrese el valor de �rea lateral (AL)." Sin Saltar
	Leer AL
	Escribir "Ingrese el valor de per�metro (P)." Sin Saltar
	Leer P
	Escribir "Ingrese el valor de apotema base (ap)." Sin Saltar
	Leer ap
	//Procedimiento
	Ab = (P * ap) / 2
	AT = (AL + Ab) * 2
	//Datos salida
	Escribir "�rea base = " Ab
	Escribir "�rea lateral = " AL
	Escribir "�rea total = " AT
	Escribir "************************"
	
	//Volumen.
	//Datos entrada.
	Escribir "Volumen."
	Escribir "Ingrese el valor de altura (h)." Sin Saltar
	Leer h
	Escribir "Ingrese el valor de per�metro (P)." Sin Saltar
	Leer P
	Escribir "Ingrese el valor de apotema base (ap)." Sin Saltar
	Leer ap
	//Procedimiento.
	Ab = (P * ap) / 2
	V = (Ab * h)
	//Datos salida.
	Escribir "�rea base = " Ab
	Escribir "Altura = " h
	Escribir "Volumen = " V
	Escribir "************************"
	
	Escribir "Fin del algoritmo."
	
FinAlgoritmo
