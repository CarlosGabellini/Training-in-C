#include <stdio.h>
#include <stdlib.h>

/*Refaça as funções de busca sequencial e busca binária vistas em aula assumindo que o
vetor possui chaves que podem aparecer repetidas. Neste caso, você deve retornar em um
outro vetor todas as posições onde a chave foi encontrada.
Protótipo da função: void busca(int vet[], int tam, int chave, int posicoes[], int
*n);

Tópicos;

• Você deve devolver em posicoes[] as posições de vet que possuem a chave, e devolver
em *n o número de ocorrências da chave.
– OBS: Na chamada desta função, o vetor posições deve ter espaço suficiente
(por exemplo, tam) para guardar todas as possíveis ocorrências da chave.*/

void InsertionSort (int *v, int tamanho) {

    int i, j, chave;

    for (i = 1; i < tamanho; i++) {

        chave = v[i];
        j = i - 1;

        while (j >= 0 && v[j] > chave) {

            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = chave;
    }
}


void busca_sequencial(int *vet, int size, int chave, int *posicoes, int *n) {

    for (int f = 0; f < size; f++) {

        if (vet[f] == chave) {
            posicoes[*n] = f;
            (*n)++;
        }
    }
}

int main() {

    int vetor[10];
    int posicoes[10];                           //O maximo de vezes que um numero pode se repetir é o maximo do vetor;
    int n = 0;

    for (int e = 0; e < 10; e++) {

        vetor[e] = 1 + (rand() % (30 - 1 + 1));
        printf("%d\n", vetor[e]);
    }

    busca_sequencial(vetor, 10, 14, posicoes, &n);

    printf("O numero foi achado %d vezes.\n", n);

    for (int a = 0; a < n; a++) {
        printf("Na posicao: %d\n", posicoes[a]);
    }

    return 0;
}