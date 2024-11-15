#include <stdlib.h>
#include <stdio.h>

int main(){
    int M,N,i,j;
    printf("Ingrese el numero M:");
    scanf("%d", &M);
    printf("Ingrese el numero N:");
    scanf("%d", &N);
     
     //
     printf("  ");
     for (j=1; j<=10; j++){
        printf("%4d",j);

     }
     printf("\n");
     //
     printf("  +");
     for (j=1; j<=10; j++){
        printf ("----");
        
}
printf("\n");
//cuerpo
for(i=M; i<=N; i++){
    printf("%2d|" , i);
    for (j=1; j<=10; j++){
        printf("%4d", i*j);

    }
    printf ("\n");

}
return 0;
}