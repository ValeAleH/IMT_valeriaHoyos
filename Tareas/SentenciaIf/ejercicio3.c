#include <stdio.h>

int main() {
    int anio;

    printf("Ingrese un año: ");
    scanf("%d", &anio);

    if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) {
        printf("El año %d es bisiesto.\n", anio);
    } else {
        printf("El año %d no es bisiesto.\n", anio);
    }

    return 0;
}
