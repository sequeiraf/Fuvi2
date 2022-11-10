Algoritmo Descuento15
	
	Definir Descuento, TotalCompra, TotalPago Como Real
	Definir Mes Como Caracter
	Descuento = 15 
	
	Escribir "Bienvenid@ a nuestra tienda, por su compra en el mes de octubre se le aplicará un descuento."
	Escribir "Ingrese el mes de su compra: "
	Leer Mes
	Escribir "Ingrese el total de su compra: "
	Leer TotalCompra
	
	Si (Mes = "Octubre") Entonces 
		TotalPago = (TotalCompra / 100) * (Descuento)
		Escribir "El total a pagar con su descuento aplicado por ser el mes de octubre es de = " TotalPago
	SiNo
		Escribir "Su total a pagar es = " TotalCompra
		Escribir "En este mes no se aplica el descuento."
	Fin Si
	
FinAlgoritmo
