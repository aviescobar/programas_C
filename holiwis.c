#include <stdio.h>

int main(){
    int a,i,j;

    printf("Ingresa un numero entero para A:");
    scanf("%d", &a);

    for (i=0; i<4; i++) {
        for(j=0; j<4; j++) {
            printf("%d\t", a+3*i+2*j);

        }
        printf("\n");
    }

    return 0;
}

