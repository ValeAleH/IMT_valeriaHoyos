#include <stdio.h>
#include "funciones.h"

int main(void){
    saludo1();

    int numero = 0;

    for(;;){
        printf("Ingrese un número entero positivo (0 para salir): ");
        scanf("%d", &numero);

        if (numero == 0){
            printf("Programa finalizado.\n");
            break;
        } else if (numero < 0){
            printf("Por favor ingrese solo números POSITIVOS.\n\n");
            continue;
        }

        int digitos = contarDigitos(numero);
        printf("El número tiene %d dígito(s).\n\n", digitos);
    }

    return 0;
}
