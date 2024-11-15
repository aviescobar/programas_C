#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int main()
{
    char palabra[MAX];
    int letras[26] = {0}; // Inicializa el arreglo en cero
    int i, longitud;

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);

    for (i = 0; i < longitud; i++) {
        if (isalpha(palabra[i])) { // Verifica si el caracter es una letra
            letras[tolower(palabra[i]) - 'a']++; // Aumenta el contador de la letra correspondiente
        }
    }

    for (i = 0; i < 26; i++) {
        if (letras[i] > 0) {
            printf("La letra %c aparece %d veces.\n", 'a' + i, letras[i]);
        }
    }

    return 0;
}
