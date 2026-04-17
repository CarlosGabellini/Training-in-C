#include <stdio.h>

int main () {

    short int a = 5;
    short int b = 10;
    short int c = a;

    short int *ponteiro_de_a = &a;
    short int *ponteiro_de_b = &b;
    short int *ponteiro_de_ab = &c;

    //Por enquanto esta é a melhor forma de trocar valores para ponteiros;
    //por que se o ponteiro_de_ab apontar pro endereco de a, vai substituir de qualquer forma;

    *ponteiro_de_a = *ponteiro_de_b;
    *ponteiro_de_b = *ponteiro_de_ab;

    printf ("Valor de a: %hd\n", *ponteiro_de_a);
    printf ("Valor de b eh: %hd\n", *ponteiro_de_b);

    return 0;
}