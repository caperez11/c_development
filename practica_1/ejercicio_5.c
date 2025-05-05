#include <stdio.h>

void main(){
    int peso = 0;
    double agua_recomendada = 0.0;

    // Solicitar datos
    printf("Ingrese el peso de la persona en kilogramos: ");
    scanf("%d", &peso);

    // Calcular la cantidad de agua recomendada
     agua_recomendada = (peso * 35) / 1000.0;

    // Presentar resultado
    printf("La cantidad de agua recomendada es: %.2lf litros\n", agua_recomendada);

}