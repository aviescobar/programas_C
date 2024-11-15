#include <stdio.h> 
#include <string.h>

int main() {

char palabra[20]; //declaración del arreglo
int N ;
int i;
int j ;

printf("Ingrese una palabra: \n");
scanf("%s", palabra);

N = strlen(palabra); //Guarda la longitud de la palabra

for (i = 0; i < N; i++) { 
    for (j = 0; j < N; j++) { 
        printf("*\t");
    }
    printf("\n"); 
}

return 0;
}
