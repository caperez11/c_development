#include <stdio.h>

void main() {
    // Declarar variables
    int dia_semana = 0;

    // Solicitar datos
    printf("Ingrese el número del día de la semana (1-7): ");
    scanf("%d", &dia_semana);

    if (dia_semana == 1) {
        printf("Lunes\n");
    } else if (dia_semana == 2) {
        printf("Martes\n");
    } else if (dia_semana == 3) {
        printf("Miércoles\n");
    } else if (dia_semana == 4) {
        printf("Jueves\n");
    } else if (dia_semana == 5) {
        printf("Viernes\n");
    } else if (dia_semana == 6) {
        printf("Sábado\n");
    } else if (dia_semana == 7) {
        printf("Domingo\n");
    } else {
        printf("Número de día inválido. Debe estar entre 1 y 7.\n");
    }
}
