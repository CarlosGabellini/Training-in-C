#include <stdio.h>

int magico (int matriz[30][30], int tamanho) {

    int soma_linha = 0;
    int soma_coluna = 0;
    int diagonal_principal = 0;
    int diagonal_secundaria = 0;
    int referencia = 0;

    for (int a = 0; a < tamanho; a++) {

        referencia += matriz[0][a];

        //Pegando a primeira linha e comparando com as demais;
        //Ele somente aqui vai somar todos os elementos da primeira linha;
    }

    for (int i = 0; i < tamanho; i++) {

        for (int j = 0; j < tamanho; j++) {

            soma_linha += matriz[i][j];
            soma_coluna += matriz[j][i];

            if (i == j) {

                diagonal_principal += matriz[i][j];
            }

            if (i + j == tamanho - 1) {

                diagonal_secundaria += matriz[i][j];
            }
        }

        //Fim do for interno aqui, voltando para o for externo;

        if (soma_linha != referencia || soma_coluna != referencia) {

            return 0;
        }

        soma_coluna = 0;
        soma_linha = 0;

        //Zerando os valores aqui e entrando na proxima coluna e linha;
    }

    //Esse if prescisa ser fora do for por que somente temos UMA diagonal principal e somente UMA diagonal secundaria;

    if (diagonal_principal != referencia || diagonal_secundaria != referencia) {

        return 0;
    }

    return 1;                           //Se nenhum caso for verdadeiro, então é um quadrado magico e devera retornar 1;
}

int main () {

    int array[30][30];
    int controle_for = 4;

    for (int i = 0; i < controle_for; i++) {

        for (int j = 0; j < controle_for; j++) {

            printf ("Digite um numero: \n");
            scanf ("%d", &array[i][j]);
        }
    }

    printf ("\n");

    for (int i = 0; i < controle_for; i++) {

        for (int j = 0; j < controle_for; j++) {

            printf ("[%d]\t", array[i][j]);
        }

        printf ("\n");
    }

    printf ("Ela é magica?\n");
    printf ("%d\n", magico(array, controle_for));

    return 0;
}