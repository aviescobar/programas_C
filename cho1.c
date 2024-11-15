#include <stdio.h>
#include <string.h>
//strcmp  (string compara) 
//Forma invertida da resultado negativo
int main(){
    int res;
    char str1[]="Nalgon";
    char str2[]="JOrge.";
    res = strcmp( str1, str2 ),
    printf("resultado : %d", res);
    return 0;
}
