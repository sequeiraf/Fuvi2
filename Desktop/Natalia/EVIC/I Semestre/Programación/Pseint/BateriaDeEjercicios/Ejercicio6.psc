Algoritmo Porcentajeescuela
	
	Definir CantidadNiños, CantidadNiñas, CantidadTotal Como Real
	Definir PorcentajeNiños, PorcentajeNiñas Como Real
	
	Escribir "Ingrese la cantidad total de niños: "
	Leer CantidadNiños
	Escribir "Ingrese la cantidad total de niñas: "
	Leer CantidadNiñas
	
	CantidadTotal = CantidadNiños + CantidadNiñas
	PorcentajeNiños = (CantidadNiños * 100) / CantidadTotal
	PorcentajeNiñas = (CantidadNiñas * 100) / CantidadTotal
	
	Escribir "La cantidada total de niñ@s es = " CantidadTotal
	Escribir "El porcentaje de niños es = " PorcentajeNiños "%"
	Escribir "El porcentaje de niñas es = " PorcentajeNiñas "%"
	
FinAlgoritmo
