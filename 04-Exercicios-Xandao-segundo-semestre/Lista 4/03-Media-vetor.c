#include <stdio.h>
#include <stdlib.h>

//Calculando a média de um vetor usando recursão;
//Vou somente considerar valores inteiros positivos;

int SomarVetor(int *vet, int size) {

    if(size < 0) {
        return 0;
    }

    return vet[size] + SomarVetor(vet, size - 1);
}

float CalcularMedia(int *vet, int size) {

    return SomarVetor(vet, size) / size;
}

int main() {

    int vetor[5] = {1, 2, 3, 4, 10};

    printf("Media do vetor: %.2f\n", CalcularMedia(vetor, 4));

    return 0;
}