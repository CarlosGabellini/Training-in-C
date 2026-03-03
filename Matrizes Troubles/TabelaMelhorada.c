#include <stdio.h>
#define numero_input 24

int main () {

    //Fazer uma tabela até o numero 30;

    int vetor1 [numero_input][numero_input];
    int formato = 1;
    int formato2 = 1;

    for (int a = 0; a < numero_input; a++) {

        for (int b = 0; b < numero_input; b++) {

            vetor1[a][b] = 0;                   //Zerando todos os valores;
        }
    }

    //Dando formato pra tabela

    printf ("\t");

    for (int c = 0; c < numero_input; c++) {

        printf ("[%d]\t", formato++);
    }

    printf ("\n");

    //A magica acontece agora;

    for (int linha = 0; linha < numero_input; linha++) {

        printf ("[%d]\t", formato2++);

        for (int coluna = 0; coluna < numero_input; coluna++) {

            vetor1[linha][coluna] = (linha + 1) * (coluna + 1);
            printf ("%d\t", vetor1[linha][coluna]);
        }

        printf ("\n");
    }

    return 0;
}