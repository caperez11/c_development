#include <stdio.h>

void main(){
    double meta_ahorro = 0.0;
    double ahorro_mensual = 0.0;
    int meses = 0;

    // Solicitar datos
    printf("Ingrese la meta de ahorro en dólares: ");
    scanf("%lf", &meta_ahorro);
    printf("Ingrese el ahorro mensual en dólares: ");
    scanf("%lf", &ahorro_mensual);

    // Calcular el número de meses necesarios
    meses = meta_ahorro / ahorro_mensual;

    // Presentar resultado
    printf("Se necesitan %d meses para alcanzar la meta de ahorro.\n", meses);
}