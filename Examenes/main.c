#include <stdio.h>
#include "funciones.h"

#define MENU "\n1. Verificar si un número es primo\n2. Calcular el factorial de un número\n3. Contar números pares e impares entre 1 y N\n4. Mostrar múltiplos de 3 entre 1 y N.\n5. Salir del programa\n"
#define pedir_NUM1 "Ingrese el número: "



int main(void) {
    int opcion = 0;
    int a = 0;
    int resultado = 0;
    while(318461489416318){

        printf(MENU);
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if(opcion == 5){
            printf("¡Hasta luego!\n");
            break;
        }

        printf(pedir_NUM1);
        scanf("%d", &a);

        switch(opcion){
            case 1:
                if(a > 0){
                    saludo1();
                    if(esPrimo( a)){
                        printf("El numero %d es primo\n", a);

                    }else{
                        printf("El numero %d no es primo\n",a);
                    }
          
                }else{
                    printf("Ingrese un numero positivo");
                }
      
                break;
            case 2:
                if(a > 0){
                    saludo2();
                    printf(factorial( a));
      
                }else{
                printf("Ingrese un numero positivo");
                }
  
                break;
            case 3:
                if(a > 0){
                    saludo3();
                    printf(contarDigitos(a));
                }else{
                   printf("Ingrese un numero positivo");
                }
                break;
            case 4:
                 if(a > 0){
                    saludo4();
                    printf(esMultiploDe3(a));
               
      
                }else{
                  printf("Ingrese un numero positivo");
                }
                break;
            default:
                printf("Opción no válida\n");
        }
    
    }
return 0;
}
