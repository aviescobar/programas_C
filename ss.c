#include <stdio.h>
#include <stdlib.h>

//
int*p,y;
void func(){
    int x=40;
    p=&x;
    y=*p;  //Correcto
    *p=23; //Correcto
}
int main(void){
    func();
    y=*p; //incorrecto
    *p=23; //incorrecto
    printf("El valor de y es %d\nEl valor de *p es %d\nEl valor de p es %p*,y,*p,p");

}