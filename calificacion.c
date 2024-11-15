#include <stdio.h>

int main(){
    float calificacion;
    printf("Ingrese la calificacion del examen:");
    scanf("%f", &calificacion);

    if(calificacion >= 8){
        printf("Felicidades , aprobaste el curso.\n");

    }
    if(calificacion <= 7){
        printf("No carnal , ya no pasaste el curso.\n");
    }
    return 0;
}