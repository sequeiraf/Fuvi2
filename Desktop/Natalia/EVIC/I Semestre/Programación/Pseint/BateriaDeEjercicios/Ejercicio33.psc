Algoritmo Ejercicio33
	Definir CantNiņos, MontoMatricula, MatriculaPorNiņo, MontoMensualSept, MontoSociedadPadres Como Real
	Definir TotalMatricula, TotalMatriculaDescuento1, TotalMatriculaDescuento2, TotalMatriculaDescuento3, TotalPago Como Real
	MontoMatricula = 300
	MontoMensualSept = 150
	MontoSociedadPadres = 100
	Hijos2 = 10 / 100
	Hijos3 = 15 / 100
	HijosMayor3 = 20 / 100
	
	
	Escribir "Cuantos niņos tiene en el colegio: "
	Leer CantNiņos
	TotalMatricula = MontoMatricula * CantNiņos
	
	Si (CantNiņos = 1) Entonces
		TotalPago = TotalMatricula + MontoMensualSept + MontoSociedadPadres
		Escribir "Su total a pagar = " TotalPago
	FinSi
	Si (CantNiņos = 2) Entonces
		TotalPago = (TotalMatricula + MontoMensualSept + MontoSociedadPadres) - Hijos2
		Escribir "Su total a pagar = " TotalPago
	FinSi
	Si (CantNiņos = 3) Entonces
		TotalPago = (TotalMatricula + MontoMensualSept + MontoSociedadPadres) - Hijos3
		Escribir "Su total a pagar = " TotalPago
	FinSi
	Si (CantNiņos > 3) Entonces
		TotalPago = (TotalMatricula + MontoMensualSept + MontoSociedadPadres) - HijosMayor3
		Escribir "Su total a pagar = " TotalPago
	FinSi
	Escribir "Fin del algoritmo."
	
	
	
FinAlgoritmo
