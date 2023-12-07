Algoritmo factorial
    Definir n, fact Como Real
    Definir procedimiento Como Caracter
	
    Escribir "Ingrese un número"
    Leer n
	
    Mientras n < 0 Hacer
        Escribir "Error! Ingrese otro número"
        Leer n
    Fin Mientras
	
    fact <- 1
    procedimiento <- ""
	
    Si n = 0 o n = 1 Entonces
        Escribir n, "! = ", 1
    Sino
        Para i <- 1 hasta n Con paso 1 Hacer
            fact <- fact * i
            Si i < n Entonces
                procedimiento <- procedimiento + ConvertirATexto(i) + "x"
            Sino
                procedimiento <- procedimiento + ConvertirATexto(i)
            Fin Si
			
            Escribir n, "! = ", procedimiento, " = ", fact
        Fin Para
    Fin Si
Fin Algoritmo
	