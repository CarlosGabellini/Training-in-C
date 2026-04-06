#include <stdio.h>

void mostrar_sudoku (int matriz[9][9]) {

    for (int i = 0; i < 9; i++) {

        for (int j = 0; j < 9; j++) {

            printf ("[%d]\t", matriz[i][j]);

            if (j % 3 == 2) {

                printf ("|\t");
            }
        }

        printf ("\n");

        if (i % 3 == 2) {

            int controle = 0;

            while (controle < 90) {

                printf ("_");

                controle++;
            }

            printf ("\n");
        }
    }
}

int solucao (int matriz[9][9]) {

    for (int linha = 0; linha < 9; linha++) {

        for (int coluna = 0; coluna < 9; coluna++) {

            for (int percorrer = 0; percorrer < 9; percorrer++) {

                //Condição do for onde devemos verificar se a solução do sudoku é válida;

                //Vendo aqui se o percorrer da linha está devidamente correto;

                if (percorrer != linha) {

                    if (matriz[linha][coluna] == matriz[percorrer][coluna]) {

                        return 0;
                    }
                }

                //Percorrendo ao mesmo tempo também toda a coluna;

                if (percorrer != coluna) {

                    if (matriz[linha][coluna] == matriz[linha][percorrer]) {

                        return 0;
                    }
                }
            }

            //Indo para os blocos 3x3 da matriz;

            /*Indo para o próximo bloco, é importante que quando fazer (linha / 3) * 3, basicamente estamos definindo em qual grupo de submatriz eles estão, na 
            qual, quando fazemos esta conta, podemos demonstrar por exemplo:
            
            se linha = 4, o resultado eh:

            (4 / 3) * 3 = Isso resulta no próprio 3, que é o começo do grupo;

            e o fim da linha do grupo vai ser:

            ((4 / 3) * 3) + 2 = Isso resulta em 5, onde vamos ter uma iteração de 3 até 5;

            UM IMPORTANTE TOPICO EH, LEMBRE-SE QUE É UMA DIVISAO DE INTEIROS! ENTÃO VAI RETORNAR UM INTEIRO;

            Isso equivale a mesma coisa para a coluna;

            Assim conseguimos verificar dentro de todas as submatrizes se tem um numero repetido;
            */

            for (int linha2 = (linha / 3) * 3; linha2 <= ((linha / 3) * 3) + 2; linha2++) {

                for (int coluna2 = (coluna / 3) * 3; coluna2 <= ((coluna / 3) * 3) + 2; coluna2++) {

                    //Conseguimos comparar aqui dentro as 9 submatrizes 3x3 que existem;

                    if (linha != linha2 || coluna != coluna2) {

                        if (matriz[linha][coluna] == matriz[linha2][coluna2]) {

                            return 0;
                        }
                    }
                }
            }
        }
    }

    //Se nenhum caso dar verdadeiro, significa que achamos a solução e a solução do sudoku é real e verdadeira;

    return 1;
}

int main () {

    int matriz[9][9] = {

    {4, 2, 6, 5, 7, 1, 3, 9, 8},
    {8, 5, 7, 2, 9, 3, 1, 4, 6},
    {1, 3, 9, 4, 6, 8, 2, 7, 5},
    {9, 7, 1, 3, 8, 5, 6, 2, 4},
    {5, 4, 3, 7, 2, 6, 8, 1, 9},
    {6, 8, 2, 1, 4, 9, 7, 5, 3},
    {7, 9, 4, 6, 3, 2, 5, 8, 1},
    {2, 6, 5, 8, 1, 4, 9, 3, 7},
    {3, 1, 8, 9, 5, 7, 4, 6, 2}

};

    mostrar_sudoku(matriz);
    printf ("Solucao: %d\n", solucao(matriz));

    return 0;
}