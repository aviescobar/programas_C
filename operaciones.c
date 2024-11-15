#include <stdio.h>

int main() {
    int A[] = {3,5,6,8,4,7,8,5,3,1};
    int B[] = {3,4,6,8,9,1,2,3,0,9};

    //OPeracion 1
    int operacion1 = A[3] % (B[2]/3);
    printf("Opreacion 1: %d\n", operacion1);

    //OPeracion 2
    int operacion2 = B[A[1]] - A[9];
    printf("OPeracion 2: %d\n", operacion2);

    //OPeracion 3
    int operacion3 = A[0] + A[1+2];
    printf("Operacion 3: %d\n", operacion3);

    //OPeracion 4
    int operacion4 = A[5] + B[5];
    printf("Operacion 4: %d\n", operacion4);

    //OPeracion 5
    int operacion5 = (A[3]/B[2])/2;
    printf("Operacion 5: %d\n", operacion5);
    return 0;
}