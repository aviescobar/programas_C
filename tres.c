#include <stdio.h>


int main() {
    int i;

    printf ("Enteros positivos menores que 100 que no son divisibles por 7:\n");

    for(i = 1; i < 100; i++){
        if (i % 7 != 0) {
            printf ("%d,", i);
        }
    }
    return 0;
}