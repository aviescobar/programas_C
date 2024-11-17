#include <stdio.h>
#include <math.h>

int main()
{
   float a, b, c, p, area;
   printf("Ingresa la longitud del lado a: ");
   scanf("%f", &a);
   printf("Ingresa la longitud del lado b: ");
   scanf("%f", &b);
   printf("Ingresa la longitud del lado c: ");
   scanf("%f", &c);

   p = (a + b + c) / 2;
   area = sqrt(p * (p - a) * (p - b) * (p - c));

   printf("El area del triangulo es: %f\n", area);

   return 0;
}
