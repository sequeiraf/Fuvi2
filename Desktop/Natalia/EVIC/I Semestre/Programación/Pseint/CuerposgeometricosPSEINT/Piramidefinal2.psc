Algoritmo Piramide01
	//Declaración de variables.
	Definir AL, Pb, h, AT, Ab,r, V, Ap, h, ap Como Real
	
	//Datos de entrada.
	Escribir "Bienvenido (a) te ayudare a calcular área lateral, área total y volumen de una piramide."
	Escribir "Área lateral."
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
	Escribir "Apotema pirámide = " Ap
	Escribir "Perimetro base = " Pb
	Escribir "Área lateral = " AL
	Escribir "************************"
	
	//AreaTotal
	//Datos de entrada.
	Escribir "Área total."
	Escribir "Ingrese el valor de área lateral (AL)." Sin Saltar
	Leer AL
	Escribir "Ingrese el valor de área base (Ab)." Sin Saltar
	Leer AB
	//Procedimiento
	AT = AL + Ab
	//Datos salida
	Escribir "Área Lateral = " AL
	Escribir "Área base = " Ab
	Escribir "Área total = " AT
	Escribir "************************"
	
	//Volumen
	//Datos de entrada.
	Escribir "Volumen."
	Escribir "Ingrese el valor de altura (h)." Sin Saltar
	Leer h
	Escribir "Ingrese el valor de área base (Ab)." Sin Saltar
	Leer Ab
	//Procedimiento
	V = (Ab * h) / 3
	//Datos salida 
	Escribir "Volumen = " V
	Escribir "************************"
	
	Escribir "Fin del algoritmo."
	
FinAlgoritmo
