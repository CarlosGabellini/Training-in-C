#include <stdio.h>
#include <stdlib.h>

int main () {

    short int variavel = 10;
    short int *ponteiro_da_variavel = &variavel;

    *ponteiro_da_variavel = -190;               //Valor meramente aleatorio;

    printf ("O ponteiro da variavel tem o valor: %hd\n", *ponteiro_da_variavel);

    return 0;
}