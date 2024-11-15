#include <stdlib.h>
#include <stdio.h>

int main(){
    int n,i,j;
    printf("Ingrese el numero de elementos:");
    scanf("%d" , &n);
    int numeros[n];
    printf ("Ingrese los %d numeros enteros:\n",n);
    for(i = 0; i < n; i++){
    scanf("%1d", &numeros[i]);

    }
    printf ("Los numeros ingresados en escalera son \n");
    for(i = 0; i < n; i++){
        for (j= 0; j <= i; j++){
            printf("%2d", numeros [j]);
        }
        printf("\n");
    }
    printf("Los numeros ingresados en escalera inversa son: \n");
      for(i = n-1; i>0; i--){
        for (j= 0; j <= i; j++) {
            printf("%2d", numeros [j]);
}
printf("\n");
      }
      return 0;
}