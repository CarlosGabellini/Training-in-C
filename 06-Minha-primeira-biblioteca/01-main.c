#include <stdio.h>
#include "funcoes.h"

int main () {

    float base;
    float expoente;
    float resultado;

    printf ("Digite a base da potencia: ");
    scanf ("%f", &base);

    printf ("Digite o expoente da potencia: ");
    scanf ("%f", &expoente);

    resultado = potencia(base, expoente);

    printf ("O resultado vai ser: %.2f\n", resultado);

    return 0;
}