#include <stdio.h>

int main() {
    int edad_anios = 19;
    int segundos_por_minuto = 60;
    int minutos_por_hora = 60;
    int horas_por_dia = 24;
    int dias_por_anios = 365;
    int segundos_vividos = edad_anios * dias_por_anios * horas_por_dia * minutos_por_hora * segundos_por_minuto;
    printf("\a""Has vivido %d segundos\n", segundos_vividos);
    return 0;
}