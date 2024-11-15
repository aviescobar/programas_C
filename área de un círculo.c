#include <stdio.h>
#include <math.h>

int main() {
    double diametro = 10.0; // en metros
    double radio = diametro / 2.0;
    double pi = 3.14159265358979323846;
    double area = pi * pow(radio, 2);
    printf("El área del círculo es: %lf metros cuadrados\n", area);
    return 0;
}