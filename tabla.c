#include <stdlib.h>
#include <stdio.h>
int main() {
    int M,N,i,j;
    printf("Ingrese el numero M:");
    scanf("%d", &M);
    printf("Ingrese el numero N:");
    scanf("%d", &N);

    for (i=1; i<=N; i++){
        printf("La tabla de multiplicar es:");
        for(j=1; j<=10; j++){
            printf("%d x %d = %d\n",i*M, j, i*M*j);
        }
        printf("\n");
    } 
    return 0;

}