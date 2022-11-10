Algoritmo Ejercicio10
	Definir Bachiller, Prueba_Acceso Como Caracter
	
	
	Escribir "¿Tiene usted el titulo de bachiller?"
	Leer Bachiller
	Si (Bachiller = "si") Entonces
		Escribir "Felicitaciones, usted puede acceder al grado de tecnico superior."
	Sino
		
		Escribir "Si usted no tiene diploma de bachiller, nos puede responder la siguente pregunta: "
		Escribir "¿Usted supero las pruebas de acceso?"
		Leer Prueba_Acceso
		si (Prueba_Acceso="si") Entonces
			Escribir "Felicidades, usted puede acceder al tecnico superior."
		Sino
			Escribir "Lo sentimos, usted no puede acceder al tecnico superior."
		FinSi
	FinSi
	Escribir "Fin del algoritmo."
FinAlgoritmo
