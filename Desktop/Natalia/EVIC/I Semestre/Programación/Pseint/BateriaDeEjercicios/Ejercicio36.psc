Algoritmo Ejercicio36
	Definir Nombre como cadena
	Definir MontoPorHora, MontoHorasExtras, MontoHorasTrabajadas, MontoSalarioExtra, MontoSalarioNeto, MontoSalarioNetoExtra, MontoTotal Como Entero
	
	Escribir "Ingrese su nombre completo: " Sin Saltar
	Leer Nombre
	escribir "Ingrese cuanto gana por hora: " Sin Saltar
	leer MontoPorHora
	x = 1
	Mientras x <= 5 Hacer
		Escribir "Ingrese las horas trabajadas en el día " x
		Leer MontoHorasTrabajadas
		MontoTotal = MontoTotal + MontoHorasTrabajadas
		x =  x + 1
	FinMientras
	Si (total >= 48) Entonces
		Escribir "Usted ha trabajado más horas de las establecidas"
		MontoHorasExtras = MontoTotal - 48
		MontoSalarioExtra = ((35*100)/MontoPorHora ) * MontoHorasExtras
		SalarioNetoExtra = 48 * MontoPorHora + MontoSalarioExtra
		Escribir "El colaborador de nombre: " Nombre
		Escribir "La cantidad de horas extras trabajadas es de: " MontoHorasExtras
		Escribir "Su salario por las horas extras es de: " MontoSalarioExtra 
		Escribir "Su salario Neto es de: " MontoSalarioNetoExtra 
	Sino
		MontoSalarioNeto = MontoTotal * MontoPorHora 
		Escribir "El colaborador de nombre: " Nombre
		Escribir "Su salario Neto es de: " MontoSalarioNeto
	FinSi
	Escribir "Fin del algoritmo."
FinAlgoritmo
	
