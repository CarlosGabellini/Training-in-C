#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que recebe um vetor de inteiros v, seu tamanho n e dois ponteiros p e i.
A função deve retornar:

em *p, a quantidade de números pares;
em *i, a quantidade de números ímpares. */

const short int size = 10;

void contagem(int *vet, int n, int *p, int *i) {        //n eh o tamanho do vetor;

    *p = 0;
    *i = 0;             //Começando a contagem em 0;

    for(int a = 0; a < n; a++) {

        if(vet[a] % 2 == 0) {
            (*p)++;
        }

        else {
            (*i)++;
        }
    }
}

int main() {

    int *vetor = (int*) calloc(size, sizeof(int));
    int *preencher = (int*) malloc(sizeof(int));
    int pares;
    int impares;
    *preencher = 7;

    for(int i = 0; i < 10; i++) {
        vetor[i] = *preencher;

        *preencher += 5;
    }

    free(preencher);

    contagem(vetor, 10, &pares, &impares);

    printf("Numero de pares: %d\n", pares);
    printf("Numero de impares: %d\n", impares);

    free(vetor);

    return 0;
}