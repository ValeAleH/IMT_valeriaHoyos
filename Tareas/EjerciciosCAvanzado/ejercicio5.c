#include <stdio.h>
#include "funciones.h"

#define MENU "\n1. Sumar dos números\n2. Restar dos números\n3. Multiplicar dos números\n4. Salir\n"
#define PEDIR_NUM1 "Ingrese el primer número: "
#define PEDIR_NUM2 "Ingrese el segundo número: "

int main(void){
    saludo4();

    int opcion = 0;
    int a = 0;
    int b = 0;
    int resultado = 0;

    for(;;){
        printf(MENU);
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if(opcion == 4){
            printf("¡Hasta luego!\n");
            break;
        }

        printf(PEDIR_NUM1);
        scanf("%d", &a);
        printf(PEDIR_NUM2);
        scanf("%d", &b);

        switch(opcion){
            case 1:
                resultado = sumar(a, b);
                printf("Resultado de la suma: %d\n", resultado);
                break;
            case 2:
                resultado = restar(a, b);
                printf("Resultado de la resta: %d\n", resultado);
                break;
            case 3:
                resultado = multiplicar(a, b);
                printf("Resultado de la multiplicación: %d\n", resultado);
                break;
            default:
                printf("Opción no válida\n");
        }
    }

    return 0;
}
