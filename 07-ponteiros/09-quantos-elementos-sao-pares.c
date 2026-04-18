#include <stdio.h>

void contar_pares (int *vetor, int *variavel, int tamanho) {

    for (int a = 0; a < tamanho; a++) {

        if (vetor[a] % 2 == 0) {
            (*variavel)++;                      //Linha importante, antes estava fazendo *variavel++;
        }                                       //Primeiro desreferencie o ponteiro, e depois incremente;
    }
}

void gerar_valores(int *vetor, int tamanho) {

    unsigned short int valor = 10;

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = valor;
        valor = valor + 3;
    }
}

int main () {
\
    int vetor[5];
    int pares = 0;
    int *ponteiro_de_pares = &pares;

    gerar_valores(vetor, 5);
    contar_pares(vetor, ponteiro_de_pares, 5);

    printf ("Existe %d pares no vetor\n", *ponteiro_de_pares);
}