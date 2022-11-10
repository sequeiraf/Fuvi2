Algoritmo TroncoDePiramide
	//Declaración de variables.
	Definir AL, h, AT, Ab, AB, r, Rm, V, PB, Pb, Ap, g Como Real
	Definir NumeroPI Como Real
	NumeroPI = 3.1416
	
	//AreaLateral
	//Datos de entrada.
	Escribir "Bienvenido (a) te ayudare a calcular área lateral, área total y volumen de un cono."
	Escribir "Área lateral."
	Escribir "Ingrese el valor del Perimetrobasemayor" Sin Saltar
	Leer PB
	Escribir "Ingrese el valor del Perimetrobasemenor " Sin Saltar
	Leer Pb
	Escribir "Ingrese el valor de ApotemaPiramide" Sin Saltar
	Leer Ap
	//Procedimiento
	AL = PB + Pb*(Ap)/2
	Leer AreaLateral
	
	//AreaTotal
	//Datos de entrada.
	Escribir "Ingrese el valor de AreaLateral" Sin Saltar
	Leer AL
	Escribir "Ingrese el valor de Areabasemayor" Sin Saltar
	Leer AB
	Escribir "Ingrese el valor de Areabasemenor" Sin Saltar
	Leer Ab
	//Procedimiento
	AT = AL + AB + Ab
	Leer AreaTotal
	
	
FinAlgoritmo
