#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Encontrar o maior e menor valor em um dado vetor com malloc;

const int GLOBAL = 10;

int achar_menor (int *vetor) {

    int menor_encontrado = vetor[0];

    for (int b = 0; b < GLOBAL; b++) 
        if (vetor[b] < menor_encontrado) 
            menor_encontrado = vetor[b];

    return menor_encontrado;
}

int achar_maior (int *vetor) {

    int maior_encontrado = vetor[0];

    for (int c = 0; c < GLOBAL; c++)
        if (maior_encontrado < vetor[c]) 
            maior_encontrado = vetor[c];

    return maior_encontrado;
}

int main () {

    int *v1 = (int*) malloc(GLOBAL * sizeof(int));
    int menor;
    int maior = -1;

    for (int a = 0; a < GLOBAL; a++) {
        v1[a] = 1 + (rand() % 60);

        printf("Valor: %d\n", v1[a]);
    }

    menor = achar_menor(v1);
    maior = achar_maior(v1);

    printf("O menor numero foi: %d\n", menor);
    printf("O maior numero encontrado foi: %d\n", maior);

    free(v1);

    return 0;
}