Algoritmo Ejercicio33
	Definir CantNiños, MontoMatricula, MatriculaPorNiño, MontoMensualSept, MontoSociedadPadres Como Real
	Definir TotalMatricula, TotalMatriculaDescuento1, TotalMatriculaDescuento2, TotalMatriculaDescuento3, TotalPago Como Real
	MontoMatricula = 300
	MontoMensualSept = 150
	MontoSociedadPadres = 100
	Hijos2 = 10 / 100
	Hijos3 = 15 / 100
	HijosMayor3 = 20 / 100
	
	
	Escribir "Cuantos niños tiene en el colegio: "
	Leer CantNiños
	TotalMatricula = MontoMatricula * CantNiños
	
	Si (CantNiños = 1) Entonces
		TotalPago = TotalMatricula + MontoMensualSept + MontoSociedadPadres
		Escribir "Su total a pagar = " TotalPago
	FinSi
	Si (CantNiños = 2) Entonces
		TotalPago = (TotalMatricula + MontoMensualSept + MontoSociedadPadres) - Hijos2
		Escribir "Su total a pagar = " TotalPago
	FinSi
	Si (CantNiños = 3) Entonces
		TotalPago = (TotalMatricula + MontoMensualSept + MontoSociedadPadres) - Hijos3
		Escribir "Su total a pagar = " TotalPago
	FinSi
	Si (CantNiños > 3) Entonces
		TotalPago = (TotalMatricula + MontoMensualSept + MontoSociedadPadres) - HijosMayor3
		Escribir "Su total a pagar = " TotalPago
	FinSi
	Escribir "Fin del algoritmo."
	
	
	
FinAlgoritmo
