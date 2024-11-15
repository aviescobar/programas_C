#include <string.h>
#include <stdio.h>

int main(){
    char word1[100];
    char word2[100];
    char temp[100];

    printf("Ingrese la primera palabra   ");
    scanf("%s", word1);

    printf("Ingrese la segunda palabra   ");
    scanf("%s", word2);

    printf("Antes del intercambio:\n");
    printf("Palabra 1: %s\n", word1);
    printf("Palabra 2: %s\n", word2);

    //intercambio
    strcpy(temp, word1);
    strcpy(word1, word2);
    strcpy(word2, temp);

    printf("Despues del intercambio:\n");
    printf("Palabra 1: %s\n", word1);
    printf("Palabra 2: %s\n", word2);

    return 0;
    
}