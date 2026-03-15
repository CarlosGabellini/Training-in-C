#include <stdio.h>

int variavel_global = 100;

float media_vetor (float vetor[], int tamanho) {

    float media = 0;

    for (int i = 0; i < tamanho; i++) {

        media += vetor[i];
    }

    return media / tamanho;
}

int main () {

    float vetor[variavel_global];
    float soma_final = 0;
    float dados_input = 0.247;

    for (int i = 0; i < variavel_global; i++) {

        vetor[i] = dados_input;
        soma_final += vetor[i];

        printf ("%.3f\n", vetor[i]);

        dados_input += 0.341;
    }

    printf ("Soma final: %.3f\n", soma_final);

    printf ("Media aritmética: %.3f\n", media_vetor(vetor, variavel_global));

    return 0;
}