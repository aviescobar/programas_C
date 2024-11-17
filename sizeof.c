#include <stdlib.h>
#include <stdio.h>

int main(){
    char cadena[10];
    printf("un int ocupa %ld bytes", sizeof(int));
     printf("un char ocupa %ld bytes", sizeof(char));
     printf("un float ocupa %ld bytes", sizeof(float));
     printf("un double ocupa %ld bytes", sizeof(double));
     printf("un cadena ocupa %ld bytes", sizeof(cadena));
}