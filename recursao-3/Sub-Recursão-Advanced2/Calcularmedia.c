#include <stdio.h>

//faça uma função recursiva que calcula a media de um vetor;

float somar_media (int vetor[], int tamanho) {

    if (tamanho < 0) {

        return 0;
    }

    return vetor[tamanho] + somar_media(vetor, tamanho - 1);
}

float calcular_media (int vetor[], int tamanho) {

    return somar_media(vetor, tamanho) / tamanho;
}

int main () {

    int vetor[5] = {1, 2, 3, 4, 5};

    printf ("Media eh: %.2f.\n", calcular_media(vetor, 4));

    return 0;
}