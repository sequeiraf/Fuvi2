Algoritmo Piramide01
	//Declaraci�n de variables.
	Definir AL, Pb, h, AT, Ab,r, V, Ap, h, ap Como Real
	
	//Datos de entrada.
	Escribir "Bienvenido (a) te ayudare a calcular �rea lateral, �rea total y volumen de una piramide."
	Escribir "�rea lateral."
	Escribir "Ingrese el valor de perimetro base (Pb). " Sin Saltar
	Leer Pb
	Escribir "Ingrese el valor de altura (h)." Sin Saltar
	Leer h
	Escribir "Ingrese el valor de apotema base (ap)." Sin saltar
	Leer ap
	//Procedimiento
	Ap = raiz(h + ap)
	AL = (Pb * Ap) / 2
	//Datos salida
	Escribir "Apotema pir�mide = " Ap
	Escribir "Perimetro base = " Pb
	Escribir "�rea lateral = " AL
	Escribir "************************"
	
	//AreaTotal
	//Datos de entrada.
	Escribir "�rea total."
	Escribir "Ingrese el valor de �rea lateral (AL)." Sin Saltar
	Leer AL
	Escribir "Ingrese el valor de �rea base (Ab)." Sin Saltar
	Leer AB
	//Procedimiento
	AT = AL + Ab
	//Datos salida
	Escribir "�rea Lateral = " AL
	Escribir "�rea base = " Ab
	Escribir "�rea total = " AT
	Escribir "************************"
	
	//Volumen
	//Datos de entrada.
	Escribir "Volumen."
	Escribir "Ingrese el valor de altura (h)." Sin Saltar
	Leer h
	Escribir "Ingrese el valor de �rea base (Ab)." Sin Saltar
	Leer Ab
	//Procedimiento
	V = (Ab * h) / 3
	//Datos salida 
	Escribir "Volumen = " V
	Escribir "************************"
	
	Escribir "Fin del algoritmo."
	
FinAlgoritmo
