    #include <stdio.h> 
    int main(){ 
        char palabra [20]; 
        int longitud; 
        printf("Escribe una palabra: "); 
        scanf("%s", palabra); 
        longitud=strlen(palabra); 
        if(longitud>=4){ 
        printf("***\n");
        printf("%s*\n", palabra);
        printf("****\n"); 
        }
        return 0; 
        }   