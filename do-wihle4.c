  #include <stdio.h> /* biblioteca*/

int main() { /* ejecutar o llamar la ejecion*/
    int num, positivos = 0, negativos = 0;/* redondea un numero entero inferior*/

    do { /* repetir una accion*/
        printf("Ingrese un número (ingrese 0 para terminar): "); /* imprimir un dato*/
        scanf("%d", &num); /* enviar datos*/

        if(num > 0) { /* verdadera o falsa*/
            positivos++; /* suma*/
        } else if(num < 0) { /* evalua un calculo*/
            negativos++; /* negativo*/
        }
    } while(num != 0); /* es un bucle*/

    printf("\nCantidad de números positivos ingresados: %d\n", positivos); /* imprimir datos*/
    printf("Cantidad de números negativos ingresados: %d\n", negativos); /* imprimir datos*/

    return 0; /* fin del algoritmo*/
} /* cierre*/
