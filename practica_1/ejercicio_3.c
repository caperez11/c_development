#include <math.h>
#include <stdio.h>

void main() {
    //Declarar variables
    double monto = 0.0;
    double tasa_mensual = 0.0;
    double tasa_anual = 0.0;
    int numero_cuotas = 0;
    double cuota = 0.0;

    // Solicitar datos
    printf("Ingrese el monto del préstamo: ");
    scanf("%lf", &monto);

    printf("Ingrese la tasa de interés anual (en porcentaje): ");
    scanf("%lf", &tasa_anual);

    printf("Ingrese el número de cuotas: ");
    scanf("%d", &numero_cuotas);

    // Calcular la tasa mensual
    tasa_mensual = (tasa_anual / 100) / 12;

    // Calcular la cuota mensual usando la fórmula
    cuota = (monto * tasa_mensual) / (1 - pow(1 + tasa_mensual, -numero_cuotas));

    // Presentar resultado
    printf("La cuota mensual es: $ %.2lf\n", cuota);
}