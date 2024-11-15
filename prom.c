#include <stdio.h>

int main(){
    int arreglo[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int suma = 0;
    int multiplicacion = 1;

    //Calcular promedio
    for (int i = 0; i< 20; i++){
        suma += arreglo[i];
    }
    float promedio = (float) suma / 20;
    //Calculo multi
    for (int i = 0; i< 20; i++){
        multiplicacion *= arreglo[i];
    }
    //Mostrar resultados
    printf("Promedio; %f\n", promedio);
    printf("MUltiplicacion: %d\n", multiplicacion);
    return 0;
}