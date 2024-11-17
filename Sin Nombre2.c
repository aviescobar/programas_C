#include <iostream>
#include <cmath> // Incluimos la librería math para poder usar la función sqrt().

int main() {
    const double vector = 100; // Definimos la longitud del vector.
    const double raiz_de_dos = sqrt(2); // Calculamos la raíz cuadrada de 2.

    double lado = vector / raiz_de_dos; // Calculamos la longitud de un lado del cuadrado.

    double area = pow(lado, 2); // Calculamos el área del cuadrado.

    std::cout << "El área del cuadrado es: " << area << std::endl; // Mostramos el resultado por pantalla.

    return 0;
}