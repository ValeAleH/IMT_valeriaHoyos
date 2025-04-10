#include "funciones.h"
#include <stdio.h>

int main(void){
    saludo();

    int numero = 0;

    for(;;){
        printf("Ingrese un número entero (-1 para salir): ");
        scanf("%d", &numero);

        if (numero == -1){
            printf("Programa finalizado.\n");
            break;
        }

        clasificarNumero(numero);
    }

    return 0;
}