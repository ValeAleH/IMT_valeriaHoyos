#include <stdio.h>
#include "funciones.h"

//ejercicio1
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
//ejercicio2 
void saludo1(void){
    printf("Contador de dígitos de números enteros positivos\n");
}

int contarDigitos(int numero){
    int contador = 0;
    if(numero == 0){
        return 1;
    }
    while(numero != 0){
        numero /= 10;
        contador++;
    }
    return contador;
}
//ejercicio3
void saludo2(void){
    printf("Simulación de semáforo\n");
}
void mostrarEstado(Semaforo estado){
    switch(estado){
        case ROJO:
            printf("Estado: ROJO - ¡Detenerse!\n");
            break;
        case VERDE:
            printf("Estado: VERDE - Avanzar.\n");
            break;
        case AMARILLO:
            printf("Estado: AMARILLO - Precaución.\n");
            break;
    }
}
//ejercicio4
void saludo3(void){
    printf("Acumulador de valores positivos\n");
}

int acumularSuma(int sumaActual, int nuevoValor){
    return sumaActual + nuevoValor;
}

//ejercicio5
void saludo4(void){
    printf("Mini Menú de Operaciones\n");
}
int sumar(int a, int b){
    return a + b;
}
int restar(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

//ejercicio6
void saludo5(void){
    printf("Comparador de dos números\n");
}

void compararNumeros(int a, int b){
    if(a > b){
        printf("%d es mayor que %d\n", a, b);
    } else if(b > a){
        printf("%d es mayor que %d\n", b, a);
    } else {
        printf("Ambos números son iguales: %d = %d\n", a, b);
    }
}

//ejercicio7
void saludo6(void){
    printf("Contador de múltiplos de 3\n");
}

int esMultiploDe3(int numero){
    return (numero % 3 == 0);
}

//ejercicio8
void saludo7(void){
    printf("Calculadora de Factorial\n");
}

unsigned long long factorial(int numero){
    unsigned long long resultado = 1;

    for(int i = 1; i <= numero; i++){
        resultado *= i;
    }

    return resultado;
}

//ejercicio9 
void saludo8(void){
    printf("Inversión de número\n");
}

int invertirNumero(int numero){
    int invertido = 0;

    while(numero > 0){
        invertido = invertido * 10 + (numero % 10);
        numero /= 10;
    }

    return invertido;
}