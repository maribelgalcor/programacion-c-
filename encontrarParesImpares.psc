Algoritmo sin_titulo
	Escribir Sin Saltar 'Ingrese un número:';
	Leer num;
	Escribir Sin Saltar 'Números pares desde 1 hasta ', num, ':';
	Para i <- 1 Hasta num Con Paso 1 Hacer
		Si i % 2 = 0 Entonces
			Escribir Sin Saltar i, ' ';
		FinSi
	FinPara
	Escribir Salto;
	Escribir Sin Saltar 'Números impares desde 1 hasta ', num, ':';
	Para i <- 1 Hasta num Con Paso 1 Hacer
		Si i % 2 <> 0 Entonces
			Escribir Sin Saltar i, ' ';
		FinSi
	FinPara
FinAlgoritmo