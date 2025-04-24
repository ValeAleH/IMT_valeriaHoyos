#include <stdio.h>
#include "funciones.h"

int main(void){
    int numero = 0;
    int contador = 0;

    saludo();

    for(;;){
        printf("Ingrese un número (-1 para salir): ");
        scanf("%d", &numero);

        if(numero == -1){
            break;
        }

        if(esMultiploDe3(numero)){
            contador++;
        }
    }

    printf("Se ingresaron %d múltiplos de 3.\n", contador);
    return 0;
}
