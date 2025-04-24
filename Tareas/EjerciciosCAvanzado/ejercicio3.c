#include <stdio.h>
#include "funciones.h"

int main(void){
    saludo2();

    Semaforo estado = ROJO;
    int ciclos = 0;

    while(ciclos < 10){
        mostrarEstado(estado);

        if (estado == AMARILLO) {
            estado = ROJO;
        } else {
            estado++;
        }

        ciclos++;
    }

    printf("Simulación completada después de %d ciclos.\n", ciclos);
    return 0;
}
