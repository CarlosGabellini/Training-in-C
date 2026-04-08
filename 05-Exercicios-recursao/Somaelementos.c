#include <stdio.h>

int soma_elementos (int vetor[10], int tam) {

    if (tam < 1) {
        return 0;
    }

    return vetor[tam - 1] + soma_elementos(vetor, tam - 1);
}

int main () {

    int vetor[10];
    int controle = 0;
    int preenchendo_valores = 7;


    while (controle < 10) {

        vetor[controle] = preenchendo_valores;
        
        preenchendo_valores += 8;
        controle++;
    }

    printf ("Soma elementos: %d\n", soma_elementos(vetor, 10));

    return 0;
}