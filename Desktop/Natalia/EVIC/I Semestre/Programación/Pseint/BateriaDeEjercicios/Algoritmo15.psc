Algoritmo Algortimo15
	definir contador como entero
	definir contrase�a Como Caracter
	contador = 0
	contrase�a = tuani
	mientras contador < 3 Hacer
		escribir "Ingrese su contrase�a: "
		leer contrase�a
		si (contrase�a = 'tuani' ) Entonces
			Escribir "Su contrase�a es correcta :)"
			contador = contador + 3
			
		sino 
			si contador = 3 Entonces
				escribir "Lo siento has fallado los 3 intentos del sistema"
			SiNo
				Escribir "La contrase�a es incorrecta"
			FinSi
			contador = contador + 1
		FinSi
	
	fin mientras
FinAlgoritmo
