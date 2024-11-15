#include <stdio.h> 
#include <string.h>

//Función para imprimir el cuadro de N * N void imprimirCuadro(int N){ int i, j; for (i = 0; i < N; i++) { for (j = 0; j < N; j++) { printf("*"); } printf("\n"); } }

int main(){ 
char palabra[20]; 
int i, len;

printf("Escribe una palabra: ");    
scanf("%s", palabra);
len = strlen(palabra);
printf("\nCuadro de caracteres de %d por %d\n", len, len);
imprimirCuadro(len);

return 0;
}