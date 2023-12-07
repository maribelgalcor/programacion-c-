 #include <stdio.h> /* es una bliblioteca */
#include <limits.h> /* es una bliblioteca */

int main() { /* ejecutar o llamar a la ejecucion*/
    int num, mayor = INT_MIN, menor = INT_MAX; /* limite maximo del entero*/

    printf("Ingrese un número (0 para terminar): "); /* imprimir datos*/
    scanf("%d", &num); /* enviar datos*/

    while(num != 0) { /* un bucle*/
        if(num > mayor) { /* verdadero o falso*/
            mayor = num; 
        }

        if(num < menor) { /* verdadero o falso*/
            menor = num;
        }

        printf("Ingrese un número (0 para terminar): "); /* imprimir datos*/
        scanf("%d", &num); /* enviar datos*/
    }

    printf("\nEl número mayor ingresado es: %d\n", mayor); /* imprimir datos*/
    printf("El número menor ingresado es: %d\n", menor);/* imprimir datos*/

    return 0; /* fin de un algortimo*/
} /* cierre de la llave*/
