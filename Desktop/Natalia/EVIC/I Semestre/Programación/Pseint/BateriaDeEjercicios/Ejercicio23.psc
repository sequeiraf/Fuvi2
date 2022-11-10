Algoritmo Ejercicio23
	Definir BocadilloJamon, Refresco, Cerveza, Total Como Real
	Definir CantBocadilloJamon, CantResfresco, CantCerveza Como Real
	Definir TotalBocadilloJamon, TotalResfresco, TotalCerveza Como Real
	
	BocadilloJamon = 1.5
	Refresco = 1.05
	Cerveza = 0.75
	
	Escribir "Ingrese la cantidad total de bocadillos de jamon: "
	Leer CantBocadilloJamon
	Escribir "Ingrese la cantidad total refrescos: "
	Leer CantRefresco
	Escribir "Ingrese la cantidad total cervezas: "
	Leer CantCerveza
	
	Si (CantBocadilloJamon > 0) Entonces
		TotalBocadilloJamon = CantBocadilloJamon * BocadilloJamon
	FinSi
	Si (CantRefresco > 0) Entonces
		TotalRefresco = CantRefresco * Refresco
	FinSi
	Si (CantCerveza > 0) Entonces
		TotalCerveza = CantCerveza * Cerveza
	FinSi
	
	Escribir "El valor total de bocadillos de jamon = " TotalBocadilloJamon
	Escribir "El valor total de refrescos = " TotalRefresco
	Escribir "El valor total de cervezas = " TotalCerveza
	
	
	
	
	
FinAlgoritmo
