Algoritmo sin_titulo
	Escribir Sin Saltar 'Ingrese un n�mero:';
	Leer num;
	Escribir Sin Saltar 'N�meros pares desde 1 hasta ', num, ':';
	Para i <- 1 Hasta num Con Paso 1 Hacer
		Si i % 2 = 0 Entonces
			Escribir Sin Saltar i, ' ';
		FinSi
	FinPara
	Escribir Salto;
	Escribir Sin Saltar 'N�meros impares desde 1 hasta ', num, ':';
	Para i <- 1 Hasta num Con Paso 1 Hacer
		Si i % 2 <> 0 Entonces
			Escribir Sin Saltar i, ' ';
		FinSi
	FinPara
FinAlgoritmo