Algoritmo Ejercicio27
	Definir PrecioBillete, PrecioBilleteDes, Distancia, DiasEstancia, Descuento, PrecioKilometros Como Real
	Descuento = 30 / 100
	PrecioKilometros = 8.50
	
	Escribir "Ingrese la distancia a recorrer: "
	Leer Distancia
	Escribir "Ingrese los días de estancias: " 
	Leer DiasEstancia
	
	Si (Distancia > 1000 y DiasEstancia > 7) Entonces
		PrecioBilleteDes = (Distancia * PrecioKilometros) * Descuento
		Escribir "El precio de su billete con descuento es = " PrecioBilleteDes
	SiNo
		PrecioBillete = (Distancia * PrecioKilometros)
		Escribir "El precio del billete es = " PrecioBillete
	FinSi
	Escribir "Fin del algoritmo."
	
FinAlgoritmo
