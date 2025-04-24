#include <stdio.h>
#include "funciones.h"

int main(void){
    int a = 0;
    int b = 0;

    saludo();

    for(;;){
        printf("Ingrese el primer número (0 para salir): ");
        scanf("%d", &a);
        printf("Ingrese el segundo número (0 para salir): ");
        scanf("%d", &b);

        if(a == 0 && b == 0){
            printf("Programa finalizado.\n");
            break;
        }

        compararNumeros(a, b);
    }

    return 0;
}
