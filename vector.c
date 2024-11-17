#include <stdio.h>

int main(){
int vector [10];

//Asignacion de valor
for (int i = 0; i< 10; i++){
    vector[i] = 10;
}
//mostrar posiciones
for(int i = 0; i< 10; i++){
    printf("vector[%d] = %d\n", i , vector[i]);

}
return 0;
}