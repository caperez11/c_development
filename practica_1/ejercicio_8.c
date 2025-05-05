#include <stdio.h>

void main() {
    // Declarar variables
    double ingresos = 0.0;
    double egresos = 0.0;
    double total = 0.0;

    // Solicitar datos
    printf("Ingrese el total de ingresos: ");
    scanf("%lf", &ingresos);
    printf("Ingrese el total de egresos: ");
    scanf("%lf", &egresos);

    // Calcular el total
    total = ingresos - egresos;

    // Presentar resultado
    if (total < 0) {
        printf("Déficit: $ %.2lf\n", total);
    } else {
        printf("Superávit: $ %.2lf\n", total);
    }
}
