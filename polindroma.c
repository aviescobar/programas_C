#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char palabra[MAX];
    int i, longitud, es_palindromo = 1;

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);

    for (i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - i - 1]) {
            es_palindromo = 0;
            break;
        }
    }

    if (es_palindromo) {
        printf("La palabra es un palindromo.\n");
    } else {
        printf("La palabra no es un palindromo.\n");
    }

    return 0;
}
