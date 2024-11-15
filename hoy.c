#include <stdlib.h>

int main(){
    float calificacion;
    printf("ingrese la calificacion del alumno");
    scanf("%f", &calificacion);

    if (calificacion >= 8){
        printf("Felicidades aprobaste el curso\n");

    }
    return 0;
}