Algoritmo Ejercicio15
	Definir Cont Como Entero
	Definir Clave Como Caracter
	Cont = 0 
	Clave = Tuani
	
    Mientras (Cont <3) Hacer
        Escribir "Introduzca la clave: "
        Leer Clave
        Si (Clave = "Tuani") Entonces
            Escribir "La clave que usted ingreso esta correcta."
			Cont = Cont + 1
			
		SiNo
			Escribir "La clave que usted ingreso es incorrecta."
		FinSi
    FinMientras
	
	Si Cont = 3 Entonces
		Escribir "Lo sentimos, usted ya agoto sus tres intentos."
	SiNo
		Escribir "Fin del algoritmo."
	FinSi
	
	
FinAlgoritmo
