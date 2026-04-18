#include <stdio.h>

//Fazer um programa que implemente a soma de dois numeros e acessar via ponteiro, vou criar uma funcao pra isso;

void somar (int *a, int *b) {

    (*a) += (*b);
}

int main () {

    int numero1 = 10;
    int numero2 = 12;
    int *ponteiro_numero1 = &numero1;
    int *ponteiro_numero2 = &numero2;

    somar(ponteiro_numero1, ponteiro_numero2);

    printf ("Os numeros somados dao: %d\n", *ponteiro_numero1);

    //O resultado esta no endereco de memoria do numero 1;

    return 0;
}