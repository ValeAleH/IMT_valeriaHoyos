#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    int longitud;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);

    printf("Palabra invertida: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", palabra[i]);
    }

    printf("\n");
    return 0;
}
