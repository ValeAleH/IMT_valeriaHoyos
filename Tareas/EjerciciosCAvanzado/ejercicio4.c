#include <stdio.h>
#include "funciones.h"

int main(void){
    saludo3();

    int numero = 0;
    int total = 0;

    for(;;){
        printf("Ingrese un número entero positivo (negativo para salir): ");
        scanf("%d", &numero);

        if(numero < 0){
            printf("Total acumulado: %d\n", total);
            printf("Programa finalizado.\n");
            break;
        }

        total = acumularSuma(total, numero);
    }

    return 0;
}
