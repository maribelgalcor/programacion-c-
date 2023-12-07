#include <stdio.h> /* es una biblioteca*/

int main() { /* calcular el valor numerico de dos numeros*/
    int num; /* limite maximo al cual puede alcanzar un numero*/

    printf("Ingrese un número: "); /* imprimir un dato*/
    scanf("%d", &num); /* explorar cada campo de entrada caracter por caracter */

    printf("\nNúmeros pares desde 1 hasta %d:\n", num); /* imprimir un dato*/
    for(int i = 1; i <= num; i++) { /* permite repetir una instrucion*/
        if(i % 2 == 0) { /* una condiccion verdadera*/
            printf("%d ", i); /* imprimir un dato*/
        } /* cierre de un llave*/
    }

    printf("\n\nNúmeros impares desde 1 hasta %d:\n", num); /* imprimir un dato*/
    for(int i = 1; i <= num; i++) { /* permite repetir una instrucion*/
        if(i % 2 != 0) { /* una condiccion verdadera*/
            printf("%d ", i); /* imprimir un dato*/
        } /* cierre de un llave*/
    }

    return 0; /* fin de algoritmo*/
} /* cierre de un llave*/
