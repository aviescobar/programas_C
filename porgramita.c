#include <stdlib.h>
#include <stdio.h>

int main(){
    int antiguedad;
    float sueldo, porcentaje;

    printf("Ingrese su antiguedad en años");
    scanf("%d", &antiguedad);
    printf ("Ingrese su sueldo mensual");
    scanf("%d", &sueldo);
    
    porcentaje = (sueldo * 0.1)  / 100;

    if(antiguedad >= 5 && porcentaje > 1000){
        printf ("Ustedes es un sujeto a un credito ");

    }else {
        printf ("Lo siento , usted no cumple para un credito");
    }
    return 0;
    }

