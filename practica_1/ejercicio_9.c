#include <stdio.h>

void main() {
    // Declarar variables
    double peso = 0.0;

    // Solicitar datos
    printf("Ingrese el peso de la persona en kilogramos: ");
    scanf("%lf", &peso);

    if (peso < 18.5) {
        printf("Bajo Peso\n");
    } else if (peso <= 24.9) {
        printf("Normal\n");
    } else if (peso <= 29.9) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }
}
