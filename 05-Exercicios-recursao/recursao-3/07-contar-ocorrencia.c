#include <stdio.h>

int contar_ocorrencia (int vetor[], int tamanho, int indice, int alvo) {

    if (indice == tamanho) {

        return 0;
    }

    if (vetor[indice] == alvo) {

        return 1 + contar_ocorrencia(vetor, tamanho, indice + 1, alvo);
    }

    return 0 + contar_ocorrencia(vetor, tamanho, indice + 1, alvo);
}

int main () {

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 2, 9, 10};

    printf ("O numero %d aparece %d vezes.", 2, contar_ocorrencia(array, 10, 0, 2));

    return 0;
}