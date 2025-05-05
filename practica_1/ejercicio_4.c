#include <stdio.h>

void main() {
    // Declarar variables
    int hora = 0;
    int minutos = 0;
    int diferencia = 0;

    // Solicitar datos
    printf("Ingrese la hora en formato HH:MM: ");
    scanf("%d:%d", &hora, &minutos);


    printf("Ingrese la diferencia horaria (en horas): ");
    scanf("%d", &diferencia);

    // Realizar la conversión de zona horaria con módulo para mantener las 24(0..23) horas
    hora = (hora + diferencia + 24) % 24;

    // Presentar resultado
    printf("La nueva hora es: %02d:%02d\n", hora, minutos);
}
