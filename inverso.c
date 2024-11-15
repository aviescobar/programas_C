#include <stdio.h>

int main(){
    int arreglo[100];

    //Llenar
    for (int i = 0; i< 100; i++){
        arreglo[i] = 100 -i;
    }
    //Mostrar el arreglo en pantalla
    for (int i = 0; i< 100; i++){
        printf ("arreglo[%d] = %d\n", i , arreglo[i]);
    }
    return 0;
}