#include <stdio.h>
#include "funciones.h"

//opcion1
void saludo1(void){
    printf("Calculadora de numeros primos\n");
}
int esPrimo(int a){
    if(a <= 1){
        return 0;
    }
    for(int i=2; i*i <= a; i++){
        if(a % i == 0){
         return 0;
        }
    }
    return 1; 

}

//opcion 2 
void saludo2(void){
    printf("Calculadora de Factorial\n");
}

unsigned long long factorial(int a){
    unsigned long long resultado = 1;

    for(int i = 1; i <= a; i++){
        resultado *= i;
    }

    return resultado;
}

//opcion3
void saludo3(void){
    printf("Cantidad de pares e impares\n");
}
void contarDigitos(int a){
    int pares = 0;
    int impares = 0;
    for(int i = 1; i <= a; i++){
        if(i % 2 ==0){
            pares++;
        }else{
            impares++;
        }
    }
    printf("Pares: %d, Impares: %d\n", pares, impares);
}

//opcion4
void saludo4(void){
    printf("Cantidad de múltiplos de 3\n");
}

void esMultiploDe3(int a){
    printf("Multiplos de 3 entre 1 y %d:", a);
    for(int i = 1; i <= a; i++){
        if(i % 3 ==0){
            printf("%d", i);
        }
    }
    prinf("\n");
}