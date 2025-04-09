#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    if (numero == 0) {
        contador = 1; 
    } else {
        while (numero != 0) {
            numero /= 10;
            contador++;
        }
    }

    printf("El número tiene %d dígitos.\n", contador);
    return 0;
}
