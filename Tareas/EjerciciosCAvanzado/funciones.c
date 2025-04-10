#include <stdio.h>

void saludo(void){
    printf("Clasificador de números pares e impares\n");
}

void clasificarNumero(int numero){
    if (numero % 2 == 0){
        printf("El número %d es PAR\n\n", numero);
    } else {
        printf("El número %d es IMPAR\n\n", numero);
    }
}