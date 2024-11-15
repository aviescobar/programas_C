#include <stdio.h>

int main() {
    int n, i, suma=0;

    printf("Ingresa un numero entero:");
    scanf ("%d", &n);

    for (i=1; i<=n; i++){
       // suma += i;
       suma = suma + i;

    }

    printf ("La suma de los numeros desde 1 hasta %d es: %d\n",n,suma);

    return 0;
}