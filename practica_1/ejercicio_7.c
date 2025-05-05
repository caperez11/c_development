#include <stdio.h>

void main() {
    // Declarar variables
    double t_original = 0.0;
    double t_nueva = 0.0;
    double ti_original = 0.0;
    double ti_nuevo_calculado = 0.0;

    // Solicitar datos
    printf("Ingrese la temperatura original: ");
    scanf("%lf", &t_original);

    printf("Ingrese el tiempo en minutos: ");
    scanf("%lf", &ti_original);

    printf("Ingrese la temperatura nueva: ");
    scanf("%lf", &t_nueva);

    // Calcular el nuevo tiempo
    ti_nuevo_calculado = (t_original / t_nueva) * ti_original;

    // Presentar resultado
    printf("El nuevo tiempo calculado es: %0.lf minutos\n", ti_nuevo_calculado);

}
