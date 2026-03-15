#include <stdio.h>

void matriz_transposta (int tamanho, int matriz[30][30], int matriz_resposta[30][30]) {

    for (int i = 0; i < tamanho; i++) {

        for (int j = 0; j < tamanho; j++) {

            matriz_resposta[i][j] = matriz[j][i];
        }
    }
}

int main () {

    int variavel_tamanho = 30;
    int controle_array = 3;

    int array[variavel_tamanho][variavel_tamanho];
    int segundo_array[variavel_tamanho][variavel_tamanho];

    for (int i = 0; i < controle_array; i++) {

        for (int k = 0; k < controle_array; k++) {

            printf ("Digite um numero: \n");
            scanf ("%d", &array[i][k]);
        }
    }

    matriz_transposta(controle_array, array, segundo_array);

    for (int i = 0; i < controle_array; i++) {

        for (int k = 0; k < controle_array; k++) {

            printf ("[%d]\t", segundo_array[i][k]);
        }

        printf ("\n");
    }

    return 0;
}