Algoritmo Ejercicio19
	Definir NotaPractica, NotaTeoria, NotaProblemas, NotaFinal Como Entero
	Definir Alumno Como Caracter
	
	Escribir "Introduzca el nombre del alumno: " Sin Saltar
	Leer Alumno
	
	Mientras (Alumno <> "") Hacer
		Escribir "Introduzca la nota practica: " Sin Saltar
		leer NotaPractica
		Escribir "Introduzca la nota de los problemas: "
		leer NotaProblemas
		Escribir "Introduce la nota de teoria: "
		Leer NotaTeoria
		
		Si (NotaPractica <= 10 y NotaPractica >= 0)
			Si (NotaProblemas <= 10 y NotaProblemas >= 0)
				Si (NotaTeoria <= 10 y NotaTeoria >= 0) Entonces
		
		NotaPractica = NotaPractica * 0.1
		NotaProblemas = NotaProblemas * 0.5
		NotaTeoria = NotaTeoria * 0.4
		NotaFinal = NotaPractica + NotaProblemas + NotaFinal
			Escribir "El alumno " NombreAlumno
			Escribir "El valor de la nota de practica es = " NotaPractica
			Escribir "El valor de la nota de problemas es = " NotaProblemas
			Escribir "El valor de la nota de teoria es = " NotaTeoria
			Escribir "El valor de la nota final es = " NotaFinal
		Sino
			Escribir "Ha escrito una nota incorrecta, vuelva intentarlo"
		FinSi
	FinSi
FinSi
		Escribir "Introduzca el nombre de otro alumno: "
		Leer Alumno
	FinMientras
	
	Escribir "Fin del algoritmo."
	
	
FinAlgoritmo
