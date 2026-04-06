#include <stdio.h>

int main () {

    int variavel_tamanho = 5;
    int matriz[variavel_tamanho][variavel_tamanho];
    int matriz2[variavel_tamanho][variavel_tamanho];
    int matriz_resposta[variavel_tamanho][variavel_tamanho];

    int contagem = 1;
    int contagem_2 = 5;
    int soma = 0;

    for (int i = 0; i < variavel_tamanho; i++) {

        for (int j = 0; j < variavel_tamanho; j++) {

            matriz[i][j] = contagem;
            matriz2[i][j] = contagem_2;

            contagem += 1;
            contagem_2 += 1;

            printf ("[%d]\t", matriz[i][j]);
        }

        printf ("\n");
    }

    printf ("\n");

   for (int linha = 0; linha < variavel_tamanho; linha++) {

        for (int coluna = 0; coluna < variavel_tamanho; coluna++) {

            printf ("[%d]\t", matriz2[linha][coluna]);
        }

        printf ("\n");
    }

    printf ("\n");

    for (int linha = 0; linha < variavel_tamanho; linha++) {

        for (int coluna = 0; coluna < variavel_tamanho; coluna++) {

            for (int percorrer = 0; percorrer < variavel_tamanho; percorrer++) {

                soma += matriz[linha][percorrer] * matriz2[percorrer][coluna];

                //Esse for aqui é o mais importante, basicamente conseguimos fazer a multiplicação nessa parte.
            }

            matriz_resposta[linha][coluna] = soma;

            //Atribuindo o valor a soma antes de colocar soma = 0;

            soma = 0;

            printf ("[%d]\t", matriz_resposta[linha][coluna]);
        }

        printf ("\n");
    }

    return 0;
}
