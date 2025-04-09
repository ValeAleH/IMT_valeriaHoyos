#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("El primer número (%d) es mayor que el segundo (%d).\n", num1, num2);
    } else if (num2 > num1) {
        printf("El segundo número (%d) es mayor que el primero (%d).\n", num2, num1);
    } else {
        printf("Ambos números son iguales (%d).\n", num1);
    }

    return 0;
}    