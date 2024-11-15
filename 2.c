#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,i;
    int*arr;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d",&x);
    //reservar memoria para el arreglo
    arr=(int*)malloc(x* sizeof(int));
    //llenar el arreglo
    for (i=0; i<x; i++){
        printf("Ingrese el valor para el elemento %d: ",i);
        scanf("%d",&arr[i]);
    }
    //Mostrar los elementos
    printf("Los valores ingresados son:\n");
    for (i=0; i<x; i++){
        printf(" %d: ",arr[i]);
}
//Liberar memoria
free(arr);
return 0;
}