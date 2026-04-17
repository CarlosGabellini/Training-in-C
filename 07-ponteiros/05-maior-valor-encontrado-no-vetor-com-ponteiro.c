#include <stdio.h>
#define GLOBAL 5

void retornar_maior_valor (short int *vetor, short int *maior_valor) {

    *maior_valor = vetor[0];

    for (int i = 1; i < GLOBAL; i++) {

        if (*maior_valor < vetor[i]) {
        *maior_valor = vetor[i];
        }
    }
}

int main () {

    short int vetor[GLOBAL] = {12, 43, 4321, 11, 345};
    short int maior_valor;

    retornar_maior_valor(vetor, &maior_valor);

    printf ("O maior valor sera de: %hd\n", maior_valor);

    return 0;
}