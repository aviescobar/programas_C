#include <stdio.h>
#include <stdlib.h>

int main(void){
  int i,n;
   char*buffer;

 printf("Teclea la longitud de la cadena");
  scanf("%d", &i);

   buffer=(char*)malloc((i+1)*sizeof(char));
   if(buffer==NULL)exit(1);
  
