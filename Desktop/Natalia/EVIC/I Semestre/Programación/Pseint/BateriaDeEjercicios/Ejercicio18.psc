Algoritmo Ejercicio18
	Definir Dia, Mes, A�o Como Entero
	Definir NombreMes Como Caracter
	
	Escribir "Introduzca el d�a: "
	Leer Dia
	Escribir "Introduzca el mes: "
	Leer Mes
	Escribir "Introduzca el a�o: "
	Leer A�o
	
	Si ((Dia <= 31 y Dia >= 0) y (Mes <= 12 y Mes >= 0) y A�o > 0) Entonces
		Escribir Dia sin saltar
		Segun Mes Hacer
			1:
				Escribir " de enero de" Sin saltar
			2:
				Escribir " de febrero de " Sin saltar
			3:
				Escribir " de marzo de " Sin saltar
			4:
				Escribir " de abril de " Sin saltar
			5:
				Escribir " de mayo de " Sin saltar
			6:
				Escribir " de junio de " Sin saltar
			7:
				Escribir " de julio de " Sin saltar
			8:
				Escribir " de agosto de " Sin saltar
			9:
				Escribir " de septiembre de " Sin saltar
			10:
				Escribir " de octubre de " Sin saltar
			11:
				Escribir " de noviembre de " Sin saltar
			12:
				Escribir " de diciembre de " Sin saltar
		FinSegun
		Escribir A�o
	Sino
		Escribir "error"
	FinSi
	Escribir Dia " de " Mes " del " A�o
	Escribir "Fin del algoritmo."
FinAlgoritmo
