#include <stdio.h>
#include <stdlib.h>

//Fazer uma funcao recursiva que calcula o elemento máximo de um vetor;

int ElementoMaximo(int *vet, int size) {

    if(size <= 0) {
        return vet[size];
    }

    return vet[size] + ElementoMaximo(vet, size - 1);
}

int main() {

    int vetor[5] = {1, 2, 3, 4, 5};

    printf("Elemento maximo no vetor: %d\n", ElementoMaximo(vetor, (5 - 1)));

    return 0;
}