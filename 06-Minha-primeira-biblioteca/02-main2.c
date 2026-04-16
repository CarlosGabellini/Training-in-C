#include <stdio.h>
#include "funcoes.h"

int main () {

    printf ("Raiz quadrada do numero: %.2f\n", raiz_quadrada(49));
    printf ("Esse numero %d possui quantos digitos? %d\n", 134, contar_digitos(134));

    return 0;
}