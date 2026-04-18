#include <stdio.h>
#define GLOBAL 5

//O desafio aqui eh inverter um vetor de posicao;

void gerar_valores(int *vetor, int tamanho) {

    unsigned short int valor = 10;

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = valor;
        valor = valor + 3;
    }
}

void inverter_vetor(int *vetor, int tamanho) {

    int comecar_do_ultimo = tamanho - 1;
    int armazenamento;

    for (int a = 0; a < (tamanho / 2); a++) {

        armazenamento = vetor[a];

        vetor[a] = vetor[comecar_do_ultimo];
        vetor[comecar_do_ultimo] = armazenamento;
        comecar_do_ultimo--;
    }

    //Aqui conseguimos alterar os valores do vetor com essa funcao;
}

int main () {

    int vetor[GLOBAL];

    gerar_valores(vetor, GLOBAL);

    for (int i = 0; i < GLOBAL; i++) {
        printf ("[%d]", vetor[i]);
    }

    inverter_vetor(vetor, GLOBAL);

    printf ("\n");

    for (int i = 0; i < GLOBAL; i++) {
        printf ("[%d]", vetor[i]);
    }

    return 0;
}