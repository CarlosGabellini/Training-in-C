#include <stdio.h>
#include "funcoes.h"

int main () {

    printf ("Raiz quadrada do numero: %.2f\n", raiz_quadrada(49));
    printf ("Esse numero %d possui quantos digitos? %d\n", 134, contar_digitos(134));

    printf ("A potencia de 3 elevado a 2 eh? %.2f\n", potencia(3, 2));

    printf ("Qual o valor da fatoracao de 5? %d\n", fatoracao(5));

    return 0;
}