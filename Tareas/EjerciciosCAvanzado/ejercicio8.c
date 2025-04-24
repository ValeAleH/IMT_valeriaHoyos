#include <stdio.h>
#include "funciones.h"

int main(void){
    int numero;

    saludo7();

    for(;;){
        printf("Ingrese un número entero positivo (0 o negativo para salir): ");
        scanf("%d", &numero);

        if(numero <= 0){
            printf("Programa finalizado.\n");
            break;
        }

        printf("El factorial de %d es: %llu\n", numero, factorial(numero));
    }

    return 0;
}
