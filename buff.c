#include <stdlib.h>
#include <stdio.h>

int main(){
    int x;
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d",&x);

int arr[x];
printf("Ingresa %d numeros para llenar el arreglo:\n",x);
for(int i=0; i<x; i++){
    scanf("%d",&arr[i]);
}
printf("Los valores ingresados son: ");
for(int i=0; i<x; i++){
    printf("%d",arr[i]);
}
return 0;
}