#include <string.h>
#include <stdio.h>

int main(){
    char palabra1[100];
    char palabra2[100];

    printf("Introduce la primera palabra: ");
    scanf("%s", palabra1);
    
    printf("Introduce la segunda palabra: ");
    scanf("%s", palabra2);

    int longitud1= strlen(palabra1);

    printf("La longitud de la primera palabra es: %d\n", longitud1);

    printf("La concatenacion de la primera palabra es %d veces a la primera palabra es: ", longitud1);

    for (int i=0; i < longitud1; i++){
        printf("%s", palabra2);

    }
    printf("\n");
    return 0;

}