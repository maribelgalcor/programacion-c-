Algoritmo encontrarMayorMenor
    Definir num, mayor, menor como enteros
    mayor <- -999999
    menor <- 999999
	
    Escribir "Ingrese un n�mero (0 para terminar): "
    Leer num
	
    Mientras num <> 0 hacer
        Si num > mayor entonces
            mayor <- num
        Fin Si
		
        Si num < menor entonces
            menor <- num
        Fin Si
		
        Escribir "Ingrese un n�mero (0 para terminar): "
        Leer num
    Fin Mientras
	
    Escribir "El n�mero mayor ingresado es: ", mayor
    Escribir "El n�mero menor ingresado es: ", menor
Fin Algoritmo