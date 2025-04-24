#include <stdio.h>
#include "funciones.h"

int main(void){
    int numero;

    saludo8();

    for(;;){
        printf("Ingrese un número entero positivo (1 dígito para salir): ");
        scanf("%d", &numero);

        if(numero >= 0 && numero < 10){
            printf("Número de un solo dígito. Programa finalizado.\n");
            break;
        }

        int resultado = invertirNumero(numero);
        printf("Número invertido: %d\n", resultado);
    }

    return 0;
}
