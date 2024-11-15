#include <string.h>
#include <stdio.h>

int main(){


    char palabra1[100], palabra2[100];
    int comparacion;

    printf("Ingrese la palabra 1: ");
    scanf("%s", palabra1);

    printf("Ingrese la palabra 2: ");
    scanf("%s", palabra2);

    comparacion = strcmp(palabra1, palabra2);

    if (comparacion == 0){
        printf("Ambas palabras son iguales \n");

    }else if (comparacion < 0){
        printf ("La palabra %s es menor que la palabra %s.\n",palabra1, palabra2);
        printf("La mejor palabra es %s.\n", palabra1);

    }else{
      printf ("La palabra %s es mayor que la palabra %s.\n",palabra1, palabra2);
      printf("La mejor palabra es %s.\n", palabra2);  
    }
    return 0;
}