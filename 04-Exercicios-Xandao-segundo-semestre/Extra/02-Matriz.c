#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const short int colunas = 4;

int *SomaDiagonal(int (*vet)[4], int size) {            //Aqui somente presciso declarar o primeiro ponteiro;

    int *soma = (int*) malloc(sizeof(int));
    *soma = 0;

    for(int linha = 0; linha < size; linha++) {
        for(int coluna = 0; coluna < size; coluna++) {

            if (linha == coluna) {
                *soma = vet[linha][coluna] + (*soma);
            }
        }
    }

    return soma;
}

int main() {

    int (*matriz)[4] = calloc(4, sizeof *matriz);       //Custo maior porém mais seguro;
    int *SomaDiag;

    for(int linha = 0; linha < 4; linha++) {
        for(int coluna = 0; coluna < 4; coluna++) {

            matriz[linha][coluna] = 1 + (rand() % (30));
            printf("[%d]\t", matriz[linha][coluna]);
        }

        printf("\n");
    }

    SomaDiag = SomaDiagonal(matriz, 4);

    printf("\n");
    printf("Valor da diagonal principal: %d\n", *SomaDiag);
    
    free(matriz);
    free(SomaDiag);
    
    return 0;
}