#include <stdio.h>

int main() {
    int edad_anios = 25;
    int segundos_por_minuto = 60;
    int minutos_por_hora = 60;
    int horas_por_dia = 24;
    int dias_por_anio = 365;
    int segundos_vividos = edad_anios * dias_por_anio * horas_por_dia * minutos_por_hora * segundos_por_minuto;
    printf("Has vivido aproximadamente %d segundos\n", segundos_vividos);
    return 0;
}